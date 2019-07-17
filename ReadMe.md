# fbx-view

    a directx11 demo for loading and rendering fbx format file which exported from 3ds-max

    本demo的主要目标是加载并渲染fbx模型。
    fbx文件是3ds max软件导出来的模型文件，可以是静态模型，也可以是含有动画信息的动画模型。
    Unity3D引擎就是使用fbx文件作为主要的模型文件。
    本demo可以正确处理fbx静态模型，也可以正确处理动画模型。

![demo](screenshot.png)

# 关键代码
### Loading fbx :
    StFBXDefine.cpp
    StFBXDefine.h
    StFBXManager.cpp
    StFBXManager.h
    StFBXModel.cpp
    StFBXModel.h
    StFBXUserDefine.h

### Rending fbx :
    SoD3DModelFbx.cpp
    SoD3DModelFbx.h
    SoD3DLogicFlowHelp.cpp

# 编译方法
        Windows7
        VisualStudio2013
        向工程中添加你自己的DirectX11的include目录和lib目录
        然后就可以编译了
        
# 操作方法
    程序运行后，把fbx文件拖放到程序窗口内，fbx模型就会被加载并渲染出来。
    如果是动画模型，则会播放动画。
    把 png,dds 贴图拖放到程序窗口内，fbx模型就会蒙上该贴图。
    2019-07-17，完善代码，允许加载只含有动画的fbx文件。
    用过Unity3D引擎的同学都知道，有一类fbx文件只含有Mesh信息（例如S_Npc_009.FBX），
    另有一类fbx只含有动画信息（例如S_Npc_009@Speak01.FBX）。
    本程序能够正确处理这两类fbx文件。
    先把S_Npc_009.FBX文件拖放到窗口内，再把S_Npc_009@Speak01.FBX拖放到窗口内，
    就能够播放动画。
    


### 更多详情请移步到我的博客 http://blog.csdn.net/oilcode/article/details/77804258
