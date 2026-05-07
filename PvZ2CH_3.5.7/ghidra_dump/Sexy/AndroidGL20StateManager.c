// Class: Sexy::AndroidGL20StateManager


/* Sexy::AndroidGL20StateManager::SetDefaultShader() */

void __thiscall Sexy::AndroidGL20StateManager::SetDefaultShader(AndroidGL20StateManager *this)

{
  (**(code **)(*(long *)this + 0x90))(this,this + 0x2e8);
  return;
}


/* Sexy::AndroidGL20StateManager::SetDefaultMultiShader() */

void __thiscall Sexy::AndroidGL20StateManager::SetDefaultMultiShader(AndroidGL20StateManager *this)

{
  (**(code **)(*(long *)this + 0x90))(this,this + 0x30c);
  return;
}


/* Sexy::AndroidGL20StateManager::GetCommitFunc(Sexy::RenderStateManager::State*) */

code * __thiscall
Sexy::AndroidGL20StateManager::GetCommitFunc(AndroidGL20StateManager *this,State *param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 8) == 100) {
    return DoCommitGL20State;
  }
  if ((*(int *)(param_1 + 8) == 8) &&
     ((*(int *)(param_1 + 0xc) == 0 || (*(int *)(param_1 + 0xc) == 0xe)))) {
    return DoCommitTexGL20State;
  }
  pcVar1 = (code *)BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetCommitFunc
                             ((BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *)this,param_1);
  return pcVar1;
}


/* Sexy::AndroidGL20StateManager::Reset() */

void __thiscall Sexy::AndroidGL20StateManager::Reset(AndroidGL20StateManager *this)

{
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::Reset
            ((BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *)this);
  glColorMask(1,1,1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20StateManager::SetOrthoProjection(Sexy::SexyMatrix4 const*) */

void __thiscall
Sexy::AndroidGL20StateManager::SetOrthoProjection
          (AndroidGL20StateManager *this,SexyMatrix4 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x338) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x340) = uVar1;
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x348) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x350) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x358) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x360) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x368) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x370) = uVar1;
  *(int *)(this + 0x378) = *(int *)(this + 0x378) + 1;
  if (*(long *)(this + 0x330) != 0) {
    local_48 = *(undefined4 *)param_1;
    local_44 = *(undefined4 *)(param_1 + 4);
    local_40 = *(undefined4 *)(param_1 + 8);
    local_3c = *(undefined4 *)(param_1 + 0xc);
    local_38 = *(undefined4 *)(param_1 + 0x10);
    local_34 = *(undefined4 *)(param_1 + 0x14);
    local_30 = *(undefined4 *)(param_1 + 0x18);
    local_2c = *(undefined4 *)(param_1 + 0x1c);
    local_28 = *(undefined4 *)(param_1 + 0x20);
    local_24 = *(undefined4 *)(param_1 + 0x24);
    local_20 = *(undefined4 *)(param_1 + 0x28);
    local_1c = *(undefined4 *)(param_1 + 0x2c);
    local_18 = *(undefined4 *)(param_1 + 0x30);
    local_14 = *(undefined4 *)(param_1 + 0x34);
    local_10 = *(undefined4 *)(param_1 + 0x38);
    local_c = *(undefined4 *)(param_1 + 0x3c);
    glUniformMatrix4fv(*(undefined4 *)(*(long *)(this + 0x330) + 4),1,0,&local_48);
    glUniformMatrix4fv(*(undefined4 *)(*(long *)(this + 0x330) + 0x10),1,0,&local_48);
    lVar3 = *(long *)(this + 0x330);
    uVar2 = *(undefined4 *)(this + 0x378);
    *(undefined4 *)(lVar3 + 8) = uVar2;
    *(undefined4 *)(lVar3 + 0x14) = uVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidGL20StateManager::ResetStates() */

void __thiscall Sexy::AndroidGL20StateManager::ResetStates(AndroidGL20StateManager *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  State *this_00;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::ResetStates
            ((BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *)this);
  uVar4 = *(undefined8 *)(this + 0x2d0);
  lVar1 = FUN_052eb790(uVar4,*(undefined8 *)(this + 0x2d8));
  if (lVar1 != 0) {
    lVar6 = 0;
    while( true ) {
      puVar2 = (undefined8 *)FUN_052eb774(uVar4,lVar6);
      uVar4 = *puVar2;
      lVar3 = FUN_052eb7a4(uVar4,puVar2[1]);
      if (lVar3 != 0) {
        lVar5 = 0;
        while( true ) {
          this_00 = (State *)FUN_052eb780(uVar4,lVar5);
          RenderStateManager::State::Reset(this_00);
          if (lVar5 + 1 == lVar3) break;
          puVar2 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x2d0),lVar6);
          uVar4 = *puVar2;
          lVar5 = lVar5 + 1;
        }
      }
      lVar6 = lVar6 + 1;
      if (lVar6 == lVar1) break;
      uVar4 = *(undefined8 *)(this + 0x2d0);
    }
  }
  return;
}


