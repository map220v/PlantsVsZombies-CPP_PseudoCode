// Class: Sexy::AndroidGL20RenderEffect


/* Sexy::AndroidGL20RenderEffect::SetMatrix(std::string const&, float const*) */

void Sexy::AndroidGL20RenderEffect::SetMatrix(string *param_1,float *param_2)

{
  (**(code **)(*(long *)param_1 + 0x20))();
  return;
}


/* Sexy::AndroidGL20RenderEffect::PassUsesVertexShader(int) */

bool __thiscall
Sexy::AndroidGL20RenderEffect::PassUsesVertexShader(AndroidGL20RenderEffect *this,int param_1)

{
  long lVar1;
  
  if (*(long *)(this + 0x18) != 0) {
    lVar1 = FUN_052d972c(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),
                         param_1 + *(int *)(*(long *)(this + 0x18) + 0xc));
    return *(int *)(lVar1 + 0x14) != -1;
  }
  return false;
}


/* Sexy::AndroidGL20RenderEffect::PassUsesPixelShader(int) */

bool __thiscall
Sexy::AndroidGL20RenderEffect::PassUsesPixelShader(AndroidGL20RenderEffect *this,int param_1)

{
  long lVar1;
  
  if (*(long *)(this + 0x18) != 0) {
    lVar1 = FUN_052d972c(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),
                         param_1 + *(int *)(*(long *)(this + 0x18) + 0xc));
    return *(int *)(lVar1 + 0x18) != -1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::GetCurrentTechniqueName() */

void Sexy::AndroidGL20RenderEffect::GetCurrentTechniqueName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(undefined4 **)(in_x0 + 0x18) == (undefined4 *)0x0) {
    __s = "";
  }
  else {
    __s = (char *)FUN_052d97f4(*(undefined8 *)(in_x0 + 0x20),*(undefined8 *)(in_x0 + 0x28),
                               **(undefined4 **)(in_x0 + 0x18));
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::EndPass(void* const&, int) */

void Sexy::AndroidGL20RenderEffect::EndPass(void **param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_10 [8];
  long local_8;
  
  plVar2 = param_1[1];
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*plVar2 + 0x30);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_10,*(rbtree_node **)(ulong)(uint)param_2);
  (*pcVar3)(plVar2,arStack_10);
  (**(code **)(*(long *)param_1[1] + 0x48))(param_1[1]);
  lVar1 = ___stack_chk_guard;
  *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + -1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::End(void* const&) */

void __thiscall Sexy::AndroidGL20RenderEffect::End(AndroidGL20RenderEffect *this,void **param_1)

