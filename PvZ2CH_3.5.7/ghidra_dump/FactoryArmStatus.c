// Class: FactoryArmStatus


/* FactoryArmStatus::FactoryArmStatus() */

void __thiscall FactoryArmStatus::FactoryArmStatus(FactoryArmStatus *this)

{
  DVec3::DVec3((DVec3 *)(this + 0x14));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FactoryArmStatus::Update(FutureStageProperties const*) */

void __thiscall FactoryArmStatus::Update(FactoryArmStatus *this,FutureStageProperties *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_Dt();
  fVar3 = (float)PVZ_T();
  if (fVar3 - *(float *)(this + 8) < 1.0) {
    local_c = 0x3f800000;
    local_10 = 0x3e4ccccd;
    fVar3 = CurveEvaluate<float>(&local_10,&local_c,2);
    fVar2 = fVar2 * fVar3;
  }
  fVar2 = fVar2 + *(float *)(this + 0xc);
  *(float *)(this + 0xc) = fVar2;
  switch(*(undefined4 *)(this + 0x20)) {
  case 0:
    uVar1 = *(undefined4 *)(param_1 + 0x198);
    *(undefined4 *)(this + 0x20) = 1;
    *(undefined4 *)(this + 0x10) = uVar1;
    *(undefined4 *)(this + 0xc) = 0;
    break;
  case 1:
    if (*(float *)(this + 0x10) < fVar2) {
      uVar1 = *(undefined4 *)(param_1 + 0x19c);
      *(undefined4 *)(this + 0x20) = 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      *(undefined4 *)(this + 0xc) = 0;
    }
    break;
  case 2:
    if (*(float *)(this + 0x10) < fVar2) {
      uVar1 = *(undefined4 *)(param_1 + 0x1a0);
      *(undefined4 *)(this + 0x20) = 3;
      *(undefined4 *)(this + 0x10) = uVar1;
      *(undefined4 *)(this + 0xc) = 0;
    }
    break;
  case 3:
    if (*(float *)(this + 0x10) < fVar2) {
      *(undefined4 *)(this + 0x20) = 4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FactoryArmStatus::Draw(Sexy::Graphics*) */

void __thiscall FactoryArmStatus::Draw(FactoryArmStatus *this,Graphics *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined4 local_68;
  undefined4 local_64;
  GraphicsAutoState aGStack_60 [8];
  Color local_58 [16];
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  Sexy::Color::Color(local_58,3);
  fVar5 = (float)PVZ_T();
  if (fVar5 - *(float *)(this + 8) < 0.25) {
    fVar5 = (fVar5 - *(float *)(this + 8)) * 4.0;
    Sexy::Insets::Insets((Insets *)&local_38,(Insets *)local_58);
    iVar4 = 0;
    do {
      piVar2 = (int *)Sexy::Color::operator[](local_58,iVar4);
      iVar1 = iVar4 + 1;
      piVar3 = (int *)Sexy::Color::operator[](local_58,iVar4);
      *piVar2 = (int)((1.0 - fVar5) * 255.0 + fVar5 * (float)*piVar3);
      iVar4 = iVar1;
    } while (iVar1 != 3);
  }
  if (*(int *)this == 0) {
    Sexy::Color::Color((Color *)&local_38,0x96,0x5f,0);
  }
  Sexy::Graphics::SetColor(param_1,local_58);
  Sexy::Insets::Insets((Insets *)&local_48);
  local_40 = 0x14;
  iVar4 = *(int *)(this + 0x20);
  local_44 = (int)((*(float *)(this + 0x18) - *(float *)(this + 0x1c)) - 800.0);
  local_48 = (int)(*(float *)(this + 0x14) - 10.0);
  if (iVar4 == 2) {
    local_3c = 0x2ee;
    fVar5 = *(float *)(this + 0xc) / *(float *)(this + 0x10);
  }
  else if (iVar4 == 3) {
    fVar5 = 1.0;
    local_3c = (int)((1.0 - *(float *)(this + 0xc) / *(float *)(this + 0x10)) * 800.0 + -50.0);
  }
  else if (iVar4 == 1) {
    fVar5 = 0.0;
    local_3c = (int)((*(float *)(this + 0xc) / *(float *)(this + 0x10)) * 800.0 + -50.0);
  }
  else {
    fVar5 = 0.0;
    local_3c = -0x32;
  }
  Sexy::Insets::Insets((Insets *)&local_38);
  local_64 = 0x41f00000;
  local_68 = 0x42700000;
  fVar5 = CurveEvaluate<float>(fVar5,&local_68,&local_64,1);
  local_30 = (int)fVar5;
  iStack_34 = local_44 + local_3c;
  local_2c = 0xf;
  local_38 = (int)(*(float *)(this + 0x14) - fVar5 * 0.5);
  Sexy::Insets::Insets((Insets *)&local_28);
  Sexy::Insets::Insets((Insets *)&local_18);
  local_20 = 0xf;
  local_28 = local_38;
  local_24 = iStack_34;
  local_14 = iStack_34;
  local_1c = 0x1e;
  local_c = 0x1e;
  local_10 = 0xf;
  local_18 = (int)((float)(local_38 + local_30) - 15.0);
  fVar5 = (float)FUN_03ceada0();
  Sexy::TRect<int>::Scale((TRect<int> *)&local_48,(double)fVar5,(double)fVar5);
  Sexy::Graphics::FillRect(param_1,(TRect *)&local_48);
  fVar5 = (float)FUN_03ceada0();
  Sexy::TRect<int>::Scale((TRect<int> *)&local_38,(double)fVar5,(double)fVar5);
  Sexy::Graphics::FillRect(param_1,(TRect *)&local_38);
  fVar5 = (float)FUN_03ceada0();
  Sexy::TRect<int>::Scale((TRect<int> *)&local_28,(double)fVar5,(double)fVar5);
  fVar5 = (float)FUN_03ceada0();
  Sexy::TRect<int>::Scale((TRect<int> *)&local_18,(double)fVar5,(double)fVar5);
  Sexy::Graphics::FillRect(param_1,(TRect *)&local_28);
  Sexy::Graphics::FillRect(param_1,(TRect *)&local_18);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FactoryArmStatus::TapTest(int, int) */

void __thiscall FactoryArmStatus::TapTest(FactoryArmStatus *this,int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  SexyVector3 *pSVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  string asStack_40 [8];
  Vec3 aVStack_38 [16];
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)this) {
    Sexy::Insets::Insets((Insets *)&local_28);
    local_20 = 0x14;
    iVar1 = *(int *)(this + 0x20);
    local_24 = (int)((*(float *)(this + 0x18) - *(float *)(this + 0x1c)) - 800.0);
    local_28 = (int)(*(float *)(this + 0x14) - 10.0);
    if (iVar1 == 2) {
      local_1c = 0x2ee;
    }
    else if (iVar1 == 3) {
      local_1c = (int)((1.0 - *(float *)(this + 0xc) / *(float *)(this + 0x10)) * 800.0 + -50.0);
    }
    else if (iVar1 == 1) {
      local_1c = (int)((*(float *)(this + 0xc) / *(float *)(this + 0x10)) * 800.0 + -50.0);
    }
    else {
      local_1c = -0x32;
    }
    Sexy::Insets::Insets((Insets *)&local_18);
    local_10 = 0x50;
    local_c = 0x50;
    local_18 = (int)(*(float *)(this + 0x14) - 40.0);
    local_14 = (int)((float)(local_24 + local_1c) - 30.0);
    fVar5 = (float)FUN_03ceadb4((float)param_1);
    fVar6 = (float)FUN_03ceadb4((float)param_2);
    cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)&local_18,(int)fVar5,(int)fVar6);
    if (cVar2 != '\0') {
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 8) = uVar7;
      fVar8 = (float)Sexy::Rand(1.0);
      if (*(float *)(this + 4) <= fVar8) {
        pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar3,"Play_Bonk");
      }
      else {
        pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar3,"Play_Diamond");
        pSVar4 = *(SexyVector3 **)(gLawnApp + 0x9f0);
        EATextSquish::Vec3::Vec3(aVStack_38,fVar5,fVar6,0.0);
        std::string::string(asStack_40,"coin_silver");
        Board::AddCoin(pSVar4,(string *)aVStack_38);
        std::string::~string(asStack_40);
        nop();
        iVar1 = *(int *)this;
        *(int *)this = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar3,"Play_Potato_Mine");
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FactoryArmStatus::TEMPNAMEPLACEHOLDERVALUE(FactoryArmStatus&&) */

FactoryArmStatus * __thiscall
FactoryArmStatus::operator=(FactoryArmStatus *this,FactoryArmStatus *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = *(undefined4 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x14),(SexyVector3 *)(param_1 + 0x14));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}