/* Sexy::AndroidGL20StateManager::SetTexture(int, unsigned int, unsigned int) */

void Sexy::AndroidGL20StateManager::SetTexture(int param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  State *pSVar2;
  uint in_w3;
  
  puVar1 = (undefined8 *)FUN_052eb774(*(undefined8 *)((ulong)(uint)param_1 + 0x298),0xe);
  pSVar2 = (State *)FUN_052eb780(*puVar1,(long)(int)param_2);
  RenderStateManager::State::SetValue(pSVar2,param_3);
  puVar1 = (undefined8 *)FUN_052eb774(*(undefined8 *)((ulong)(uint)param_1 + 0x298),0xf);
  pSVar2 = (State *)FUN_052eb780(*puVar1,(long)(int)param_2);
  RenderStateManager::State::SetValue(pSVar2,in_w3);
  return;
}


/* Sexy::AndroidGL20StateManager::SetShader(Sexy::ShaderInfo*) */

void __thiscall
Sexy::AndroidGL20StateManager::SetShader(AndroidGL20StateManager *this,ShaderInfo *param_1)

{
  undefined8 *puVar1;
  State *this_00;
  
  puVar1 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x2d0),1);
  this_00 = (State *)FUN_052eb780(*puVar1,0);
  RenderStateManager::State::SetValue(this_00,param_1);
  return;
}


/* Sexy::AndroidGL20StateManager::InvalidateShader() */

void __thiscall Sexy::AndroidGL20StateManager::InvalidateShader(AndroidGL20StateManager *this)

{
  undefined8 *puVar1;
  State *pSVar2;
  void *pvVar3;
  
  puVar1 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x2d0),1);
  pSVar2 = (State *)FUN_052eb780(*puVar1,0);
  pvVar3 = (void *)RenderStateManager::State::GetPtr(pSVar2);
  RenderStateManager::State::Reset(pSVar2);
  puVar1 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x2d0),1);
  pSVar2 = (State *)FUN_052eb780(*puVar1,0);
  RenderStateManager::State::SetValue(pSVar2,pvVar3);
  puVar1 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x2d0),1);
  pSVar2 = (State *)FUN_052eb780(*puVar1,0);
  RenderStateManager::State::SetDirty(pSVar2);
  return;
}


/* Sexy::AndroidGL20StateManager::DoCommitTexGL20State(Sexy::RenderStateManager::State*) */