{
  long *plVar1;
  code *pcVar2;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_10 [8];
  long local_8;
  
  plVar1 = *(long **)(this + 8);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x30);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_10,*param_1);
  (*pcVar2)(plVar1,arStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::Begin(void*&, Sexy::HRenderContext const&) */

void __thiscall
Sexy::AndroidGL20RenderEffect::Begin
          (AndroidGL20RenderEffect *this,void **param_1,HRenderContext *param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 local_10;
  long local_8;
  
  local_10 = *(undefined8 *)param_2;
  local_8 = ___stack_chk_guard;
  cVar1 = CompiledMap::Initialized((CompiledMap *)&local_10);
  if (cVar1 == '\0') {
    local_10 = (**(code **)(**(long **)(this + 8) + 0x38))(*(long **)(this + 8));
    pvVar3 = (void *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
    *param_1 = pvVar3;
    *(undefined4 *)(this + 0x88) = 0;
    lVar4 = *(long *)(this + 0x18);
  }
  else {
    (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),(CompiledMap *)&local_10);
    pvVar3 = (void *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
    *param_1 = pvVar3;
    *(undefined4 *)(this + 0x88) = 0;
    lVar4 = *(long *)(this + 0x18);
  }
  if (lVar4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(lVar4 + 8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* Sexy::AndroidGL20RenderEffect::GetPopFXTechnique(char const*) */

undefined4 * __thiscall
Sexy::AndroidGL20RenderEffect::GetPopFXTechnique(AndroidGL20RenderEffect *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *__s1;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(this + 0x28);
  iVar2 = *(int *)(lVar5 + 8);
  if (iVar2 != 0) {
    uVar6 = *(undefined8 *)(this + 0x20);
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 1;
      puVar4 = (undefined4 *)FUN_052d9714(uVar6,lVar5,iVar3);
      __s1 = (char *)FUN_052d97f4(uVar6,lVar5,*puVar4);
      iVar3 = strcasecmp(__s1,param_1);
      if (iVar3 == 0) {
        return puVar4;
      }
      iVar3 = iVar1;
    } while (iVar1 != iVar2);
  }
  return (undefined4 *)0x0;
}


/* Sexy::AndroidGL20RenderEffect::SetCurrentTechnique(std::string const&, bool) */

void Sexy::AndroidGL20RenderEffect::SetCurrentTechnique(string *param_1,bool param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = (char *)FUN_0547429c(param_2);
  lVar2 = GetPopFXTechnique((AndroidGL20RenderEffect *)param_1,pcVar1);
  *(long *)(param_1 + 0x18) = lVar2;
  if ((lVar2 != 0) &&
     (lVar2 = FUN_052d9dd8(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(lVar2 + 4)),
     *(char *)(lVar2 + 0x18) == '\0')) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


/* Sexy::AndroidGL20RenderEffect::ClearPass(PopFXFormat::PopFXPass*, Sexy::RenderEffectTechnique&,
   Sexy::RenderEffectPass&) */

void Sexy::AndroidGL20RenderEffect::ClearPass
               (PopFXPass *param_1,RenderEffectTechnique *param_2,RenderEffectPass *param_3)

{
  char cVar1;
  uint *in_x3;
  
  OutputDebugStrF((wchar_t *)"ClearPass");
  cVar1 = OpenGLIdRegistry::StaticIsShaderIdValid(in_x3[3]);
  if (cVar1 != '\0') {
    glDeleteProgram(in_x3[3]);
  }
  OpenGLIdRegistry::StaticUnregisterShaderIds(1,in_x3 + 3);
  cVar1 = OpenGLIdRegistry::StaticIsShaderIdValid(*in_x3);
  if (cVar1 != '\0') {
    glDeleteProgram(*in_x3);
  }
  OpenGLIdRegistry::StaticUnregisterShaderIds(1,in_x3);
  OutputDebugStrF((wchar_t *)"ClearPass Done");
  return;
}


/* Sexy::AndroidGL20RenderEffect::ClearTechnique(PopFXFormat::PopFXTechnique*,
   Sexy::RenderEffectTechnique&) */

void __thiscall
Sexy::AndroidGL20RenderEffect::ClearTechnique
          (AndroidGL20RenderEffect *this,PopFXTechnique *param_1,RenderEffectTechnique *param_2)

{
  uint uVar1;
  RenderEffectTechnique *pRVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      pRVar2 = (RenderEffectTechnique *)
               FUN_052d972c(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),
                            uVar3 + *(int *)(param_1 + 0xc));
      uVar1 = uVar3 + 1;
      FUN_052d9de0(*(undefined8 *)param_2,uVar3);
      ClearPass((PopFXPass *)this,pRVar2,(RenderEffectPass *)param_2);
      uVar3 = uVar1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  std::vector<Sexy::RenderEffectPass,std::allocator<Sexy::RenderEffectPass>>::clear
            ((vector<Sexy::RenderEffectPass,std::allocator<Sexy::RenderEffectPass>> *)param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::UpdateParams() */

void __thiscall Sexy::AndroidGL20RenderEffect::UpdateParams(AndroidGL20RenderEffect *this)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  SexyMatrix4 aSStack_c8 [64];
  SexyMatrix4 aSStack_88 [64];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)
           FUN_052d9dd8(*(undefined8 *)(this + 0x38),*(undefined4 *)(*(long *)(this + 0x18) + 4));
  puVar5 = (undefined4 *)FUN_052d9de0(*puVar4,(long)*(int *)(this + 0x88));
  uVar1 = *puVar5;
  local_118 = std::
              map<std::string,Sexy::AndroidGL20RenderEffect::ParamData,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>>>
              ::begin((map<std::string,Sexy::AndroidGL20RenderEffect::ParamData,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::AndroidGL20RenderEffect::ParamData>>>
                       *)(this + 0x58));
  while( true ) {
    local_110 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)(this + 0x58));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_110);
    if (!bVar2) break;
    lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
    uVar7 = FUN_0547429c();
    iVar3 = glGetUniformLocation(uVar1,uVar7);
    if (iVar3 != -1) {
      uVar7 = *(undefined8 *)(lVar6 + 8);
      uVar8 = FUN_052d9a48(uVar7,*(undefined8 *)(lVar6 + 0x10));
      if ((int)(uVar8 >> 2) == 4) {
        uVar7 = FUN_052da5b0(uVar7);
        glUniformMatrix4fv(iVar3,1,0,uVar7);
      }
      else {
        uVar7 = FUN_052da5b0(uVar7);
        glUniform4fv(iVar3,uVar8 >> 2 & 0xffffffff,uVar7);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
  }
  uVar7 = glGetUniformLocation(uVar1,&DAT_056e7020);
  if ((int)uVar7 != -1) {
    glUniform1i(uVar7,0);
  }
  uVar7 = glGetUniformLocation(uVar1,&DAT_056e7028);
  if ((int)uVar7 != -1) {
    glUniform1i(uVar7,1);
  }
  uVar7 = glGetUniformLocation(uVar1,&DAT_056e7030);
  if ((int)uVar7 != -1) {
    glUniform1i(uVar7,2);
  }
  iVar3 = glGetUniformLocation(uVar1,"world");
  if (iVar3 != -1) {
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTransform
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(*(long *)(this + 8) + 0x80a8),0
               ,(SexyMatrix4 *)&local_108);
    glUniformMatrix4fv(iVar3,1,0,(SexyMatrix4 *)&local_108);
  }
  iVar3 = glGetUniformLocation(uVar1,&DAT_056e7038);
  if (iVar3 != -1) {
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTransform
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(*(long *)(this + 8) + 0x80a8),1
               ,(SexyMatrix4 *)&local_108);
    glUniformMatrix4fv(iVar3,1,0,(SexyMatrix4 *)&local_108);
  }
  iVar3 = glGetUniformLocation(uVar1,"projection");
  if (iVar3 != -1) {
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTransform
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(*(long *)(this + 8) + 0x80a8),2
               ,(SexyMatrix4 *)&local_108);
    glUniformMatrix4fv(iVar3,1,0,(SexyMatrix4 *)&local_108);
  }
  iVar3 = glGetUniformLocation(uVar1,"worldViewProj");
  if (iVar3 != -1) {
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTransform
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(*(long *)(this + 8) + 0x80a8),0
               ,(SexyMatrix4 *)&local_108);
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTransform
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(*(long *)(this + 8) + 0x80a8),1
               ,aSStack_c8);
    BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2>::GetTransform
              (*(BaseOpenGLStateManager<(Sexy::OPENGL_VERSION)2> **)(*(long *)(this + 8) + 0x80a8),2
               ,aSStack_88);
    FUN_052d8d5c(&local_48,(SexyMatrix4 *)&local_108,aSStack_c8);
    local_108 = local_48;
    uStack_100 = uStack_40;
    local_f8 = local_38;
    uStack_f0 = uStack_30;
    local_e8 = local_28;
    uStack_e0 = uStack_20;
    local_d8 = local_18;
    uStack_d0 = uStack_10;
    FUN_052d8d5c(&local_48,(SexyMatrix4 *)&local_108,aSStack_88);
    glUniformMatrix4fv(iVar3,1,0,&local_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::BeginPass(void* const&, int) */

void __thiscall
Sexy::AndroidGL20RenderEffect::BeginPass(AndroidGL20RenderEffect *this,void **param_1,int param_2)

{
  undefined8 *puVar1;
  ShaderInfo *pSVar2;
  long lVar3;
  AndroidRenderDeviceES20 *this_00;
  long *plVar4;
  code *pcVar5;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_10 [8];
  long local_8;
  
  plVar4 = *(long **)(this + 8);
  local_8 = ___stack_chk_guard;
  pcVar5 = *(code **)(*plVar4 + 0x30);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_10,*param_1);
  (*pcVar5)(plVar4,arStack_10);
  *(int *)(this + 0x88) = param_2;
  lVar3 = **(long **)(this + 8);
  *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
  (**(code **)(lVar3 + 0x40))(*(long **)(this + 8));
  if (*(long *)(this + 0x18) != 0) {
    puVar1 = (undefined8 *)
             FUN_052d9dd8(*(undefined8 *)(this + 0x38),*(undefined4 *)(*(long *)(this + 0x18) + 4));
    pSVar2 = (ShaderInfo *)FUN_052d9de0(*puVar1,(long)param_2);
    if (*(int *)(pSVar2 + 0xc) != 0) {
      this_00 = *(AndroidRenderDeviceES20 **)(this + 8);
      (**(code **)(*(long *)this_00 + 0x2f8))(this_00);
      AndroidRenderDeviceES20::SetShader(this_00,pSVar2);
      RenderStateManager::CommitState(*(RenderStateManager **)(this_00 + 0x80a8));
      UpdateParams(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidGL20RenderEffect::Clear() */

void __thiscall Sexy::AndroidGL20RenderEffect::Clear(AndroidGL20RenderEffect *this)

{
  int *piVar1;
  PopFXTechnique *pPVar2;
  RenderEffectTechnique *pRVar3;
  int *piVar4;
  uint uVar5;
  
  OutputDebugStrF((wchar_t *)"Effect Clear");
  piVar1 = *(int **)(this + 0x20);
  *(int **)(this + 0x28) = piVar1;
  if (*piVar1 != 0x70636678) {
    return;
  }
  if (piVar1[2] != 0) {
    piVar4 = piVar1;
    uVar5 = 0;
    while( true ) {
      pPVar2 = (PopFXTechnique *)FUN_052d9714(piVar1,piVar4,uVar5);
      pRVar3 = (RenderEffectTechnique *)FUN_052d9dd8(*(undefined8 *)(this + 0x38),uVar5);
      ClearTechnique(this,pPVar2,pRVar3);
      piVar4 = *(int **)(this + 0x28);
      if ((uint)piVar4[2] <= uVar5 + 1) break;
      piVar1 = *(int **)(this + 0x20);
      uVar5 = uVar5 + 1;
    }
  }
  std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>::clear
            ((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>> *)
             (this + 0x38));
  return;
}


/* Sexy::AndroidGL20RenderEffect::~AndroidGL20RenderEffect() */

void __thiscall
Sexy::AndroidGL20RenderEffect::~AndroidGL20RenderEffect(AndroidGL20RenderEffect *this)

{
  *(undefined ***)this = &PTR__AndroidGL20RenderEffect_06a33fe0;
  Clear(this);
  ParamCollection::~ParamCollection((ParamCollection *)(this + 0x58));
  std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>::~vector
            ((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>> *)
             (this + 0x38));
  return;
}


/* Sexy::AndroidGL20RenderEffect::~AndroidGL20RenderEffect() */

void __thiscall
Sexy::AndroidGL20RenderEffect::~AndroidGL20RenderEffect(AndroidGL20RenderEffect *this)

{
  ~AndroidGL20RenderEffect(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AndroidGL20RenderEffect::SetParameter(std::string const&, float const*, unsigned int) */

void __thiscall
Sexy::AndroidGL20RenderEffect::SetParameter
          (AndroidGL20RenderEffect *this,string *param_1,float *param_2,uint param_3)

{
  ParamData *this_00;
  
  this_00 = (ParamData *)
            ParamCollection::GetParamNamed((ParamCollection *)(this + 0x58),param_1,true);
  ParamData::SetValue(this_00,param_2,param_3);
  if ((*(int *)(this + 0x50) != 0) && (*(long *)(this + 0x18) != 0)) {
    UpdateParams(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::InitializePass(PopFXFormat::PopFXPass*,
   Sexy::RenderEffectTechnique&) */

void __thiscall
Sexy::AndroidGL20RenderEffect::InitializePass
          (AndroidGL20RenderEffect *this,PopFXPass *param_1,RenderEffectTechnique *param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_38;
  int local_34;
  int local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"InitializePass");
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[8] = 0;
  RenderEffectPass::RenderEffectPass((RenderEffectPass *)local_30);
  std::vector<Sexy::RenderEffectPass,std::allocator<Sexy::RenderEffectPass>>::push_back
            ((vector<Sexy::RenderEffectPass,std::allocator<Sexy::RenderEffectPass>> *)param_2,
             (RenderEffectPass *)local_30);
  puVar3 = (uint *)std::vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>>::back
                             ((vector<Sexy::SexyMatrix3,std::allocator<Sexy::SexyMatrix3>> *)param_2
                             );
  local_38 = 0;
  local_34 = 0;
  local_30[0] = 0;
  if (*(int *)(param_1 + 0x14) == -1) {
    uVar2 = (**(code **)(**(long **)(this + 8) + 0xf0))(*(long **)(this + 8));
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_052daf04(&local_38,0x8b31,
                   "precision mediump float;\nattribute vec4 position;\nattribute vec4 color;\nattribute vec2 texcoord0;\nattribute vec2 texcoord1;\nvarying vec4 xlat_varying_POSITION;\nvarying vec4 xlat_varying_COLOR0;\nvarying vec4 xlat_varying_TEXCOORD0;\nvarying vec4 xlat_varying_TEXCOORD1;\nuniform mat4  screenMatrix;\nvoid main()\n{\ngl_Position = screenMatrix * vec4(position.x,position.y,position.z,1.0);\nxlat_varying_POSITION = gl_Position;\nxlat_varying_COLOR0 = color;\nxlat_varying_TEXCOORD0 = vec4(texcoord0.x,texcoord0.y,0.0,0.0);\nxlat_varying_TEXCOORD1 = vec4(texcoord1.x,texcoord1.y,0.0,0.0);\n}\n"
                  );
      FUN_052daf04(&local_34,0x8b31,
                   "precision mediump float;\nattribute vec4 position;\nattribute vec4 color;\nattribute vec2 texcoord0;\nvarying vec4 xlat_varying_POSITION;\nvarying vec4 xlat_varying_COLOR0;\nvarying vec4 xlat_varying_TEXCOORD0;\nvarying vec4 xlat_varying_TEXCOORD1;\nuniform mat4  screenMatrix;\nvoid main()\n{\ngl_Position = screenMatrix * vec4(position.x * 1.0/8.0,position.y * 1.0/8.0, position.z * 1.0/8.0,1.0);\nxlat_varying_POSITION = gl_Position;\nxlat_varying_COLOR0 = color;\nxlat_varying_TEXCOORD0 = xlat_varying_TEXCOORD1 = vec4(texcoord0.x * 1.0/8192.0,texcoord0.y * 1.0/8192.0,0.0,0.0);\n}\n"
                  );
    }
LAB_052e5edc:
    if (*(int *)(param_1 + 0x18) == -1) {
LAB_052e5f40:
      if ((local_38 == 0) && (local_30[0] == 0)) {
        *puVar3 = 0;
        cVar1 = '\x01';
        puVar3[3] = 0;
        goto LAB_052e5e64;
      }
      uVar2 = (**(code **)(**(long **)(this + 8) + 0xf0))(*(long **)(this + 8));
      if (((uVar2 >> 1 & 1) != 0) &&
         (uVar2 = (**(code **)(**(long **)(this + 8) + 0xf0))(*(long **)(this + 8)),
         (uVar2 >> 2 & 1) != 0)) {
        uVar2 = glCreateProgram();
        *puVar3 = uVar2;
        OpenGLIdRegistry::StaticRegisterShaderIds(1,puVar3);
        if (local_34 != 0) {
          glAttachShader(*puVar3);
        }
        if (local_30[0] != 0) {
          glAttachShader(*puVar3);
        }
        glBindAttribLocation(*puVar3,0,"position");
        glBindAttribLocation(*puVar3,2,"texcoord0");
        glBindAttribLocation(*puVar3,1,"color");
        cVar1 = FUN_052d9590(*puVar3);
        if (cVar1 != '\0') {
          uVar2 = glGetUniformLocation(*puVar3,"screenMatrix");
          puVar3[2] = 0;
          puVar3[1] = uVar2;
          uVar2 = glCreateProgram();
          puVar3[3] = uVar2;
          OpenGLIdRegistry::StaticRegisterShaderIds(1,puVar3 + 3);
          if (local_38 != 0) {
            glAttachShader(puVar3[3]);
          }
          if (local_30[0] != 0) {
            glAttachShader(puVar3[3]);
          }
          glBindAttribLocation(puVar3[3],0,"position");
          glBindAttribLocation(puVar3[3],2,"texcoord0");
          glBindAttribLocation(puVar3[3],3,"texcoord1");
          glBindAttribLocation(puVar3[3],1,"color");
          cVar1 = FUN_052d9590(puVar3[3]);
          if (cVar1 != '\0') {
            uVar2 = glGetUniformLocation(puVar3[3],"screenMatrix");
            puVar3[5] = 0;
            puVar3[4] = uVar2;
            goto LAB_052e5e64;
          }
        }
      }
    }
    else {
      uVar2 = (**(code **)(**(long **)(this + 8) + 0xf0))(*(long **)(this + 8));
      if ((uVar2 >> 1 & 1) != 0) {
        uVar5 = *(undefined8 *)(this + 0x20);
        uVar6 = *(undefined8 *)(this + 0x28);
        lVar4 = FUN_052d97dc(uVar5,uVar6,*(undefined4 *)(param_1 + 0x18));
        uVar5 = FUN_052d97f4(uVar5,uVar6,*(undefined4 *)(lVar4 + 4));
        cVar1 = FUN_052daf04((RenderEffectPass *)local_30,0x8b30,uVar5);
        if (cVar1 != '\0') goto LAB_052e5f40;
      }
    }
  }
  else {
    uVar2 = (**(code **)(**(long **)(this + 8) + 0xf0))(*(long **)(this + 8));
    if ((uVar2 >> 2 & 1) != 0) {
      uVar5 = *(undefined8 *)(this + 0x20);
      uVar6 = *(undefined8 *)(this + 0x28);
      lVar4 = FUN_052d97dc(uVar5,uVar6,*(undefined4 *)(param_1 + 0x14));
      uVar5 = FUN_052d97f4(uVar5,uVar6,*(undefined4 *)(lVar4 + 4));
      cVar1 = FUN_052daf04(&local_38,0x8b31,uVar5);
      if (cVar1 != '\0') {
        local_34 = local_38;
        goto LAB_052e5edc;
      }
    }
  }
  cVar1 = '\0';
LAB_052e5e64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::InitializeTechnique(PopFXFormat::PopFXTechnique*) */

void __thiscall
Sexy::AndroidGL20RenderEffect::InitializeTechnique
          (AndroidGL20RenderEffect *this,PopFXTechnique *param_1)

{
  char cVar1;
  undefined1 uVar2;
  RenderEffectTechnique *pRVar3;
  PopFXPass *pPVar4;
  uint uVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  PIInterpolator::PIInterpolator((PIInterpolator *)&local_28);
  std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>::push_back
            ((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>> *)
             (this + 0x38),(RenderEffectTechnique *)&local_28);
  RenderEffectTechnique::~RenderEffectTechnique((RenderEffectTechnique *)&local_28);
  pRVar3 = (RenderEffectTechnique *)
           std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>::
           back((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>> *)
                (this + 0x38));
  if (*(int *)(param_1 + 8) != 0) {
    do {
      pPVar4 = (PopFXPass *)
               FUN_052d972c(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),
                            uVar5 + *(int *)(param_1 + 0xc));
      cVar1 = InitializePass(this,pPVar4,pRVar3);
      if (cVar1 == '\0') {
        pRVar3[0x18] = (RenderEffectTechnique)0x0;
        uVar2 = 0;
        goto LAB_052e61ec;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  uVar2 = 1;
  pRVar3[0x18] = (RenderEffectTechnique)0x1;
LAB_052e61ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* Sexy::AndroidGL20RenderEffect::Initialize() */

undefined8 __thiscall Sexy::AndroidGL20RenderEffect::Initialize(AndroidGL20RenderEffect *this)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  PopFXTechnique *pPVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  
  piVar4 = *(int **)(this + 0x20);
  uVar8 = 0;
  iVar1 = *piVar4;
  *(int **)(this + 0x28) = piVar4;
  if (iVar1 != 0x70636678) {
    return 0;
  }
  piVar7 = piVar4;
  if (piVar4[2] != 0) {
    while( true ) {
      pPVar5 = (PopFXTechnique *)FUN_052d9714(piVar4,piVar7,uVar8);
      cVar3 = InitializeTechnique(this,pPVar5);
      if (cVar3 == '\0') {
        uVar6 = FUN_052d97f4(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),
                             *(undefined4 *)pPVar5);
        OutputDebugStrF((wchar_t *)"Technique %s could not be initialized\n",uVar6);
        piVar7 = *(int **)(this + 0x28);
        uVar2 = piVar7[2];
      }
      else {
        piVar7 = *(int **)(this + 0x28);
        uVar2 = piVar7[2];
      }
      if (uVar2 <= uVar8 + 1) break;
      piVar4 = *(int **)(this + 0x20);
      uVar8 = uVar8 + 1;
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidGL20RenderEffect::AndroidGL20RenderEffect(Sexy::RenderDevice3D*,
   Sexy::RenderEffectDefinition*) */

void __thiscall
Sexy::AndroidGL20RenderEffect::AndroidGL20RenderEffect
          (AndroidGL20RenderEffect *this,RenderDevice3D *param_1,RenderEffectDefinition *param_2)

{
  AndroidGL20RenderEffect AVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RenderEffect::RenderEffect((RenderEffect *)this);
  *(undefined ***)this = &PTR__AndroidGL20RenderEffect_06a33fe0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  ParamCollection::ParamCollection((ParamCollection *)(this + 0x58));
  *(RenderDevice3D **)(this + 8) = param_1;
  *(RenderEffectDefinition **)(this + 0x10) = param_2;
  uVar2 = FUN_052da5b4(*(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined4 *)(this + 0x50) = 0;
  AVar1 = (AndroidGL20RenderEffect)Initialize(this);
  this[0x30] = AVar1;
  std::string::string(asStack_10,"Default");
  SetCurrentTechnique((string *)this,SUB81(asStack_10,0));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

