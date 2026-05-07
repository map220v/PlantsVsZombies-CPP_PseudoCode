// Class: Sexy::Delegate1wRet<bool,SexyURL_const&>


/* Sexy::Delegate1wRet<bool, SexyURL const&>::TEMPNAMEPLACEHOLDERVALUE(SexyURL const&) const */

void __thiscall
Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
          (Delegate1wRet<bool,SexyURL_const&> *this,SexyURL *param_1)

{
  (**(code **)(this + 0x28))();
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet(Sexy::Delegate1wRet<bool,
   Sexy::Touch const&>&&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::Delegate1wRet
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,Delegate1wRet *param_1)

{
  DelegateWRetBase<bool>::DelegateWRetBase
            ((DelegateWRetBase<bool> *)this,(DelegateWRetBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<Board, bool (Board::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<Board, bool (Board::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<Board,bool(Board::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,Board,bool(Board::*)(Sexy::Touch_const&)>::
       thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, SexyURL const&>::TEMPNAMEPLACEHOLDERVALUE(Sexy::Delegate1wRet<bool,
   SexyURL const&>&&) */

Delegate1wRet<bool,SexyURL_const&> * __thiscall
Sexy::Delegate1wRet<bool,SexyURL_const&>::operator=
          (Delegate1wRet<bool,SexyURL_const&> *this,Delegate1wRet *param_1)

{
  DelegateWRetBase<Sexy::RtId>::operator=
            ((DelegateWRetBase<Sexy::RtId> *)this,(DelegateWRetBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return this;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch
   const&>::InternalInvokeWithTypedReturn(Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::InternalInvokeWithTypedReturn
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,RtInvokeVariant *param_1)

{
  Touch *pTVar1;
  
  pTVar1 = RtInvokeVariant::Get<Sexy::Touch_const&>(param_1);
  (**(code **)(this + 0x28))(this,pTVar1);
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<RunningSubwayModule, bool
   (RunningSubwayModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<RunningSubwayModule, bool
   (RunningSubwayModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<RunningSubwayModule,bool(RunningSubwayModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,RunningSubwayModule,bool(RunningSubwayModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantWarsCreditUI, bool
   (PlantWarsCreditUI::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantWarsCreditUI, bool
   (PlantWarsCreditUI::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantWarsCreditUI,bool(PlantWarsCreditUI::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantWarsCreditUI,bool(PlantWarsCreditUI::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<NewPVPTestButton, bool
   (NewPVPTestButton::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<NewPVPTestButton, bool
   (NewPVPTestButton::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<NewPVPTestButton,bool(NewPVPTestButton::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,NewPVPTestButton,bool(NewPVPTestButton::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<UINewPVPSunIncreaseBank, bool
   (UINewPVPSunIncreaseBank::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<UINewPVPSunIncreaseBank, bool
   (UINewPVPSunIncreaseBank::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<UINewPVPSunIncreaseBank,bool(UINewPVPSunIncreaseBank::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,UINewPVPSunIncreaseBank,bool(UINewPVPSunIncreaseBank::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<UINewPVPInitialSkill, bool
   (UINewPVPInitialSkill::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<UINewPVPInitialSkill,
   bool (UINewPVPInitialSkill::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<UINewPVPInitialSkill,bool(UINewPVPInitialSkill::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,UINewPVPInitialSkill,bool(UINewPVPInitialSkill::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<TempCard, bool
   (TempCard::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<TempCard, bool
   (TempCard::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<TempCard,bool(TempCard::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,TempCard,bool(TempCard::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_TouchingRectangle, bool
   (EntitySearch_TouchingRectangle::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_TouchingRectangle,
   bool (EntitySearch_TouchingRectangle::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_TouchingRectangle,bool(EntitySearch_TouchingRectangle::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_TouchingRectangle,bool(EntitySearch_TouchingRectangle::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet(Sexy::Delegate1wRet<bool, BoardEntity*>&&)
    */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::Delegate1wRet
          (Delegate1wRet<bool,BoardEntity*> *this,Delegate1wRet *param_1)

{
  DelegateWRetBase<bool>::DelegateWRetBase
            ((DelegateWRetBase<bool> *)this,(DelegateWRetBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::InternalInvokeWithTypedReturn(Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::InternalInvokeWithTypedReturn
          (Delegate1wRet<bool,BoardEntity*> *this,RtInvokeVariant *param_1)

{
  BoardEntity *pBVar1;
  
  pBVar1 = RtInvokeVariant::Get<BoardEntity*>(param_1);
  (**(code **)(this + 0x28))(this,pBVar1);
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ArtifactArcadeSubSystem, bool
   (ArtifactArcadeSubSystem::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<ArtifactArcadeSubSystem, bool
   (ArtifactArcadeSubSystem::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ArtifactArcadeSubSystem,bool(ArtifactArcadeSubSystem::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ArtifactArcadeSubSystem,bool(ArtifactArcadeSubSystem::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ArtifactGashaponSubSystem, bool
   (ArtifactGashaponSubSystem::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<ArtifactGashaponSubSystem, bool
   (ArtifactGashaponSubSystem::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ArtifactGashaponSubSystem,bool(ArtifactGashaponSubSystem::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ArtifactGashaponSubSystem,bool(ArtifactGashaponSubSystem::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<SkateBoardMower, bool
   (SkateBoardMower::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<SkateBoardMower, bool
   (SkateBoardMower::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<SkateBoardMower,bool(SkateBoardMower::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,SkateBoardMower,bool(SkateBoardMower::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<Effect_MusicalNote, bool
   (Effect_MusicalNote::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<Effect_MusicalNote, bool
   (Effect_MusicalNote::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<Effect_MusicalNote,bool(Effect_MusicalNote::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,Effect_MusicalNote,bool(Effect_MusicalNote::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ArtifactCalabashSubSystem, bool
   (ArtifactCalabashSubSystem::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<ArtifactCalabashSubSystem, bool
   (ArtifactCalabashSubSystem::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ArtifactCalabashSubSystem,bool(ArtifactCalabashSubSystem::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ArtifactCalabashSubSystem,bool(ArtifactCalabashSubSystem::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ArtifactCameraSubSystem, bool
   (ArtifactCameraSubSystem::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<ArtifactCameraSubSystem, bool
   (ArtifactCameraSubSystem::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ArtifactCameraSubSystem,bool(ArtifactCameraSubSystem::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ArtifactCameraSubSystem,bool(ArtifactCameraSubSystem::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<MiniGameCreditUI, bool
   (MiniGameCreditUI::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<MiniGameCreditUI, bool
   (MiniGameCreditUI::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<MiniGameCreditUI,bool(MiniGameCreditUI::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,MiniGameCreditUI,bool(MiniGameCreditUI::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantWireGelsemium, bool
   (PlantWireGelsemium::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantWireGelsemium, bool
   (PlantWireGelsemium::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantWireGelsemium,bool(PlantWireGelsemium::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantWireGelsemium,bool(PlantWireGelsemium::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantPlantain, bool
   (PlantPlantain::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantPlantain, bool
   (PlantPlantain::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantPlantain,bool(PlantPlantain::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantPlantain,bool(PlantPlantain::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ZMatchTicketBank, bool
   (ZMatchTicketBank::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<ZMatchTicketBank, bool
   (ZMatchTicketBank::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ZMatchTicketBank,bool(ZMatchTicketBank::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ZMatchTicketBank,bool(ZMatchTicketBank::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_InGridRows, bool
   (EntitySearch_InGridRows::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_InGridRows,
   bool (EntitySearch_InGridRows::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_InGridRows,bool(EntitySearch_InGridRows::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_InGridRows,bool(EntitySearch_InGridRows::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_Lambda, bool
   (EntitySearch_Lambda::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_Lambda, bool
   (EntitySearch_Lambda::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_Lambda,bool(EntitySearch_Lambda::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_Lambda,bool(EntitySearch_Lambda::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<WhackAMoleModule, bool
   (WhackAMoleModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<WhackAMoleModule, bool
   (WhackAMoleModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<WhackAMoleModule,bool(WhackAMoleModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,WhackAMoleModule,bool(WhackAMoleModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<BaseCursor, bool
   (BaseCursor::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<BaseCursor, bool
   (BaseCursor::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<BaseCursor,bool(BaseCursor::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,BaseCursor,bool(BaseCursor::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PowerupTouchBased, bool
   (PowerupTouchBased::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PowerupTouchBased, bool
   (PowerupTouchBased::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PowerupTouchBased,bool(PowerupTouchBased::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PowerupTouchBased,bool(PowerupTouchBased::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ComponentZombieWhackTouch, bool
   (ComponentZombieWhackTouch::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<ComponentZombieWhackTouch, bool
   (ComponentZombieWhackTouch::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ComponentZombieWhackTouch,bool(ComponentZombieWhackTouch::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ComponentZombieWhackTouch,bool(ComponentZombieWhackTouch::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<BeghouledModule, bool
   (BeghouledModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<BeghouledModule, bool
   (BeghouledModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<BeghouledModule,bool(BeghouledModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,BeghouledModule,bool(BeghouledModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantMissileToe, bool
   (PlantMissileToe::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantMissileToe, bool
   (PlantMissileToe::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantMissileToe,bool(PlantMissileToe::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantMissileToe,bool(PlantMissileToe::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_MatchesClass, bool
   (EntitySearch_MatchesClass::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_MatchesClass,
   bool (EntitySearch_MatchesClass::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_MatchesClass,bool(EntitySearch_MatchesClass::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_MatchesClass,bool(EntitySearch_MatchesClass::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Point const&>::Delegate1wRet(Sexy::Delegate1wRet<bool,
   Sexy::Point const&>&&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet
          (Delegate1wRet<bool,Sexy::Point_const&> *this,Delegate1wRet *param_1)

{
  DelegateWRetBase<bool>::DelegateWRetBase
            ((DelegateWRetBase<bool> *)this,(DelegateWRetBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_06752550;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Point const&>::Delegate1wRet<bool (*)(Sexy::Point
   const&)>(Sexy::CBFunctionTranslatorX<bool (*)(Sexy::Point const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet<bool(*)(Sexy::Point_const&)>
          (Delegate1wRet<bool,Sexy::Point_const&> *this,CBFunctionTranslatorX *param_1)

{
  DelegateWRetBase<bool>::DelegateWRetBase<bool(*)()>((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06752550;
  *(code **)(this + 0x28) =
       CBFunctionTranslator1wRet<bool,Sexy::Point_const&,bool(*)(Sexy::Point_const&)>::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Point
   const&>::InternalInvokeWithTypedReturn(Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Point_const&>::InternalInvokeWithTypedReturn
          (Delegate1wRet<bool,Sexy::Point_const&> *this,RtInvokeVariant *param_1)

{
  Point *pPVar1;
  
  pPVar1 = RtInvokeVariant::Get<Sexy::Point_const&>(param_1);
  (**(code **)(this + 0x28))(this,pPVar1);
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<CoinBank, bool
   (CoinBank::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<CoinBank, bool
   (CoinBank::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<CoinBank,bool(CoinBank::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,CoinBank,bool(CoinBank::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<Collectable, bool
   (Collectable::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<Collectable, bool
   (Collectable::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<Collectable,bool(Collectable::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,Collectable,bool(Collectable::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<SkyCityStage, bool
   (SkyCityStage::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<SkyCityStage, bool
   (SkyCityStage::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<SkyCityStage,bool(SkyCityStage::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,SkyCityStage,bool(SkyCityStage::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<GridItemMazeStatue, bool
   (GridItemMazeStatue::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<GridItemMazeStatue, bool
   (GridItemMazeStatue::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<GridItemMazeStatue,bool(GridItemMazeStatue::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,GridItemMazeStatue,bool(GridItemMazeStatue::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::Delegate1wRet(DummyInit *param_1)

{
  DelegateWRetBase<bool>::DelegateWRetBase((DelegateWRetBase<bool> *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06610e80;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<GemBank, bool
   (GemBank::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<GemBank, bool
   (GemBank::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<GemBank,bool(GemBank::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,GemBank,bool(GemBank::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<TowerDefendModule, bool
   (TowerDefendModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<TowerDefendModule, bool
   (TowerDefendModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<TowerDefendModule,bool(TowerDefendModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,TowerDefendModule,bool(TowerDefendModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<GridItemMechanismPlank, bool
   (GridItemMechanismPlank::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<GridItemMechanismPlank, bool
   (GridItemMechanismPlank::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<GridItemMechanismPlank,bool(GridItemMechanismPlank::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,GridItemMechanismPlank,bool(GridItemMechanismPlank::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<GridItemRailcart, bool
   (GridItemRailcart::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<GridItemRailcart, bool
   (GridItemRailcart::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<GridItemRailcart,bool(GridItemRailcart::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,GridItemRailcart,bool(GridItemRailcart::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<LawnMower, bool
   (LawnMower::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<LawnMower, bool
   (LawnMower::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<LawnMower,bool(LawnMower::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,LawnMower,bool(LawnMower::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantfoodUI, bool
   (PlantfoodUI::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantfoodUI, bool
   (PlantfoodUI::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantfoodUI,bool(PlantfoodUI::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantfoodUI,bool(PlantfoodUI::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantShineVine, bool
   (PlantShineVine::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantShineVine, bool
   (PlantShineVine::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantShineVine,bool(PlantShineVine::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantShineVine,bool(PlantShineVine::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantHeavenDatura, bool
   (PlantHeavenDatura::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantHeavenDatura, bool
   (PlantHeavenDatura::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantHeavenDatura,bool(PlantHeavenDatura::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantHeavenDatura,bool(PlantHeavenDatura::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PVZ1WhackZombieModule, bool
   (PVZ1WhackZombieModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PVZ1WhackZombieModule,
   bool (PVZ1WhackZombieModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PVZ1WhackZombieModule,bool(PVZ1WhackZombieModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PVZ1WhackZombieModule,bool(PVZ1WhackZombieModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<CarGridItem, bool
   (CarGridItem::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<CarGridItem, bool
   (CarGridItem::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<CarGridItem,bool(CarGridItem::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,CarGridItem,bool(CarGridItem::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantCoconutCannon, bool
   (PlantCoconutCannon::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantCoconutCannon, bool
   (PlantCoconutCannon::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantCoconutCannon,bool(PlantCoconutCannon::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantCoconutCannon,bool(PlantCoconutCannon::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantMagnifyingGrass, bool
   (PlantMagnifyingGrass::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantMagnifyingGrass,
   bool (PlantMagnifyingGrass::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantMagnifyingGrass,bool(PlantMagnifyingGrass::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantMagnifyingGrass,bool(PlantMagnifyingGrass::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantFireGourd, bool
   (PlantFireGourd::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantFireGourd, bool
   (PlantFireGourd::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantFireGourd,bool(PlantFireGourd::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantFireGourd,bool(PlantFireGourd::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantCobcannon, bool
   (PlantCobcannon::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantCobcannon, bool
   (PlantCobcannon::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantCobcannon,bool(PlantCobcannon::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantCobcannon,bool(PlantCobcannon::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantEscapeRoot, bool
   (PlantEscapeRoot::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantEscapeRoot, bool
   (PlantEscapeRoot::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantEscapeRoot,bool(PlantEscapeRoot::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantEscapeRoot,bool(PlantEscapeRoot::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantBanana, bool
   (PlantBanana::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantBanana, bool
   (PlantBanana::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantBanana,bool(PlantBanana::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantBanana,bool(PlantBanana::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantStrawBurst, bool
   (PlantStrawBurst::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantStrawBurst, bool
   (PlantStrawBurst::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantStrawBurst,bool(PlantStrawBurst::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantStrawBurst,bool(PlantStrawBurst::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ComponentPlantLauncher, bool
   (ComponentPlantLauncher::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<ComponentPlantLauncher, bool
   (ComponentPlantLauncher::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ComponentPlantLauncher,bool(ComponentPlantLauncher::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ComponentPlantLauncher,bool(ComponentPlantLauncher::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<HeroPlantFramework, bool
   (HeroPlantFramework::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<HeroPlantFramework, bool
   (HeroPlantFramework::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<HeroPlantFramework,bool(HeroPlantFramework::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,HeroPlantFramework,bool(HeroPlantFramework::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<HeroPlantTalentSubsystem, bool
   (HeroPlantTalentSubsystem::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<HeroPlantTalentSubsystem, bool
   (HeroPlantTalentSubsystem::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<HeroPlantTalentSubsystem,bool(HeroPlantTalentSubsystem::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,HeroPlantTalentSubsystem,bool(HeroPlantTalentSubsystem::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PowerupFlickZombie, bool
   (PowerupFlickZombie::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PowerupFlickZombie, bool
   (PowerupFlickZombie::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PowerupFlickZombie,bool(PowerupFlickZombie::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PowerupFlickZombie,bool(PowerupFlickZombie::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PowerupTimeUI, bool
   (PowerupTimeUI::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PowerupTimeUI, bool
   (PowerupTimeUI::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PowerupTimeUI,bool(PowerupTimeUI::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PowerupTimeUI,bool(PowerupTimeUI::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<OakArrowAddUI, bool
   (OakArrowAddUI::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<OakArrowAddUI, bool
   (OakArrowAddUI::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<OakArrowAddUI,bool(OakArrowAddUI::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,OakArrowAddUI,bool(OakArrowAddUI::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PowerupWizardFinger, bool
   (PowerupWizardFinger::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PowerupWizardFinger, bool
   (PowerupWizardFinger::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PowerupWizardFinger,bool(PowerupWizardFinger::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PowerupWizardFinger,bool(PowerupWizardFinger::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<std::string, std::string&>::Delegate1wRet<PVZRemoteControl, std::string
   (PVZRemoteControl::*)(std::string&)>(Sexy::CBMemberTranslatorX<PVZRemoteControl, std::string
   (PVZRemoteControl::*)(std::string&)> const&) */

void __thiscall
Sexy::Delegate1wRet<std::string,std::string&>::
Delegate1wRet<PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&)>
          (Delegate1wRet<std::string,std::string&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<std::string>::
  DelegateWRetBase<PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int)>
            ((DelegateWRetBase<std::string> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06847bb0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<std::string,std::string&,PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<std::string,
   std::string&>::InternalInvokeWithTypedReturn(Sexy::RtInvokeVariant const*) const */

void Sexy::Delegate1wRet<std::string,std::string&>::InternalInvokeWithTypedReturn
               (RtInvokeVariant *param_1)

{
  string *psVar1;
  RtInvokeVariant *in_x1;
  
  psVar1 = RtInvokeVariant::Get<std::string&>(in_x1);
  (**(code **)(param_1 + 0x28))(param_1,psVar1);
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<NextWaveButton, bool
   (NextWaveButton::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<NextWaveButton, bool
   (NextWaveButton::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<NextWaveButton,bool(NextWaveButton::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,NextWaveButton,bool(NextWaveButton::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<StartGameButton, bool
   (StartGameButton::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<StartGameButton, bool
   (StartGameButton::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<StartGameButton,bool(StartGameButton::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,StartGameButton,bool(StartGameButton::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<SunBank, bool
   (SunBank::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<SunBank, bool
   (SunBank::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<SunBank,bool(SunBank::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,SunBank,bool(SunBank::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<OakTrainModule, bool
   (OakTrainModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<OakTrainModule, bool
   (OakTrainModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<OakTrainModule,bool(OakTrainModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,OakTrainModule,bool(OakTrainModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ViewBoardOrZombiesButton, bool
   (ViewBoardOrZombiesButton::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<ViewBoardOrZombiesButton, bool
   (ViewBoardOrZombiesButton::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ViewBoardOrZombiesButton,bool(ViewBoardOrZombiesButton::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ViewBoardOrZombiesButton,bool(ViewBoardOrZombiesButton::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ZombieCamelTouch, bool
   (ZombieCamelTouch::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<ZombieCamelTouch, bool
   (ZombieCamelTouch::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ZombieCamelTouch,bool(ZombieCamelTouch::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ZombieCamelTouch,bool(ZombieCamelTouch::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<RocketZombieFlickModule, bool
   (RocketZombieFlickModule::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<RocketZombieFlickModule, bool
   (RocketZombieFlickModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<RocketZombieFlickModule,bool(RocketZombieFlickModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,RocketZombieFlickModule,bool(RocketZombieFlickModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_WithinRadius, bool
   (EntitySearch_WithinRadius::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_WithinRadius,
   bool (EntitySearch_WithinRadius::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_WithinRadius,bool(EntitySearch_WithinRadius::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_WithinRadius,bool(EntitySearch_WithinRadius::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_WithinRadius2D, bool
   (EntitySearch_WithinRadius2D::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_WithinRadius2D,
   bool (EntitySearch_WithinRadius2D::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_WithinRadius2D,bool(EntitySearch_WithinRadius2D::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_WithinRadius2D,bool(EntitySearch_WithinRadius2D::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_InRectangle, bool
   (EntitySearch_InRectangle::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_InRectangle,
   bool (EntitySearch_InRectangle::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_InRectangle,bool(EntitySearch_InRectangle::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_InRectangle,bool(EntitySearch_InRectangle::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_InGridSquares, bool
   (EntitySearch_InGridSquares::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_InGridSquares,
   bool (EntitySearch_InGridSquares::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_InGridSquares,bool(EntitySearch_InGridSquares::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_InGridSquares,bool(EntitySearch_InGridSquares::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_TouchingPoint, bool
   (EntitySearch_TouchingPoint::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_TouchingPoint,
   bool (EntitySearch_TouchingPoint::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_TouchingPoint,bool(EntitySearch_TouchingPoint::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_TouchingPoint,bool(EntitySearch_TouchingPoint::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_TouchingCircle, bool
   (EntitySearch_TouchingCircle::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_TouchingCircle,
   bool (EntitySearch_TouchingCircle::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_TouchingCircle,bool(EntitySearch_TouchingCircle::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_TouchingCircle,bool(EntitySearch_TouchingCircle::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_TouchingRay, bool
   (EntitySearch_TouchingRay::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_TouchingRay,
   bool (EntitySearch_TouchingRay::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_TouchingRay,bool(EntitySearch_TouchingRay::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_TouchingRay,bool(EntitySearch_TouchingRay::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<EntitySearch_MatchesZombieType, bool
   (EntitySearch_MatchesZombieType::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<EntitySearch_MatchesZombieType,
   bool (EntitySearch_MatchesZombieType::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<EntitySearch_MatchesZombieType,bool(EntitySearch_MatchesZombieType::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,EntitySearch_MatchesZombieType,bool(EntitySearch_MatchesZombieType::*)(BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PooyanModule, bool
   (PooyanModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PooyanModule, bool
   (PooyanModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PooyanModule,bool(PooyanModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PooyanModule,bool(PooyanModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<BesiegeModule, bool
   (BesiegeModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<BesiegeModule, bool
   (BesiegeModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<BesiegeModule,bool(BesiegeModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,BesiegeModule,bool(BesiegeModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<AirMissileLauncher, bool
   (AirMissileLauncher::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<AirMissileLauncher, bool
   (AirMissileLauncher::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<AirMissileLauncher,bool(AirMissileLauncher::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,AirMissileLauncher,bool(AirMissileLauncher::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<FishingModule, bool
   (FishingModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<FishingModule, bool
   (FishingModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<FishingModule,bool(FishingModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,FishingModule,bool(FishingModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<FishingEnergyBar, bool
   (FishingEnergyBar::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<FishingEnergyBar, bool
   (FishingEnergyBar::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<FishingEnergyBar,bool(FishingEnergyBar::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,FishingEnergyBar,bool(FishingEnergyBar::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, BoardEntity*>::Delegate1wRet<CannonLaser, bool
   (CannonLaser::*)(BoardEntity*)>(Sexy::CBMemberTranslatorX<CannonLaser, bool
   (CannonLaser::*)(BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,BoardEntity*>::
Delegate1wRet<CannonLaser,bool(CannonLaser::*)(BoardEntity*)>
          (Delegate1wRet<bool,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066959f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,BoardEntity*,CannonLaser,bool(CannonLaser::*)(BoardEntity*)>::
       thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<GridItemVase, bool
   (GridItemVase::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<GridItemVase, bool
   (GridItemVase::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<GridItemVase,bool(GridItemVase::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,GridItemVase,bool(GridItemVase::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<SnakeModule, bool
   (SnakeModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<SnakeModule, bool
   (SnakeModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<SnakeModule,bool(SnakeModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,SnakeModule,bool(SnakeModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<EliminateModule, bool
   (EliminateModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<EliminateModule, bool
   (EliminateModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<EliminateModule,bool(EliminateModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,EliminateModule,bool(EliminateModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<MinigameWhackAZombieModule, bool
   (MinigameWhackAZombieModule::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<MinigameWhackAZombieModule, bool
   (MinigameWhackAZombieModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<MinigameWhackAZombieModule,bool(MinigameWhackAZombieModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,MinigameWhackAZombieModule,bool(MinigameWhackAZombieModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<RiverCrossingModule, bool
   (RiverCrossingModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<RiverCrossingModule, bool
   (RiverCrossingModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<RiverCrossingModule,bool(RiverCrossingModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,RiverCrossingModule,bool(RiverCrossingModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ArenaBattleModule, bool
   (ArenaBattleModule::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<ArenaBattleModule, bool
   (ArenaBattleModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ArenaBattleModule,bool(ArenaBattleModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ArenaBattleModule,bool(ArenaBattleModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ArenaPVPStartButton, bool
   (ArenaPVPStartButton::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<ArenaPVPStartButton, bool
   (ArenaPVPStartButton::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ArenaPVPStartButton,bool(ArenaPVPStartButton::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ArenaPVPStartButton,bool(ArenaPVPStartButton::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ArenaOccupyStartButton, bool
   (ArenaOccupyStartButton::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<ArenaOccupyStartButton, bool
   (ArenaOccupyStartButton::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ArenaOccupyStartButton,bool(ArenaOccupyStartButton::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ArenaOccupyStartButton,bool(ArenaOccupyStartButton::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ArenaOccupyQuitButton, bool
   (ArenaOccupyQuitButton::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<ArenaOccupyQuitButton,
   bool (ArenaOccupyQuitButton::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ArenaOccupyQuitButton,bool(ArenaOccupyQuitButton::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ArenaOccupyQuitButton,bool(ArenaOccupyQuitButton::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ArenaChangeSpeedButton, bool
   (ArenaChangeSpeedButton::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<ArenaChangeSpeedButton, bool
   (ArenaChangeSpeedButton::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ArenaChangeSpeedButton,bool(ArenaChangeSpeedButton::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ArenaChangeSpeedButton,bool(ArenaChangeSpeedButton::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<ArenaEndingButton, bool
   (ArenaEndingButton::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<ArenaEndingButton, bool
   (ArenaEndingButton::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<ArenaEndingButton,bool(ArenaEndingButton::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,ArenaEndingButton,bool(ArenaEndingButton::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<IntroArenaTutorialBattleModule, bool
   (IntroArenaTutorialBattleModule::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule, bool
   (IntroArenaTutorialBattleModule::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<IntroArenaTutorialBattleModule,bool(IntroArenaTutorialBattleModule::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,IntroArenaTutorialBattleModule,bool(IntroArenaTutorialBattleModule::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantLancerHoya, bool
   (PlantLancerHoya::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantLancerHoya, bool
   (PlantLancerHoya::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantLancerHoya,bool(PlantLancerHoya::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantLancerHoya,bool(PlantLancerHoya::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantSarracenia, bool
   (PlantSarracenia::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantSarracenia, bool
   (PlantSarracenia::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantSarracenia,bool(PlantSarracenia::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantSarracenia,bool(PlantSarracenia::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantWaterRabbit, bool
   (PlantWaterRabbit::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantWaterRabbit, bool
   (PlantWaterRabbit::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantWaterRabbit,bool(PlantWaterRabbit::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantWaterRabbit,bool(PlantWaterRabbit::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<PlantTwinsHoneySuckle, bool
   (PlantTwinsHoneySuckle::*)(Sexy::Touch const&)>(Sexy::CBMemberTranslatorX<PlantTwinsHoneySuckle,
   bool (PlantTwinsHoneySuckle::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<PlantTwinsHoneySuckle,bool(PlantTwinsHoneySuckle::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,PlantTwinsHoneySuckle,bool(PlantTwinsHoneySuckle::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<CthulhuEyeballEasyButton, bool
   (CthulhuEyeballEasyButton::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<CthulhuEyeballEasyButton, bool
   (CthulhuEyeballEasyButton::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<CthulhuEyeballEasyButton,bool(CthulhuEyeballEasyButton::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,CthulhuEyeballEasyButton,bool(CthulhuEyeballEasyButton::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<bool, Sexy::Touch const&>::Delegate1wRet<GridItemCardGameZombie, bool
   (GridItemCardGameZombie::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<GridItemCardGameZombie, bool
   (GridItemCardGameZombie::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
Delegate1wRet<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
          (Delegate1wRet<bool,Sexy::Touch_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e80;
  *(code **)(this + 0x28) =
       CBMemberTranslator1wRet<bool,Sexy::Touch_const&,GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate1wRet<Sexy::RtId, Sexy::RtObject*>::Delegate1wRet(Sexy::DelegateBase::DummyInit*)
    */

void Sexy::Delegate1wRet<Sexy::RtId,Sexy::RtObject*>::Delegate1wRet(DummyInit *param_1)

{
  DelegateWRetBase<Sexy::RtId>::DelegateWRetBase((DelegateWRetBase<Sexy::RtId> *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06a2efc0;
  return;
}


/* Sexy::Delegate1wRet<Sexy::RtId, Sexy::RtObject*>::Delegate1wRet<Sexy::RtId
   (*)(Sexy::RtObject*)>(Sexy::CBFunctionTranslatorX<Sexy::RtId (*)(Sexy::RtObject*)> const&) */

void __thiscall
Sexy::Delegate1wRet<Sexy::RtId,Sexy::RtObject*>::Delegate1wRet<Sexy::RtId(*)(Sexy::RtObject*)>
          (Delegate1wRet<Sexy::RtId,Sexy::RtObject*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateWRetBase<Sexy::RtId>::DelegateWRetBase<Sexy::RtId(*)(Sexy::RtObject*)>
            ((DelegateWRetBase<Sexy::RtId> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06a2efc0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator1wRet<Sexy::RtId,Sexy::RtObject*,Sexy::RtId(*)(Sexy::RtObject*)>::thunk;
  return;
}


/* Sexy::Delegate1wRet<Sexy::RtId,
   Sexy::RtObject*>::InternalInvokeWithTypedReturn(Sexy::RtInvokeVariant const*) const */

void Sexy::Delegate1wRet<Sexy::RtId,Sexy::RtObject*>::InternalInvokeWithTypedReturn
               (RtInvokeVariant *param_1)

{
  RtObject *pRVar1;
  RtInvokeVariant *in_x1;
  
  pRVar1 = RtInvokeVariant::Get<Sexy::RtObject*>(in_x1);
  (**(code **)(param_1 + 0x28))(param_1,pRVar1);
  return;
}


/* Sexy::Delegate1wRet<Sexy::RtId, Sexy::RtObject*>::Delegate1wRet(Sexy::Delegate1wRet<Sexy::RtId,
   Sexy::RtObject*> const&) */

void __thiscall
Sexy::Delegate1wRet<Sexy::RtId,Sexy::RtObject*>::Delegate1wRet
          (Delegate1wRet<Sexy::RtId,Sexy::RtObject*> *this,Delegate1wRet *param_1)

{
  DelegateWRetBase<Sexy::RtId>::DelegateWRetBase
            ((DelegateWRetBase<Sexy::RtId> *)this,(DelegateWRetBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_06a2efc0;
  return;
}


/* Sexy::Delegate1wRet<bool, SexyURL const&>::Delegate1wRet(Sexy::Delegate1wRet<bool, SexyURL
   const&>&&) */

void __thiscall
Sexy::Delegate1wRet<bool,SexyURL_const&>::Delegate1wRet
          (Delegate1wRet<bool,SexyURL_const&> *this,Delegate1wRet *param_1)

{
  DelegateWRetBase<bool>::DelegateWRetBase
            ((DelegateWRetBase<bool> *)this,(DelegateWRetBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_06a32ff0;
  return;
}


/* Sexy::Delegate1wRet<bool, SexyURL const&>::InternalInvokeWithTypedReturn(Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate1wRet<bool,SexyURL_const&>::InternalInvokeWithTypedReturn
          (Delegate1wRet<bool,SexyURL_const&> *this,RtInvokeVariant *param_1)

{
  SexyURL *pSVar1;
  
  pSVar1 = RtInvokeVariant::Get<SexyURL_const&>(param_1);
  (**(code **)(this + 0x28))(this,pSVar1);
  return;
}