undefined8 Sexy::AndroidGL20StateManager::DoCommitTexGL20State(State *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  State *pSVar5;
  ulong uVar6;
  AndroidGL20StateManager *this;
  ulong uVar7;
  
  this = *(AndroidGL20StateManager **)param_1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0xc) == 0xe) {
      iVar2 = RenderStateManager::State::GetDword(param_1);
      if (iVar2 == 0) {
        glActiveTexture(iVar1 + 0x84c0);
        glBindTexture(0xde1,*(undefined4 *)(this + 0x37c));
      }
      else {
        glActiveTexture(iVar1 + 0x84c0);
        puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0xf);
        pSVar5 = (State *)FUN_052eb780(*puVar4,iVar1);
        uVar6 = RenderStateManager::State::GetDword(pSVar5);
        uVar7 = uVar6 & 0xffffffff;
        glBindTexture(uVar6,iVar2);
        puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x10);
        pSVar5 = (State *)FUN_052eb780(*puVar4,iVar1);
        uVar3 = RenderStateManager::State::GetDword(pSVar5);
        glTexParameteri(uVar7,0x2802,uVar3);
        puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x11);
        pSVar5 = (State *)FUN_052eb780(*puVar4,iVar1);
        uVar3 = RenderStateManager::State::GetDword(pSVar5);
        glTexParameteri(uVar7,0x2803,uVar3);
        puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x13);
        pSVar5 = (State *)FUN_052eb780(*puVar4,iVar1);
        uVar3 = RenderStateManager::State::GetDword(pSVar5);
        glTexParameteri(uVar7,0x2800,uVar3);
        puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x12);
        pSVar5 = (State *)FUN_052eb780(*puVar4,iVar1);
        uVar3 = RenderStateManager::State::GetDword(pSVar5);
        glTexParameteri(uVar7,0x2801,uVar3);
        puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x10);
        pSVar5 = (State *)FUN_052eb780(*puVar4,iVar1);
        RenderStateManager::State::ClearDirty(pSVar5,true);
        puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x11);
        pSVar5 = (State *)FUN_052eb780(*puVar4,iVar1);
        RenderStateManager::State::ClearDirty(pSVar5,true);
        puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x13);
        pSVar5 = (State *)FUN_052eb780(*puVar4,iVar1);
        RenderStateManager::State::ClearDirty(pSVar5,true);
        puVar4 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x298),0x12);
        pSVar5 = (State *)FUN_052eb780(*puVar4,iVar1);
        RenderStateManager::State::ClearDirty(pSVar5,true);
      }
      RenderStateManager::State::ClearDirty(param_1,false);
    }
    return 1;
  }
  InvalidateShader(this);
  RenderStateManager::State::ClearDirty(param_1,false);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20StateManager::GenerateGPUResources() */

