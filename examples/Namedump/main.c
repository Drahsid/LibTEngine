#include <tengine.h>
#include <libtengine/lib/CEngineApp.h>
#include <libtengine/lib/CCameraPool.h>
#include <libtengine/lib/CScene.h>
#include <libtengine/lib/libultra.h>

#define MAX_LEVEL_NAME_CHARS (64)

// Align to 32 bytes to make it easier to inject
__attribute__((aligned(0x20))) void main(void) {
    CScene* scene = GetScene();
    int levels = *(scene->m_nLevels); // We need to know the number of levels to get the names of
    int index = 0;

    // In my test, I codecaved the call to CEngineApp__Update, so I must call it here
    CEngineApp__Update(GetApp());

    for (index = 0; index < levels; index++) {
        // Get and write the level name
        CScene__GetLevelName(scene, index, (char*)(0x80750000 + ((MAX_LEVEL_NAME_CHARS + 1) * index)), MAX_LEVEL_NAME_CHARS - 1);
    }

    return;
}
