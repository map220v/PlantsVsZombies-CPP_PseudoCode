// Class: PowerTilePropagation_ConnectingDotHandler


/* PowerTilePropagation_ConnectingDotHandler::DestroyRig() */

void __thiscall
PowerTilePropagation_ConnectingDotHandler::DestroyRig
          (PowerTilePropagation_ConnectingDotHandler *this)

{
  long *plVar1;
  
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  (**(code **)(*plVar1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTilePropagation_ConnectingDotHandler::CreateRig() */

void __thiscall
PowerTilePropagation_ConnectingDotHandler::CreateRig
          (PowerTilePropagation_ConnectingDotHandler *this)

{
  ResourceInfo *pRVar1;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"POPANIM_EFFECTS_LINKTILE_CONNECT");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  PopAnimRig::CreateRig<EffectAnimRig_LinkedTileConnect>((PopAnim *)pRVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTilePropagation_ConnectingDotHandler::PowerTilePropagation_ConnectingDotHandler() */

void __thiscall
PowerTilePropagation_ConnectingDotHandler::PowerTilePropagation_ConnectingDotHandler
          (PowerTilePropagation_ConnectingDotHandler *this)

{
  undefined4 uVar1;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 8));
  Sexy::Color::Color((Color *)(this + 0x10));
  this[0x20] = (PowerTilePropagation_ConnectingDotHandler)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PowerTilePropagation_ConnectingDotHandler::FadeIn() */

void __thiscall
PowerTilePropagation_ConnectingDotHandler::FadeIn(PowerTilePropagation_ConnectingDotHandler *this)

{
  EffectAnimRig_LinkedTileConnect *this_00;
  
  this_00 = (EffectAnimRig_LinkedTileConnect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  EffectAnimRig_LinkedTileConnect::PlayOn(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTilePropagation_ConnectingDotHandler::FadeOut() */

void __thiscall
PowerTilePropagation_ConnectingDotHandler::FadeOut(PowerTilePropagation_ConnectingDotHandler *this)

{
  undefined4 uVar1;
  EffectAnimRig_LinkedTileConnect *pEVar2;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar2 = (EffectAnimRig_LinkedTileConnect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = EffectAnimRig_LinkedTileConnect::PlayOff(pEVar2,aDStack_38);
  *(undefined4 *)(this + 0x2c) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTilePropagation_ConnectingDotHandler::Draw(Sexy::Graphics*) */

void __thiscall
PowerTilePropagation_ConnectingDotHandler::Draw
          (PowerTilePropagation_ConnectingDotHandler *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  SexyVector2 *extraout_x1;
  float fVar4;
  float fVar5;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x20] == (PowerTilePropagation_ConnectingDotHandler)0x0) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar5 = (float)iVar2 * 1.5;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,(float)iVar1 * 1.5,fVar5);
    local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)(this + 8),(SexyVector2 *)&local_38);
    local_3c = fVar5;
    fVar4 = (float)FUN_03d52c40();
    local_38 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_40,fVar4);
    local_34 = fVar5;
    Sexy::SexyTransform2D::CreateTranslation((SexyTransform2D *)&local_38,extraout_x1);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    PopAnimRig::SetPAMColor(pPVar3,(Color *)(this + 0x10));
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    PopAnimRig::SetRenderTransform(pPVar3,aSStack_30);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    PopAnimRig::Draw(pPVar3,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTilePropagation_ConnectingDotHandler::Update() */

void __thiscall
PowerTilePropagation_ConnectingDotHandler::Update(PowerTilePropagation_ConnectingDotHandler *this)

{
  char cVar1;
  PopAnimRig *this_00;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  fVar3 = (float)PVZ_T();
  fVar4 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar3,fVar4);
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x24) < fVar3) {
    FadeIn(this);
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0x24) = uVar5;
  }
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x28) < fVar3) {
    FadeOut(this);
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar5;
  }
  if (*(int *)(this + 0x2c) != -1) {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    cVar1 = PopAnimRig::IsAnimFinished(uVar2,*(undefined4 *)(this + 0x2c));
    if (cVar1 != '\0') {
      this[0x20] = (PowerTilePropagation_ConnectingDotHandler)0x1;
    }
  }
  return;
}


/* PowerTilePropagation_ConnectingDotHandler::PowerTilePropagation_ConnectingDotHandler(PowerTilePropagation_ConnectingDotHandler
   const&) */

void __thiscall
PowerTilePropagation_ConnectingDotHandler::PowerTilePropagation_ConnectingDotHandler
          (PowerTilePropagation_ConnectingDotHandler *this,
          PowerTilePropagation_ConnectingDotHandler *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PowerTilePropagation_ConnectingDotHandler PVar3;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  Sexy::Insets::Insets((Insets *)(this + 0x10),(Insets *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  PVar3 = param_1[0x20];
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  this[0x20] = PVar3;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar2;
  return;
}