void __thiscall Sexy::AndroidGL20StateManager::GenerateGPUResources(AndroidGL20StateManager *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"GenerateGPUResources");
  uVar2 = glCreateProgram();
  *(undefined4 *)(this + 0x2e8) = uVar2;
  uVar2 = glCreateProgram();
  *(undefined4 *)(this + 0x2f4) = uVar2;
  uVar2 = glCreateProgram();
  *(undefined4 *)(this + 0x318) = uVar2;
  OpenGLIdRegistry::StaticRegisterShaderIds(1,(uint *)(this + 0x2e8));
  OpenGLIdRegistry::StaticRegisterShaderIds(1,(uint *)(this + 0x2f4));
  OpenGLIdRegistry::StaticRegisterShaderIds(1,(uint *)(this + 0x318));
  FUN_052eb670(&local_10,0x8b31,
               "attribute vec4 position;\nattribute vec4 color;\nattribute vec2 texcoord0;\nvarying lowp vec4 colorVarying;\nvarying mediump vec2 texVarying0;\nuniform mat4  screenMatrix;\nvoid main()\n{\ngl_Position = screenMatrix * vec4(position.x,position.y, position.z,1.0);\ncolorVarying = color;\ntexVarying0 = texcoord0;\n}\n"
              );
  FUN_052eb670(&local_c,0x8b30,
               "varying lowp vec4 colorVarying;\nvarying mediump vec2 texVarying0;\nuniform sampler2D Tex0;\nuniform sampler2D Tex1;\nvoid main()\n{\n\t lowp vec4 color = texture2D(Tex0,texVarying0.xy);\n\t color.a = texture2D(Tex1,texVarying0.xy).a;\n\t gl_FragColor = color * colorVarying;\n}\n"
              );
  glAttachShader(*(undefined4 *)(this + 0x318),local_10);
  glAttachShader(*(undefined4 *)(this + 0x318),local_c);
  glBindAttribLocation(*(undefined4 *)(this + 0x318),0,"position");
  glBindAttribLocation(*(undefined4 *)(this + 0x318),2,"texcoord0");
  glBindAttribLocation(*(undefined4 *)(this + 0x318),1,"color");
  FUN_052eb70c(*(undefined4 *)(this + 0x318));
  uVar2 = glGetUniformLocation(*(undefined4 *)(this + 0x318),"screenMatrix");
  *(undefined4 *)(this + 0x31c) = uVar2;
  glUseProgram(*(undefined4 *)(this + 0x318));
  uVar3 = glGetUniformLocation(*(undefined4 *)(this + 0x318),&DAT_056e7020);
  if ((int)uVar3 != -1) {
    glUniform1i(uVar3,0);
  }
  uVar3 = glGetUniformLocation(*(undefined4 *)(this + 0x318),&DAT_056e7028);
  if ((int)uVar3 != -1) {
    glUniform1i(uVar3,1);
  }
  uVar3 = glGetUniformLocation(*(undefined4 *)(this + 0x318),&DAT_056e7030);
  if ((int)uVar3 != -1) {
    glUniform1i(uVar3,2);
  }
  FUN_052eb670(&local_10,0x8b31,
               "attribute vec4 position;\nattribute vec4 color;\nattribute vec2 texcoord0;\nvarying lowp vec4 colorVarying;\nvarying mediump vec2 texVarying0;\nuniform mat4  screenMatrix;\nvoid main()\n{\ngl_Position = screenMatrix * vec4(position.x,position.y, position.z,1.0);\ncolorVarying = color;\ntexVarying0 = texcoord0;\n}\n"
              );
  FUN_052eb670(&local_c,0x8b30,
               "varying lowp vec4 colorVarying;\nvarying mediump vec2 texVarying0;\nuniform sampler2D tex;\nvoid main()\n{\n\t lowp vec4 color = texture2D(tex,texVarying0.xy);\n\t gl_FragColor = color * colorVarying;\n}\n"
              );
  glAttachShader(*(undefined4 *)(this + 0x2f4),local_10);
  glAttachShader(*(undefined4 *)(this + 0x2f4),local_c);
  glBindAttribLocation(*(undefined4 *)(this + 0x2f4),0,"position");
  glBindAttribLocation(*(undefined4 *)(this + 0x2f4),2,"texcoord0");
  glBindAttribLocation(*(undefined4 *)(this + 0x2f4),1,"color");
  FUN_052eb70c(*(undefined4 *)(this + 0x2f4));
  uVar2 = glGetUniformLocation(*(undefined4 *)(this + 0x2f4),"screenMatrix");
  *(undefined4 *)(this + 0x2f8) = uVar2;
  FUN_052eb670(&local_10,0x8b31,
               "attribute vec4 position;\nattribute vec4 color;\nattribute vec2 texcoord0;\nvarying lowp vec4 colorVarying;\nvarying mediump vec2 texVarying0;\nuniform mat4  screenMatrix;\nvoid main()\n{\ngl_Position = screenMatrix * vec4(position.x * 1.0/8.0,position.y * 1.0/8.0, position.z * 1.0/8.0,1.0);\ncolorVarying = color;\ntexVarying0 = texcoord0 * 1.0/8192.0;\n}\n"
              );
  FUN_052eb670(&local_c,0x8b30,
               "varying lowp vec4 colorVarying;\nvarying mediump vec2 texVarying0;\nuniform sampler2D tex;\nvoid main()\n{\n\t lowp vec4 color = texture2D(tex,texVarying0.xy);\n\t gl_FragColor = color * colorVarying;\n}\n"
              );
  glAttachShader(*(undefined4 *)(this + 0x2e8),local_10);
  glAttachShader(*(undefined4 *)(this + 0x2e8),local_c);
  glBindAttribLocation(*(undefined4 *)(this + 0x2e8),0,"position");
  glBindAttribLocation(*(undefined4 *)(this + 0x2e8),2,"texcoord0");
  glBindAttribLocation(*(undefined4 *)(this + 0x2e8),1,"color");
  FUN_052eb70c(*(undefined4 *)(this + 0x2e8));
  uVar2 = glGetUniformLocation(*(undefined4 *)(this + 0x2e8),"screenMatrix");
  *(undefined4 *)(this + 0x2ec) = uVar2;
  if (*(uint *)(this + 0x37c) != 0) {
    cVar1 = OpenGLIdRegistry::StaticIsTextureIdValid(*(uint *)(this + 0x37c));
    if (cVar1 != '\0') {
      glDeleteTextures(1,this + 0x37c);
    }
    OpenGLIdRegistry::StaticUnregisterIds(1,(uint *)(this + 0x37c));
    *(undefined4 *)(this + 0x37c) = 0;
  }
  glGenTextures(1,this + 0x37c);
  OpenGLIdRegistry::StaticRegisterIds(1,(uint *)(this + 0x37c));
  glBindTexture(0xde1,*(undefined4 *)(this + 0x37c));
  local_c = 0xffffffff;
  glTexParameteri(0xde1,0x2802,0x812f);
  glTexParameteri(0xde1,0x2803,0x812f);
  glTexParameteri(0xde1,0x2800,0x2600);
  glTexParameteri(0xde1,0x2801,0x2600);
  glTexImage2D(0xde1,0,0x1908,1,1,0,0x1908,0x8033,&local_c);
  glBindTexture(0xde1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidGL20StateManager::Init() */

void __thiscall Sexy::AndroidGL20StateManager::Init(AndroidGL20StateManager *this)

{
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::Init
            ((BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *)this);
  *(undefined8 *)(this + 0x330) = 0;
  SexyMatrix4::LoadIdentity((SexyMatrix4 *)(this + 0x338));
  *(undefined4 *)(this + 0x378) = 0;
  GenerateGPUResources(this);
  glColorMask(1,1,1,1);
  return;
}


/* Sexy::AndroidGL20StateManager::GotFocus() */

void __thiscall Sexy::AndroidGL20StateManager::GotFocus(AndroidGL20StateManager *this)

{
  (**(code **)(*(long *)this + 0x20))();
  GenerateGPUResources(this);
  return;
}


/* Sexy::AndroidGL20StateManager::ReleaseGPUResources() */

void __thiscall Sexy::AndroidGL20StateManager::ReleaseGPUResources(AndroidGL20StateManager *this)

{
  char cVar1;
  
  OutputDebugStrF((wchar_t *)"ReleaseGPUResources");
  cVar1 = glIsProgram(*(undefined4 *)(this + 0x2e8));
  if (cVar1 != '\0') {
    glDeleteProgram(*(undefined4 *)(this + 0x2e8));
  }
  OpenGLIdRegistry::StaticUnregisterShaderIds(1,(uint *)(this + 0x2e8));
  *(undefined4 *)(this + 0x2e8) = 0;
  cVar1 = glIsProgram(*(undefined4 *)(this + 0x2f4));
  if (cVar1 != '\0') {
    glDeleteProgram(*(undefined4 *)(this + 0x2f4));
  }
  OpenGLIdRegistry::StaticUnregisterShaderIds(1,(uint *)(this + 0x2f4));
  *(undefined4 *)(this + 0x2f4) = 0;
  cVar1 = glIsProgram(*(undefined4 *)(this + 0x318));
  if (cVar1 != '\0') {
    glDeleteProgram(*(undefined4 *)(this + 0x318));
  }
  OpenGLIdRegistry::StaticUnregisterShaderIds(1,(uint *)(this + 0x318));
  *(undefined4 *)(this + 0x318) = 0;
  if (*(uint *)(this + 0x37c) == 0) {
    return;
  }
  cVar1 = OpenGLIdRegistry::StaticIsTextureIdValid(*(uint *)(this + 0x37c));
  if (cVar1 != '\0') {
    glDeleteTextures(1,this + 0x37c);
  }
  OpenGLIdRegistry::StaticUnregisterIds(1,(uint *)(this + 0x37c));
  *(undefined4 *)(this + 0x37c) = 0;
  return;
}


/* Sexy::AndroidGL20StateManager::LostFocus() */

void __thiscall Sexy::AndroidGL20StateManager::LostFocus(AndroidGL20StateManager *this)

{
  if (*(char *)(gSexyAppBase + 0x8b8) != '\0') {
    return;
  }
  ReleaseGPUResources(this);
  return;
}


/* Sexy::AndroidGL20StateManager::GetShader() */

void __thiscall Sexy::AndroidGL20StateManager::GetShader(AndroidGL20StateManager *this)

{
  undefined8 *puVar1;
  State *this_00;
  
  puVar1 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x2d0),1);
  this_00 = (State *)FUN_052eb780(*puVar1,0);
  RenderStateManager::State::GetPtr(this_00);
  return;
}


