//----------------------------------------------------------------
#ifndef _ReadMe_h_
#define _ReadMe_h_
//----------------------------------------------------------------
//1，单件的创建和释放分别是 CreateXXX 和 ReleaseXXX
//   类对象的初始化和清零分别是 InitXXX 和 ClearXXX
//3，一帧开始->处理Windows消息（包括Input消息）->Update各个模块->Render各个模块。
//   在Update阶段，会把模型的位置，缩放，旋转，动画等等更新到最新值；
//   在Update阶段之前和Update阶段之后，当某些逻辑使得模型的位置，缩放，旋转，动画等等发生变化时，
//   只记录下最新值，而不应用，等到下一次Update阶段再应用。
//4，在SoD3DShaderXXX中，处于所有与Shader脚本交互的逻辑，包括数据的传递，渲染状态的设置，等等。
//5，代码使用的D3D的版本是11.1。
//6，使用右手坐标系，X轴向右，Y轴向里，Z轴向上。
//   与右手坐标系相关的函数有 XMMatrixPerspectiveFovRH 和 XMMatrixLookToRH 。
//----------------------------------------------------------------
#endif //_ReadMe_h_
//----------------------------------------------------------------