/* Sexy::AndroidGL20StateManager::IsDefaultShader() */

bool __thiscall Sexy::AndroidGL20StateManager::IsDefaultShader(AndroidGL20StateManager *this)

{
  AndroidGL20StateManager *pAVar1;
  
  pAVar1 = (AndroidGL20StateManager *)GetShader(this);
  if (pAVar1 != this + 0x2e8) {
    return pAVar1 == this + 0x30c;
  }
  return true;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20StateManager::DoCommitGL20State(Sexy::RenderStateManager::State*) */

void Sexy::AndroidGL20StateManager::DoCommitGL20State(State *param_1)

{
  uint uVar1;
  long lVar2;
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *this;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  this = *(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0xc) == 1) {
    uVar1 = BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetVertexFormat(this);
    if ((uVar1 & 1) == 0) {
      lVar2 = RenderStateManager::State::GetPtr(param_1);
      *(long *)(this + 0x330) = lVar2;
      if (lVar2 != 0) {
        glUseProgram(*(undefined4 *)(lVar2 + 0xc));
        local_48 = *(undefined4 *)(this + 0x338);
        local_44 = *(undefined4 *)(this + 0x33c);
        local_40 = *(undefined4 *)(this + 0x340);
        local_3c = *(undefined4 *)(this + 0x344);
        local_38 = *(undefined4 *)(this + 0x348);
        local_34 = *(undefined4 *)(this + 0x34c);
        local_30 = *(undefined4 *)(this + 0x350);
        local_2c = *(undefined4 *)(this + 0x354);
        local_28 = *(undefined4 *)(this + 0x358);
        local_24 = *(undefined4 *)(this + 0x35c);
        local_20 = *(undefined4 *)(this + 0x360);
        local_1c = *(undefined4 *)(this + 0x364);
        local_18 = *(undefined4 *)(this + 0x368);
        local_14 = *(undefined4 *)(this + 0x36c);
        local_10 = *(undefined4 *)(this + 0x370);
        local_c = *(undefined4 *)(this + 0x374);
        glUniformMatrix4fv(*(undefined4 *)(*(long *)(this + 0x330) + 0x10),1,uVar1 & 1,&local_48);
        *(undefined4 *)(*(long *)(this + 0x330) + 0x14) = *(undefined4 *)(this + 0x378);
      }
    }
    else {
      lVar2 = RenderStateManager::State::GetPtr(param_1);
      *(long *)(this + 0x330) = lVar2;
      if (lVar2 != 0) {
        glGetError();
        glUseProgram(**(undefined4 **)(this + 0x330));
        glGetError();
        local_48 = *(undefined4 *)(this + 0x338);
        local_44 = *(undefined4 *)(this + 0x33c);
        local_40 = *(undefined4 *)(this + 0x340);
        local_3c = *(undefined4 *)(this + 0x344);
        local_38 = *(undefined4 *)(this + 0x348);
        local_34 = *(undefined4 *)(this + 0x34c);
        local_30 = *(undefined4 *)(this + 0x350);
        local_2c = *(undefined4 *)(this + 0x354);
        local_28 = *(undefined4 *)(this + 0x358);
        local_24 = *(undefined4 *)(this + 0x35c);
        local_20 = *(undefined4 *)(this + 0x360);
        local_1c = *(undefined4 *)(this + 0x364);
        local_18 = *(undefined4 *)(this + 0x368);
        local_14 = *(undefined4 *)(this + 0x36c);
        local_10 = *(undefined4 *)(this + 0x370);
        local_c = *(undefined4 *)(this + 0x374);
        glUniformMatrix4fv(*(undefined4 *)(*(long *)(this + 0x330) + 4),1,0,&local_48);
        *(undefined4 *)(*(long *)(this + 0x330) + 8) = *(undefined4 *)(this + 0x378);
      }
    }
    RenderStateManager::State::ClearDirty(param_1,false);
  }
  else if (*(int *)(param_1 + 0xc) == 2) {
    RenderStateManager::State::ClearDirty(param_1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::AndroidGL20StateManager::AndroidGL20StateManager() */

void __thiscall
Sexy::AndroidGL20StateManager::AndroidGL20StateManager(AndroidGL20StateManager *this)

{
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::BaseOpenGLStateManager
            ((BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *)this);
  *(undefined ***)this = &PTR_GetCommitFunc_06a34110;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  ShaderInfo::ShaderInfo((ShaderInfo *)(this + 0x2e8));
  ShaderInfo::ShaderInfo((ShaderInfo *)(this + 0x30c));
  return;
}


/* Sexy::AndroidGL20StateManager::~AndroidGL20StateManager() */

void __thiscall
Sexy::AndroidGL20StateManager::~AndroidGL20StateManager(AndroidGL20StateManager *this)

{
  *(undefined ***)this = &PTR_GetCommitFunc_06a34110;
  std::
  vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
  ::~vector((vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
             *)(this + 0x2d0));
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::~BaseOpenGLStateManager
            ((BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *)this);
  return;
}


/* Sexy::AndroidGL20StateManager::~AndroidGL20StateManager() */

void __thiscall
Sexy::AndroidGL20StateManager::~AndroidGL20StateManager(AndroidGL20StateManager *this)

{
  ~AndroidGL20StateManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20StateManager::InitStates() */

void __thiscall Sexy::AndroidGL20StateManager::InitStates(AndroidGL20StateManager *this)

{
  uint uVar1;
  vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>> *this_00;
  undefined8 *puVar2;
  StateValue *pSVar3;
  int iVar4;
  long lVar5;
  string asStack_d0 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  State aSStack_b0 [168];
  long local_8;
  
  iVar4 = 3;
  local_8 = ___stack_chk_guard;
  BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::InitStates
            ((BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> *)this);
  do {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
    std::
    vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
    ::push_back((vector<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>,std::allocator<std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>>>
                 *)(this + 0x2d0),(vector *)avStack_c8);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    ~vector((vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
             *)avStack_c8);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  lVar5 = 0;
  do {
    this_00 = (vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>
               *)FUN_052eb774(*(undefined8 *)(this + 0x2d0),lVar5);
    uVar1 = (uint)lVar5;
    lVar5 = lVar5 + 1;
    RenderStateManager::State::State(aSStack_b0,(RenderStateManager *)this,100,uVar1,0,0);
    std::vector<Sexy::RenderStateManager::State,std::allocator<Sexy::RenderStateManager::State>>::
    push_back(this_00,aSStack_b0);
    RenderStateManager::State::~State(aSStack_b0);
  } while (lVar5 != 3);
  puVar2 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x2d0),1);
  pSVar3 = (StateValue *)FUN_052eb780(*puVar2,0);
  RenderStateManager::StateValue::StateValue((StateValue *)avStack_c8,(void *)0x0);
  std::string::string(asStack_d0,"GL20:SHADERPROGRAM_ORTHO");
  RenderStateManager::State::Init(pSVar3,(string *)avStack_c8,(char *)asStack_d0);
  std::string::~string(asStack_d0);
  nop();
  puVar2 = (undefined8 *)FUN_052eb774(*(undefined8 *)(this + 0x2d0),2);
  pSVar3 = (StateValue *)FUN_052eb780(*puVar2,0);
  RenderStateManager::StateValue::StateValue((StateValue *)avStack_c8,(void *)0x0);
  std::string::string(asStack_d0,"GL20:SHADERPROGRAM_3D");
  RenderStateManager::State::Init(pSVar3,(string *)avStack_c8,(char *)asStack_d0);
  std::string::~string(asStack_d0);
  nop();
  InvalidateShader(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

