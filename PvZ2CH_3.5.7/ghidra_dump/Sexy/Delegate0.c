// Class: Sexy::Delegate0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate0::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void Sexy::Delegate0::Invoke(RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(param_1 + 0x28))();
  if (param_2 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate0::Delegate0(Sexy::Delegate0&&) */

void __thiscall Sexy::Delegate0::Delegate0(Delegate0 *this,Delegate0 *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)this,(DelegateBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_06608330;
  return;
}


/* Sexy::Delegate0::Delegate0<INetworkMsgProcess, void
   (INetworkMsgProcess::*)()>(Sexy::CBMemberTranslatorX<INetworkMsgProcess, void
   (INetworkMsgProcess::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<INetworkMsgProcess,void(INetworkMsgProcess::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<INetworkMsgProcess,void(INetworkMsgProcess::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LawnApp, void (LawnApp::*)()>(Sexy::CBMemberTranslatorX<LawnApp, void
   (LawnApp::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<LawnApp,void(LawnApp::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<androidNetworkMsgProcess, void
   (androidNetworkMsgProcess::*)()>(Sexy::CBMemberTranslatorX<androidNetworkMsgProcess, void
   (androidNetworkMsgProcess::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<androidNetworkMsgProcess,void(androidNetworkMsgProcess::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<androidNetworkMsgProcess,void(androidNetworkMsgProcess::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MainMenu, void (MainMenu::*)()>(Sexy::CBMemberTranslatorX<MainMenu,
   void (MainMenu::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MainMenu,void(MainMenu::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<MainMenu,void(MainMenu::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0(Sexy::DelegateBase::DummyInit*) */

void __thiscall Sexy::Delegate0::Delegate0(Delegate0 *this,DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)this);
  *(undefined ***)this = &PTR_Invoke_06608330;
  return;
}


/* Sexy::Delegate0::Delegate0<Board, void (Board::*)()>(Sexy::CBMemberTranslatorX<Board, void
   (Board::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Board,void(Board::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Board,void(Board::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Board, bool (Board::*)()>(Sexy::CBMemberTranslatorX<Board, bool
   (Board::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Board,bool(Board::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Board,bool(Board::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StorePanelUI, void
   (StorePanelUI::*)()>(Sexy::CBMemberTranslatorX<StorePanelUI, void (StorePanelUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StorePanelUI,void(StorePanelUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<StorePanelUI,void(StorePanelUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StoreUI, void (StoreUI::*)()>(Sexy::CBMemberTranslatorX<StoreUI, void
   (StoreUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StoreUI,void(StoreUI::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<StoreUI,void(StoreUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RechargeProgress, void
   (RechargeProgress::*)()>(Sexy::CBMemberTranslatorX<RechargeProgress, void
   (RechargeProgress::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RechargeProgress,void(RechargeProgress::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RechargeProgress,void(RechargeProgress::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<StoreGiftPanelUI, void
   (StoreGiftPanelUI::*)()>(Sexy::CBMemberTranslatorX<StoreGiftPanelUI, void
   (StoreGiftPanelUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StoreGiftPanelUI,void(StoreGiftPanelUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<StoreGiftPanelUI,void(StoreGiftPanelUI::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<StorePlantGiftPanelUI, void
   (StorePlantGiftPanelUI::*)()>(Sexy::CBMemberTranslatorX<StorePlantGiftPanelUI, void
   (StorePlantGiftPanelUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StorePlantGiftPanelUI,void(StorePlantGiftPanelUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StorePlantGiftPanelUI,void(StorePlantGiftPanelUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SocialShareMgr, void
   (SocialShareMgr::*)()>(Sexy::CBMemberTranslatorX<SocialShareMgr, void (SocialShareMgr::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SocialShareMgr,void(SocialShareMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SocialShareMgr,void(SocialShareMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorNewPlantUIEntryScreen, void
   (AdaptorNewPlantUIEntryScreen::*)()>(Sexy::CBMemberTranslatorX<AdaptorNewPlantUIEntryScreen, void
   (AdaptorNewPlantUIEntryScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieBumperCar, void
   (ZombieBumperCar::*)()>(Sexy::CBMemberTranslatorX<ZombieBumperCar, void (ZombieBumperCar::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieBumperCar,void(ZombieBumperCar::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemSchoolBusSpecial, void
   (GridItemSchoolBusSpecial::*)()>(Sexy::CBMemberTranslatorX<GridItemSchoolBusSpecial, void
   (GridItemSchoolBusSpecial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemSchoolBusSpecial,void(GridItemSchoolBusSpecial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemSchoolBusSpecial,void(GridItemSchoolBusSpecial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RunningSubwayStage, void
   (RunningSubwayStage::*)()>(Sexy::CBMemberTranslatorX<RunningSubwayStage, void
   (RunningSubwayStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RunningSubwayStage,void(RunningSubwayStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RunningSubwayStage,void(RunningSubwayStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RunningSubwayModule, void
   (RunningSubwayModule::*)()>(Sexy::CBMemberTranslatorX<RunningSubwayModule, void
   (RunningSubwayModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RunningSubwayModule,void(RunningSubwayModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RunningPlayer, void
   (RunningPlayer::*)()>(Sexy::CBMemberTranslatorX<RunningPlayer, void (RunningPlayer::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<RunningPlayer,void(RunningPlayer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RunningPlayer,void(RunningPlayer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelBasedModifier_MoldModule, void
   (LevelBasedModifier_MoldModule::*)()>(Sexy::CBMemberTranslatorX<LevelBasedModifier_MoldModule,
   void (LevelBasedModifier_MoldModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelBasedModifier_MoldModule,void(LevelBasedModifier_MoldModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelBasedModifier_MoldModule,void(LevelBasedModifier_MoldModule::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UnchartedBoostModule, void
   (UnchartedBoostModule::*)()>(Sexy::CBMemberTranslatorX<UnchartedBoostModule, void
   (UnchartedBoostModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UnchartedBoostModule,void(UnchartedBoostModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UnchartedBoostModule,void(UnchartedBoostModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantWarsCreditUI, void
   (PlantWarsCreditUI::*)()>(Sexy::CBMemberTranslatorX<PlantWarsCreditUI, void
   (PlantWarsCreditUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantWarsCreditUI,void(PlantWarsCreditUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantWarsCreditUI,void(PlantWarsCreditUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantWarsCreditModule, void
   (PlantWarsCreditModule::*)()>(Sexy::CBMemberTranslatorX<PlantWarsCreditModule, void
   (PlantWarsCreditModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantWarsCreditModule,void(PlantWarsCreditModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantWarsCreditModule,void(PlantWarsCreditModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<IZombieModule, void
   (IZombieModule::*)()>(Sexy::CBMemberTranslatorX<IZombieModule, void (IZombieModule::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<IZombieModule,void(IZombieModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<IZombieModule,void(IZombieModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActivityCollectionContainerBase, void
   (ActivityCollectionContainerBase::*)()>(Sexy::CBMemberTranslatorX<ActivityCollectionContainerBase,
   void (ActivityCollectionContainerBase::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<ActivityCollectionContainerBase,void(ActivityCollectionContainerBase::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActivityCollectionContainerBase,void(ActivityCollectionContainerBase::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPlayerCollection, void
   (UINewPlayerCollection::*)()>(Sexy::CBMemberTranslatorX<UINewPlayerCollection, void
   (UINewPlayerCollection::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPlayerCollection,void(UINewPlayerCollection::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPlayerCollection,void(UINewPlayerCollection::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WishingPoolGrandWidget, void
   (WishingPoolGrandWidget::*)()>(Sexy::CBMemberTranslatorX<WishingPoolGrandWidget, void
   (WishingPoolGrandWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WishingPoolGrandWidget,void(WishingPoolGrandWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WishingPoolGrandWidget,void(WishingPoolGrandWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIPlantCultivate, void
   (UIPlantCultivate::*)()>(Sexy::CBMemberTranslatorX<UIPlantCultivate, void
   (UIPlantCultivate::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIPlantCultivate,void(UIPlantCultivate::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIPlantCultivate,void(UIPlantCultivate::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<UIGiftFoReturn, void
   (UIGiftFoReturn::*)()>(Sexy::CBMemberTranslatorX<UIGiftFoReturn, void (UIGiftFoReturn::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIGiftFoReturn,void(UIGiftFoReturn::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIGiftFoReturn,void(UIGiftFoReturn::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIDragonTreasure, void
   (UIDragonTreasure::*)()>(Sexy::CBMemberTranslatorX<UIDragonTreasure, void
   (UIDragonTreasure::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIDragonTreasure,void(UIDragonTreasure::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIDragonTreasure,void(UIDragonTreasure::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<UITreasurePavilion, void
   (UITreasurePavilion::*)()>(Sexy::CBMemberTranslatorX<UITreasurePavilion, void
   (UITreasurePavilion::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UITreasurePavilion,void(UITreasurePavilion::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UITreasurePavilion,void(UITreasurePavilion::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPDataBaseSubsystem, void
   (NewPVPDataBaseSubsystem::*)()>(Sexy::CBMemberTranslatorX<NewPVPDataBaseSubsystem, void
   (NewPVPDataBaseSubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPDataBaseSubsystem,void(NewPVPDataBaseSubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<NewPVPDataBaseSubsystem,void(NewPVPDataBaseSubsystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPFPSCounter, void
   (NewPVPFPSCounter::*)()>(Sexy::CBMemberTranslatorX<NewPVPFPSCounter, void
   (NewPVPFPSCounter::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPFPSCounter,void(NewPVPFPSCounter::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPFPSCounter,void(NewPVPFPSCounter::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPGameSubsystem, void
   (NewPVPGameSubsystem::*)()>(Sexy::CBMemberTranslatorX<NewPVPGameSubsystem, void
   (NewPVPGameSubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPGameModule, void
   (NewPVPGameModule::*)()>(Sexy::CBMemberTranslatorX<NewPVPGameModule, void
   (NewPVPGameModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPGameModule,void(NewPVPGameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPGameModule,void(NewPVPGameModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPIntro, void
   (NewPVPIntro::*)()>(Sexy::CBMemberTranslatorX<NewPVPIntro, void (NewPVPIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPIntro,void(NewPVPIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPIntro,void(NewPVPIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPStage, void
   (NewPVPStage::*)()>(Sexy::CBMemberTranslatorX<NewPVPStage, void (NewPVPStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPStage,void(NewPVPStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPStage,void(NewPVPStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPGameOutro, void
   (NewPVPGameOutro::*)()>(Sexy::CBMemberTranslatorX<NewPVPGameOutro, void (NewPVPGameOutro::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPGameOutro,void(NewPVPGameOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPGameOutro,void(NewPVPGameOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorNewPVPTrainingScreen, void
   (AdaptorNewPVPTrainingScreen::*)()>(Sexy::CBMemberTranslatorX<AdaptorNewPVPTrainingScreen, void
   (AdaptorNewPVPTrainingScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdaptorNewPVPTrainingScreen,void(AdaptorNewPVPTrainingScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorNewPVPTrainingScreen,void(AdaptorNewPVPTrainingScreen::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorNewPVPMatchingScreen, void
   (AdaptorNewPVPMatchingScreen::*)()>(Sexy::CBMemberTranslatorX<AdaptorNewPVPMatchingScreen, void
   (AdaptorNewPVPMatchingScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorNewPVPEntryScreen, void
   (AdaptorNewPVPEntryScreen::*)()>(Sexy::CBMemberTranslatorX<AdaptorNewPVPEntryScreen, void
   (AdaptorNewPVPEntryScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdaptorNewPVPEntryScreen,void(AdaptorNewPVPEntryScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorNewPVPEntryScreen,void(AdaptorNewPVPEntryScreen::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPArea, void
   (NewPVPArea::*)()>(Sexy::CBMemberTranslatorX<NewPVPArea, void (NewPVPArea::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPArea,void(NewPVPArea::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPArea,void(NewPVPArea::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPAreaSlider, void
   (NewPVPAreaSlider::*)()>(Sexy::CBMemberTranslatorX<NewPVPAreaSlider, void
   (NewPVPAreaSlider::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPAreaSlider,void(NewPVPAreaSlider::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPAreaSlider,void(NewPVPAreaSlider::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPAreaMist, void
   (NewPVPAreaMist::*)()>(Sexy::CBMemberTranslatorX<NewPVPAreaMist, void (NewPVPAreaMist::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPAreaMist,void(NewPVPAreaMist::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPAreaMist,void(NewPVPAreaMist::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPAreaGuideDoor, void
   (NewPVPAreaGuideDoor::*)()>(Sexy::CBMemberTranslatorX<NewPVPAreaGuideDoor, void
   (NewPVPAreaGuideDoor::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPAreaGuideDoor,void(NewPVPAreaGuideDoor::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<NewPVPAreaGuideDoor,void(NewPVPAreaGuideDoor::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPHealthBar, void
   (NewPVPHealthBar::*)()>(Sexy::CBMemberTranslatorX<NewPVPHealthBar, void (NewPVPHealthBar::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPHealthBar,void(NewPVPHealthBar::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPHealthBar,void(NewPVPHealthBar::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPTestButton, void
   (NewPVPTestButton::*)()>(Sexy::CBMemberTranslatorX<NewPVPTestButton, void
   (NewPVPTestButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPTestButton,void(NewPVPTestButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPTestButton,void(NewPVPTestButton::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPVPRoundBank, void
   (UINewPVPRoundBank::*)()>(Sexy::CBMemberTranslatorX<UINewPVPRoundBank, void
   (UINewPVPRoundBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPVPRoundBank,void(UINewPVPRoundBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPVPRoundBank,void(UINewPVPRoundBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPSeedBank, void
   (NewPVPSeedBank::*)()>(Sexy::CBMemberTranslatorX<NewPVPSeedBank, void (NewPVPSeedBank::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPSeedBank,void(NewPVPSeedBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewPVPSeedBank,void(NewPVPSeedBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPVPTopZombieQueue, void
   (UINewPVPTopZombieQueue::*)()>(Sexy::CBMemberTranslatorX<UINewPVPTopZombieQueue, void
   (UINewPVPTopZombieQueue::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPVPTopZombieQueue,void(UINewPVPTopZombieQueue::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPVPTopZombieQueue,void(UINewPVPTopZombieQueue::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPVPSunIncreaseBank, void
   (UINewPVPSunIncreaseBank::*)()>(Sexy::CBMemberTranslatorX<UINewPVPSunIncreaseBank, void
   (UINewPVPSunIncreaseBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPVPSunIncreaseBank,void(UINewPVPSunIncreaseBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPVPSunIncreaseBank,void(UINewPVPSunIncreaseBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPVPSurrenderButton, void
   (UINewPVPSurrenderButton::*)()>(Sexy::CBMemberTranslatorX<UINewPVPSurrenderButton, void
   (UINewPVPSurrenderButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPVPSurrenderButton,void(UINewPVPSurrenderButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPVPSurrenderButton,void(UINewPVPSurrenderButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPVPReportButton, void
   (UINewPVPReportButton::*)()>(Sexy::CBMemberTranslatorX<UINewPVPReportButton, void
   (UINewPVPReportButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPVPReportButton,void(UINewPVPReportButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPVPReportButton,void(UINewPVPReportButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPVPZombieUpgradeSkillBank, void
   (UINewPVPZombieUpgradeSkillBank::*)()>(Sexy::CBMemberTranslatorX<UINewPVPZombieUpgradeSkillBank,
   void (UINewPVPZombieUpgradeSkillBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPVPZombieUpgradeSkillBank,void(UINewPVPZombieUpgradeSkillBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPVPZombieUpgradeSkillBank,void(UINewPVPZombieUpgradeSkillBank::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPVPInitialSkill, void
   (UINewPVPInitialSkill::*)()>(Sexy::CBMemberTranslatorX<UINewPVPInitialSkill, void
   (UINewPVPInitialSkill::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPVPInitialSkill,void(UINewPVPInitialSkill::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPVPInitialSkill,void(UINewPVPInitialSkill::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPVPBattlePass, void
   (UINewPVPBattlePass::*)()>(Sexy::CBMemberTranslatorX<UINewPVPBattlePass, void
   (UINewPVPBattlePass::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPVPBattlePass,void(UINewPVPBattlePass::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPVPBattlePass,void(UINewPVPBattlePass::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPShopCommonWidget, void
   (NewPVPShopCommonWidget::*)()>(Sexy::CBMemberTranslatorX<NewPVPShopCommonWidget, void
   (NewPVPShopCommonWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPShopCommonWidget,void(NewPVPShopCommonWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<NewPVPShopCommonWidget,void(NewPVPShopCommonWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPShopChestWidget, void
   (NewPVPShopChestWidget::*)()>(Sexy::CBMemberTranslatorX<NewPVPShopChestWidget, void
   (NewPVPShopChestWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPShopChestWidget,void(NewPVPShopChestWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<NewPVPShopChestWidget,void(NewPVPShopChestWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPVPShop, void
   (UINewPVPShop::*)()>(Sexy::CBMemberTranslatorX<UINewPVPShop, void (UINewPVPShop::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPVPShop,void(UINewPVPShop::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UINewPVPShop,void(UINewPVPShop::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeCardGameTurnPass, void
   (StarChallengeCardGameTurnPass::*)()>(Sexy::CBMemberTranslatorX<StarChallengeCardGameTurnPass,
   void (StarChallengeCardGameTurnPass::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeCardGameTurnPass,void(StarChallengeCardGameTurnPass::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeCardGameTurnPass,void(StarChallengeCardGameTurnPass::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CardGameBoardModule, void
   (CardGameBoardModule::*)()>(Sexy::CBMemberTranslatorX<CardGameBoardModule, void
   (CardGameBoardModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CardGameBoardModule,void(CardGameBoardModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CardGameBoardModule,void(CardGameBoardModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CardBoardMgr, void
   (CardBoardMgr::*)()>(Sexy::CBMemberTranslatorX<CardBoardMgr, void (CardBoardMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CardBoardMgr,void(CardBoardMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CardBoardMgr,void(CardBoardMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CardGameBoard, void
   (CardGameBoard::*)()>(Sexy::CBMemberTranslatorX<CardGameBoard, void (CardGameBoard::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<CardGameBoard,void(CardGameBoard::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CardGameBoard,void(CardGameBoard::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CustomLevelModule, void
   (CustomLevelModule::*)()>(Sexy::CBMemberTranslatorX<CustomLevelModule, void
   (CustomLevelModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CustomLevelModule,void(CustomLevelModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CustomLevelModule,void(CustomLevelModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CustomLevelEncourageModule, void
   (CustomLevelEncourageModule::*)()>(Sexy::CBMemberTranslatorX<CustomLevelEncourageModule, void
   (CustomLevelEncourageModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CustomLevelEncourageModule,void(CustomLevelEncourageModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CustomLevelEncourageModule,void(CustomLevelEncourageModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UICustomLevelMainMenu, void
   (UICustomLevelMainMenu::*)()>(Sexy::CBMemberTranslatorX<UICustomLevelMainMenu, void
   (UICustomLevelMainMenu::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UICustomLevelLevelDetail, void
   (UICustomLevelLevelDetail::*)()>(Sexy::CBMemberTranslatorX<UICustomLevelLevelDetail, void
   (UICustomLevelLevelDetail::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UICustomLevelCreateLevel, void
   (UICustomLevelCreateLevel::*)()>(Sexy::CBMemberTranslatorX<UICustomLevelCreateLevel, void
   (UICustomLevelCreateLevel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UICustomLevelCreateLevel,void(UICustomLevelCreateLevel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UICustomLevelCreateLevel,void(UICustomLevelCreateLevel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UICustomLevelLevelDetailShare, void
   (UICustomLevelLevelDetailShare::*)()>(Sexy::CBMemberTranslatorX<UICustomLevelLevelDetailShare,
   void (UICustomLevelLevelDetailShare::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UICustomLevelLevelDetailShare,void(UICustomLevelLevelDetailShare::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UICustomLevelLevelDetailShare,void(UICustomLevelLevelDetailShare::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CardSystemMoudle, void
   (CardSystemMoudle::*)()>(Sexy::CBMemberTranslatorX<CardSystemMoudle, void
   (CardSystemMoudle::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CardSystemMoudle,void(CardSystemMoudle::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CardSystemMoudle,void(CardSystemMoudle::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<CardObject, void
   (CardObject::*)()>(Sexy::CBMemberTranslatorX<CardObject, void (CardObject::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CardObject,void(CardObject::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CardObject,void(CardObject::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GiveFreeZombieCardAura, void
   (GiveFreeZombieCardAura::*)()>(Sexy::CBMemberTranslatorX<GiveFreeZombieCardAura, void
   (GiveFreeZombieCardAura::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GiveFreeZombieCardAura,void(GiveFreeZombieCardAura::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GiveFreeZombieCardAura,void(GiveFreeZombieCardAura::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ1ModeIntro, void
   (PVZ1ModeIntro::*)()>(Sexy::CBMemberTranslatorX<PVZ1ModeIntro, void (PVZ1ModeIntro::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PVZ1ModeIntro,void(PVZ1ModeIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<IntroPVZ1ModeVictoryOutroModule, void
   (IntroPVZ1ModeVictoryOutroModule::*)()>(Sexy::CBMemberTranslatorX<IntroPVZ1ModeVictoryOutroModule,
   void (IntroPVZ1ModeVictoryOutroModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<IntroPVZ1ModeVictoryOutroModule,void(IntroPVZ1ModeVictoryOutroModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<IntroPVZ1ModeVictoryOutroModule,void(IntroPVZ1ModeVictoryOutroModule::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Whitelistable, void
   (Whitelistable::*)()>(Sexy::CBMemberTranslatorX<Whitelistable, void (Whitelistable::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<Whitelistable,void(Whitelistable::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Whitelistable,void(Whitelistable::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArcadeTooltipAdaptor, void
   (ArcadeTooltipAdaptor::*)()>(Sexy::CBMemberTranslatorX<ArcadeTooltipAdaptor, void
   (ArcadeTooltipAdaptor::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArcadeTooltipAdaptor,void(ArcadeTooltipAdaptor::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArcadeTooltipAdaptor,void(ArcadeTooltipAdaptor::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorRiftTourneyResultsScreen, void
   (AdaptorRiftTourneyResultsScreen::*)()>(Sexy::CBMemberTranslatorX<AdaptorRiftTourneyResultsScreen,
   void (AdaptorRiftTourneyResultsScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<AdaptorRiftTourneyResultsScreen,void(AdaptorRiftTourneyResultsScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorRiftTourneyResultsScreen,void(AdaptorRiftTourneyResultsScreen::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ApplyZombieConditionsChallenge, void
   (ApplyZombieConditionsChallenge::*)()>(Sexy::CBMemberTranslatorX<ApplyZombieConditionsChallenge,
   void (ApplyZombieConditionsChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ApplyZombieConditionsChallenge,void(ApplyZombieConditionsChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ApplyZombieConditionsChallenge,void(ApplyZombieConditionsChallenge::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePerfumerChallenge, void
   (ZombiePerfumerChallenge::*)()>(Sexy::CBMemberTranslatorX<ZombiePerfumerChallenge, void
   (ZombiePerfumerChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePerfumerChallenge,void(ZombiePerfumerChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePerfumerChallenge,void(ZombiePerfumerChallenge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BalletSlipChallenge, void
   (BalletSlipChallenge::*)()>(Sexy::CBMemberTranslatorX<BalletSlipChallenge, void
   (BalletSlipChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BalletSlipChallenge,void(BalletSlipChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<BalletSlipChallenge,void(BalletSlipChallenge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SteamManholeChallenge, void
   (SteamManholeChallenge::*)()>(Sexy::CBMemberTranslatorX<SteamManholeChallenge, void
   (SteamManholeChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SteamManholeChallenge,void(SteamManholeChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SteamManholeChallenge,void(SteamManholeChallenge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RenaiRollerChallenge, void
   (RenaiRollerChallenge::*)()>(Sexy::CBMemberTranslatorX<RenaiRollerChallenge, void
   (RenaiRollerChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RenaiRollerChallenge,void(RenaiRollerChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RenaiRollerChallenge,void(RenaiRollerChallenge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePeaChallenge, void
   (ZombiePeaChallenge::*)()>(Sexy::CBMemberTranslatorX<ZombiePeaChallenge, void
   (ZombiePeaChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePeaChallenge,void(ZombiePeaChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePeaChallenge,void(ZombiePeaChallenge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieJalapenoChallenge, void
   (ZombieJalapenoChallenge::*)()>(Sexy::CBMemberTranslatorX<ZombieJalapenoChallenge, void
   (ZombieJalapenoChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieJalapenoChallenge,void(ZombieJalapenoChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieJalapenoChallenge,void(ZombieJalapenoChallenge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieExplodenutChallenge, void
   (ZombieExplodenutChallenge::*)()>(Sexy::CBMemberTranslatorX<ZombieExplodenutChallenge, void
   (ZombieExplodenutChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieExplodenutChallenge,void(ZombieExplodenutChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieExplodenutChallenge,void(ZombieExplodenutChallenge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DestroyGridItemsChallenge, void
   (DestroyGridItemsChallenge::*)()>(Sexy::CBMemberTranslatorX<DestroyGridItemsChallenge, void
   (DestroyGridItemsChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DestroyGridItemsChallenge,void(DestroyGridItemsChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DestroyGridItemsChallenge,void(DestroyGridItemsChallenge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_RiftButton, void
   (WorldMap_RiftButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_RiftButton, void
   (WorldMap_RiftButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_RiftButton,void(WorldMap_RiftButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_RiftButton,void(WorldMap_RiftButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BossProgressMeterRift, void
   (BossProgressMeterRift::*)()>(Sexy::CBMemberTranslatorX<BossProgressMeterRift, void
   (BossProgressMeterRift::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BossProgressMeterRift,void(BossProgressMeterRift::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<BossProgressMeterRift,void(BossProgressMeterRift::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<FuelBank, void (FuelBank::*)()>(Sexy::CBMemberTranslatorX<FuelBank,
   void (FuelBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<FuelBank,void(FuelBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<FuelBank,void(FuelBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftOutro, void (RiftOutro::*)()>(Sexy::CBMemberTranslatorX<RiftOutro,
   void (RiftOutro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftOutro,void(RiftOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RiftOutro,void(RiftOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LootOverrideZombossRiftModule, void
   (LootOverrideZombossRiftModule::*)()>(Sexy::CBMemberTranslatorX<LootOverrideZombossRiftModule,
   void (LootOverrideZombossRiftModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LootOverrideZombossRiftModule,void(LootOverrideZombossRiftModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LootOverrideZombossRiftModule,void(LootOverrideZombossRiftModule::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_EventBar, void
   (WorldMap_EventBar::*)()>(Sexy::CBMemberTranslatorX<WorldMap_EventBar, void
   (WorldMap_EventBar::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_EventBar,void(WorldMap_EventBar::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_EventBar,void(WorldMap_EventBar::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemPlacementModule, void
   (GridItemPlacementModule::*)()>(Sexy::CBMemberTranslatorX<GridItemPlacementModule, void
   (GridItemPlacementModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemPlacementModule,void(GridItemPlacementModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemPlacementModule,void(GridItemPlacementModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemPlacementChallengeModule, void
   (GridItemPlacementChallengeModule::*)()>(Sexy::CBMemberTranslatorX<GridItemPlacementChallengeModule,
   void (GridItemPlacementChallengeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GridItemPlacementChallengeModule,void(GridItemPlacementChallengeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemPlacementChallengeModule,void(GridItemPlacementChallengeModule::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftDashboardLoadingState, void
   (RiftDashboardLoadingState::*)()>(Sexy::CBMemberTranslatorX<RiftDashboardLoadingState, void
   (RiftDashboardLoadingState::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftDashboardLoadingState,void(RiftDashboardLoadingState::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiftDashboardLoadingState,void(RiftDashboardLoadingState::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<void (*)()>(Sexy::CBFunctionTranslatorX<void (*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<void(*)()>(Delegate0 *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBFunctionTranslator0<void(*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PennyPerkTimedEffect, void
   (PennyPerkTimedEffect::*)()>(Sexy::CBMemberTranslatorX<PennyPerkTimedEffect, void
   (PennyPerkTimedEffect::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PennyPerkTimedEffect,void(PennyPerkTimedEffect::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PennyPerkTimedEffect,void(PennyPerkTimedEffect::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeLevelTimer, void
   (StarChallengeLevelTimer::*)()>(Sexy::CBMemberTranslatorX<StarChallengeLevelTimer, void
   (StarChallengeLevelTimer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeLevelTimer,void(StarChallengeLevelTimer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeLevelTimer,void(StarChallengeLevelTimer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BoardTimer, void
   (BoardTimer::*)()>(Sexy::CBMemberTranslatorX<BoardTimer, void (BoardTimer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BoardTimer,void(BoardTimer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<BoardTimer,void(BoardTimer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorPerkSelectionDialog, void
   (AdaptorPerkSelectionDialog::*)()>(Sexy::CBMemberTranslatorX<AdaptorPerkSelectionDialog, void
   (AdaptorPerkSelectionDialog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdaptorPerkSelectionDialog,void(AdaptorPerkSelectionDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorPerkSelectionDialog,void(AdaptorPerkSelectionDialog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorPerkInfoWidget, void
   (AdaptorPerkInfoWidget::*)()>(Sexy::CBMemberTranslatorX<AdaptorPerkInfoWidget, void
   (AdaptorPerkInfoWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdaptorPerkInfoWidget,void(AdaptorPerkInfoWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorPerkInfoWidget,void(AdaptorPerkInfoWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PerkHandlerModule, void
   (PerkHandlerModule::*)()>(Sexy::CBMemberTranslatorX<PerkHandlerModule, void
   (PerkHandlerModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PerkHandlerModule,void(PerkHandlerModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PerkHandlerModule,void(PerkHandlerModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombossRiftBattleModule, void
   (ZombossRiftBattleModule::*)()>(Sexy::CBMemberTranslatorX<ZombossRiftBattleModule, void
   (ZombossRiftBattleModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SecurityGourdModule, void
   (SecurityGourdModule::*)()>(Sexy::CBMemberTranslatorX<SecurityGourdModule, void
   (SecurityGourdModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SecurityGourdModule,void(SecurityGourdModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SecurityGourdModule,void(SecurityGourdModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftTheme, void (RiftTheme::*)()>(Sexy::CBMemberTranslatorX<RiftTheme,
   void (RiftTheme::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftTheme,void(RiftTheme::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RiftTheme,void(RiftTheme::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftThemeSunDrain, void
   (RiftThemeSunDrain::*)()>(Sexy::CBMemberTranslatorX<RiftThemeSunDrain, void
   (RiftThemeSunDrain::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftThemeSunDrain,void(RiftThemeSunDrain::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiftThemeSunDrain,void(RiftThemeSunDrain::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftThemeRainDark, void
   (RiftThemeRainDark::*)()>(Sexy::CBMemberTranslatorX<RiftThemeRainDark, void
   (RiftThemeRainDark::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftThemeRainDark,void(RiftThemeRainDark::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiftThemeRainDark,void(RiftThemeRainDark::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftThemeBlizzard, void
   (RiftThemeBlizzard::*)()>(Sexy::CBMemberTranslatorX<RiftThemeBlizzard, void
   (RiftThemeBlizzard::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftThemeBlizzard,void(RiftThemeBlizzard::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiftThemeBlizzard,void(RiftThemeBlizzard::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftThemeRainLemon, void
   (RiftThemeRainLemon::*)()>(Sexy::CBMemberTranslatorX<RiftThemeRainLemon, void
   (RiftThemeRainLemon::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftThemeRainLemon,void(RiftThemeRainLemon::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiftThemeRainLemon,void(RiftThemeRainLemon::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftThemeLightning, void
   (RiftThemeLightning::*)()>(Sexy::CBMemberTranslatorX<RiftThemeLightning, void
   (RiftThemeLightning::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftThemeLightning,void(RiftThemeLightning::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiftThemeLightning,void(RiftThemeLightning::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftThemeBalloon, void
   (RiftThemeBalloon::*)()>(Sexy::CBMemberTranslatorX<RiftThemeBalloon, void
   (RiftThemeBalloon::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftThemeBalloon,void(RiftThemeBalloon::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RiftThemeBalloon,void(RiftThemeBalloon::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftThemeModule, void
   (RiftThemeModule::*)()>(Sexy::CBMemberTranslatorX<RiftThemeModule, void (RiftThemeModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftThemeModule,void(RiftThemeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RiftThemeModule,void(RiftThemeModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftSeedBank, void
   (RiftSeedBank::*)()>(Sexy::CBMemberTranslatorX<RiftSeedBank, void (RiftSeedBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftSeedBank,void(RiftSeedBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RiftSeedBank,void(RiftSeedBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftTimedEventModule, void
   (RiftTimedEventModule::*)()>(Sexy::CBMemberTranslatorX<RiftTimedEventModule, void
   (RiftTimedEventModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftTimedEventModule,void(RiftTimedEventModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiftTimedEventModule,void(RiftTimedEventModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftValidateMgr, void
   (RiftValidateMgr::*)()>(Sexy::CBMemberTranslatorX<RiftValidateMgr, void (RiftValidateMgr::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftValidateMgr,void(RiftValidateMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RiftValidateMgr,void(RiftValidateMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Artifact, void (Artifact::*)()>(Sexy::CBMemberTranslatorX<Artifact,
   void (Artifact::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Artifact,void(Artifact::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Artifact,void(Artifact::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactDragonSubsystem, void
   (ArtifactDragonSubsystem::*)()>(Sexy::CBMemberTranslatorX<ArtifactDragonSubsystem, void
   (ArtifactDragonSubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactDragonSubsystem,void(ArtifactDragonSubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArtifactDragonSubsystem,void(ArtifactDragonSubsystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactDragon, void
   (ArtifactDragon::*)()>(Sexy::CBMemberTranslatorX<ArtifactDragon, void (ArtifactDragon::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactDragon,void(ArtifactDragon::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ArtifactDragon,void(ArtifactDragon::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactSwarm, void
   (ArtifactSwarm::*)()>(Sexy::CBMemberTranslatorX<ArtifactSwarm, void (ArtifactSwarm::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactSwarm,void(ArtifactSwarm::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ArtifactSwarm,void(ArtifactSwarm::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactHolo, void
   (ArtifactHolo::*)()>(Sexy::CBMemberTranslatorX<ArtifactHolo, void (ArtifactHolo::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactHolo,void(ArtifactHolo::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ArtifactHolo,void(ArtifactHolo::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactModule, void
   (ArtifactModule::*)()>(Sexy::CBMemberTranslatorX<ArtifactModule, void (ArtifactModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactModule,void(ArtifactModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ArtifactModule,void(ArtifactModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactBlessWidget, void
   (ArtifactBlessWidget::*)()>(Sexy::CBMemberTranslatorX<ArtifactBlessWidget, void
   (ArtifactBlessWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactBlessWidget,void(ArtifactBlessWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArtifactBlessWidget,void(ArtifactBlessWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactCultivationListView, void
   (ArtifactCultivationListView::*)()>(Sexy::CBMemberTranslatorX<ArtifactCultivationListView, void
   (ArtifactCultivationListView::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactCultivationListView,void(ArtifactCultivationListView::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArtifactCultivationListView,void(ArtifactCultivationListView::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactArcadeSubSystem, void
   (ArtifactArcadeSubSystem::*)()>(Sexy::CBMemberTranslatorX<ArtifactArcadeSubSystem, void
   (ArtifactArcadeSubSystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactArcadeSubSystem,void(ArtifactArcadeSubSystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArtifactArcadeSubSystem,void(ArtifactArcadeSubSystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactGashaponSubSystem, void
   (ArtifactGashaponSubSystem::*)()>(Sexy::CBMemberTranslatorX<ArtifactGashaponSubSystem, void
   (ArtifactGashaponSubSystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactGashaponSubSystem,void(ArtifactGashaponSubSystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArtifactGashaponSubSystem,void(ArtifactGashaponSubSystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Effect_MusicalNote, void
   (Effect_MusicalNote::*)()>(Sexy::CBMemberTranslatorX<Effect_MusicalNote, void
   (Effect_MusicalNote::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Effect_MusicalNote,void(Effect_MusicalNote::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Effect_MusicalNote,void(Effect_MusicalNote::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactCalabashSubSystem, void
   (ArtifactCalabashSubSystem::*)()>(Sexy::CBMemberTranslatorX<ArtifactCalabashSubSystem, void
   (ArtifactCalabashSubSystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactCalabashSubSystem,void(ArtifactCalabashSubSystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArtifactCalabashSubSystem,void(ArtifactCalabashSubSystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactCameraSubSystem, void
   (ArtifactCameraSubSystem::*)()>(Sexy::CBMemberTranslatorX<ArtifactCameraSubSystem, void
   (ArtifactCameraSubSystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactCameraSubSystem,void(ArtifactCameraSubSystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArtifactCameraSubSystem,void(ArtifactCameraSubSystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantGeneEnhancementView, void
   (PlantGeneEnhancementView::*)()>(Sexy::CBMemberTranslatorX<PlantGeneEnhancementView, void
   (PlantGeneEnhancementView::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantGeneEnhancementView,void(PlantGeneEnhancementView::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantGeneEnhancementView,void(PlantGeneEnhancementView::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantGeneDisplayView, void
   (PlantGeneDisplayView::*)()>(Sexy::CBMemberTranslatorX<PlantGeneDisplayView, void
   (PlantGeneDisplayView::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantGeneDisplayView,void(PlantGeneDisplayView::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantGeneDisplayView,void(PlantGeneDisplayView::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPlantView_LevelUp, void
   (UINewPlantView_LevelUp::*)()>(Sexy::CBMemberTranslatorX<UINewPlantView_LevelUp, void
   (UINewPlantView_LevelUp::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewPlantView_LevelUp,void(UINewPlantView_LevelUp::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPlantView_LevelUp,void(UINewPlantView_LevelUp::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewPlantView_AccessoryPackage, void
   (UINewPlantView_AccessoryPackage::*)()>(Sexy::CBMemberTranslatorX<UINewPlantView_AccessoryPackage,
   void (UINewPlantView_AccessoryPackage::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CollectionUI, void
   (CollectionUI::*)()>(Sexy::CBMemberTranslatorX<CollectionUI, void (CollectionUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CollectionUI,void(CollectionUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CollectionUI,void(CollectionUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UnchartedModeSpringFestivalModule, void
   (UnchartedModeSpringFestivalModule::*)()>(Sexy::CBMemberTranslatorX<UnchartedModeSpringFestivalModule,
   void (UnchartedModeSpringFestivalModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<UnchartedModeSpringFestivalModule,void(UnchartedModeSpringFestivalModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UnchartedModeSpringFestivalModule,void(UnchartedModeSpringFestivalModule::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ChallengeScoringUI, void
   (ChallengeScoringUI::*)()>(Sexy::CBMemberTranslatorX<ChallengeScoringUI, void
   (ChallengeScoringUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ChallengeScoringUI,void(ChallengeScoringUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ChallengeScoringUI,void(ChallengeScoringUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelRecordingBaseSubsystem, void
   (LevelRecordingBaseSubsystem::*)()>(Sexy::CBMemberTranslatorX<LevelRecordingBaseSubsystem, void
   (LevelRecordingBaseSubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelRecordingBaseSubsystem,void(LevelRecordingBaseSubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelRecordingBaseSubsystem,void(LevelRecordingBaseSubsystem::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelReplaySubsystem, void
   (LevelReplaySubsystem::*)()>(Sexy::CBMemberTranslatorX<LevelReplaySubsystem, void
   (LevelReplaySubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelReplaySubsystem,void(LevelReplaySubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelReplaySubsystem,void(LevelReplaySubsystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelScoringSubsystem, void
   (LevelScoringSubsystem::*)()>(Sexy::CBMemberTranslatorX<LevelScoringSubsystem, void
   (LevelScoringSubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelScoringSubsystem,void(LevelScoringSubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelScoringSubsystem,void(LevelScoringSubsystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PointOfLossModule, bool
   (PointOfLossModule::*)()>(Sexy::CBMemberTranslatorX<PointOfLossModule, bool
   (PointOfLossModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PointOfLossModule,bool(PointOfLossModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PointOfLossModule,bool(PointOfLossModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PointOfLossModule, void
   (PointOfLossModule::*)()>(Sexy::CBMemberTranslatorX<PointOfLossModule, void
   (PointOfLossModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PointOfLossModule,void(PointOfLossModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PointOfLossModule,void(PointOfLossModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZHotUIGameState, void
   (PVZHotUIGameState::*)()>(Sexy::CBMemberTranslatorX<PVZHotUIGameState, void
   (PVZHotUIGameState::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZHotUIGameState,void(PVZHotUIGameState::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZHotUIGameState,void(PVZHotUIGameState::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZGameStateTopHUDController, void
   (PVZGameStateTopHUDController::*)()>(Sexy::CBMemberTranslatorX<PVZGameStateTopHUDController, void
   (PVZGameStateTopHUDController::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZGameStateTopHUDController,void(PVZGameStateTopHUDController::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZGameStateTopHUDController,void(PVZGameStateTopHUDController::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorJoustOrAdventureScreen, void
   (AdaptorJoustOrAdventureScreen::*)()>(Sexy::CBMemberTranslatorX<AdaptorJoustOrAdventureScreen,
   void (AdaptorJoustOrAdventureScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdaptorJoustOrAdventureScreen,void(AdaptorJoustOrAdventureScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorJoustOrAdventureScreen,void(AdaptorJoustOrAdventureScreen::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorJoustScreen, void
   (AdaptorJoustScreen::*)()>(Sexy::CBMemberTranslatorX<AdaptorJoustScreen, void
   (AdaptorJoustScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdaptorJoustScreen,void(AdaptorJoustScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorJoustScreen,void(AdaptorJoustScreen::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorJoustTourneyResultsScreen, void
   (AdaptorJoustTourneyResultsScreen::*)()>(Sexy::CBMemberTranslatorX<AdaptorJoustTourneyResultsScreen,
   void (AdaptorJoustTourneyResultsScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeTargetScore, void
   (StarChallengeTargetScore::*)()>(Sexy::CBMemberTranslatorX<StarChallengeTargetScore, void
   (StarChallengeTargetScore::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeTargetScore,void(StarChallengeTargetScore::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeTargetScore,void(StarChallengeTargetScore::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<JoustGameModule, void
   (JoustGameModule::*)()>(Sexy::CBMemberTranslatorX<JoustGameModule, void (JoustGameModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<JoustGameModule,void(JoustGameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<JoustGameModule,void(JoustGameModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<JoustOutro, void
   (JoustOutro::*)()>(Sexy::CBMemberTranslatorX<JoustOutro, void (JoustOutro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<JoustOutro,void(JoustOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<JoustOutro,void(JoustOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<JoustPointOfLossModule, void
   (JoustPointOfLossModule::*)()>(Sexy::CBMemberTranslatorX<JoustPointOfLossModule, void
   (JoustPointOfLossModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<JoustPointOfLossModule,void(JoustPointOfLossModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<JoustPointOfLossModule,void(JoustPointOfLossModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<JoustStage, void
   (JoustStage::*)()>(Sexy::CBMemberTranslatorX<JoustStage, void (JoustStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<JoustStage,void(JoustStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<JoustStage,void(JoustStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MiniGamePerk, void
   (MiniGamePerk::*)()>(Sexy::CBMemberTranslatorX<MiniGamePerk, void (MiniGamePerk::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MiniGamePerk,void(MiniGamePerk::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<MiniGamePerk,void(MiniGamePerk::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MiniGameCreditUI, void
   (MiniGameCreditUI::*)()>(Sexy::CBMemberTranslatorX<MiniGameCreditUI, void
   (MiniGameCreditUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MiniGameCreditUI,void(MiniGameCreditUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<MiniGameCreditUI,void(MiniGameCreditUI::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<MiniGamePerksModule, void
   (MiniGamePerksModule::*)()>(Sexy::CBMemberTranslatorX<MiniGamePerksModule, void
   (MiniGamePerksModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MiniGamePerksModule,void(MiniGamePerksModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MiniGamePerksModule,void(MiniGamePerksModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WireGelsemiumTutorialModule, void
   (WireGelsemiumTutorialModule::*)()>(Sexy::CBMemberTranslatorX<WireGelsemiumTutorialModule, void
   (WireGelsemiumTutorialModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WireGelsemiumTutorialModule,void(WireGelsemiumTutorialModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WireGelsemiumTutorialModule,void(WireGelsemiumTutorialModule::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIMiniGameCollection, void
   (UIMiniGameCollection::*)()>(Sexy::CBMemberTranslatorX<UIMiniGameCollection, void
   (UIMiniGameCollection::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIMiniGameCollection,void(UIMiniGameCollection::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UIMiniGameCollection,void(UIMiniGameCollection::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MiniGameCollectionModule, void
   (MiniGameCollectionModule::*)()>(Sexy::CBMemberTranslatorX<MiniGameCollectionModule, void
   (MiniGameCollectionModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MiniGameCollectionModule,void(MiniGameCollectionModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MiniGameCollectionModule,void(MiniGameCollectionModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MiniGameCollectionOutro, void
   (MiniGameCollectionOutro::*)()>(Sexy::CBMemberTranslatorX<MiniGameCollectionOutro, void
   (MiniGameCollectionOutro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MiniGameCollectionOutro,void(MiniGameCollectionOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MiniGameCollectionOutro,void(MiniGameCollectionOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActivityCollectionNighttheToy, void
   (ActivityCollectionNighttheToy::*)()>(Sexy::CBMemberTranslatorX<ActivityCollectionNighttheToy,
   void (ActivityCollectionNighttheToy::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActivityCollectionNighttheToy,void(ActivityCollectionNighttheToy::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActivityCollectionNighttheToy,void(ActivityCollectionNighttheToy::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RichManUIMgr, void
   (RichManUIMgr::*)()>(Sexy::CBMemberTranslatorX<RichManUIMgr, void (RichManUIMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RichManUIMgr,void(RichManUIMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RichManUIMgr,void(RichManUIMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorRichManScreen, void
   (AdaptorRichManScreen::*)()>(Sexy::CBMemberTranslatorX<AdaptorRichManScreen, void
   (AdaptorRichManScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdaptorRichManScreen,void(AdaptorRichManScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorRichManScreen,void(AdaptorRichManScreen::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdaptorRichManBoard, void
   (AdaptorRichManBoard::*)()>(Sexy::CBMemberTranslatorX<AdaptorRichManBoard, void
   (AdaptorRichManBoard::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdaptorRichManBoard,void(AdaptorRichManBoard::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdaptorRichManBoard,void(AdaptorRichManBoard::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CollectableAdBox, void
   (CollectableAdBox::*)()>(Sexy::CBMemberTranslatorX<CollectableAdBox, void
   (CollectableAdBox::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CollectableAdBox,void(CollectableAdBox::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CollectableAdBox,void(CollectableAdBox::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<CollectableAdBoxMgr, void
   (CollectableAdBoxMgr::*)()>(Sexy::CBMemberTranslatorX<CollectableAdBoxMgr, void
   (CollectableAdBoxMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CollectableAdBoxMgr,void(CollectableAdBoxMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CollectableAdBoxMgr,void(CollectableAdBoxMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CollectableAdUI, void
   (CollectableAdUI::*)()>(Sexy::CBMemberTranslatorX<CollectableAdUI, void (CollectableAdUI::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CollectableAdUI,void(CollectableAdUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CollectableAdUI,void(CollectableAdUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ManholePipelineModule, void
   (ManholePipelineModule::*)()>(Sexy::CBMemberTranslatorX<ManholePipelineModule, void
   (ManholePipelineModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ManholePipelineModule,void(ManholePipelineModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ManholePipelineModule,void(ManholePipelineModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemSmokeManhole, void
   (GridItemSmokeManhole::*)()>(Sexy::CBMemberTranslatorX<GridItemSmokeManhole, void
   (GridItemSmokeManhole::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemSmokeManhole,void(GridItemSmokeManhole::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemSmokeManhole,void(GridItemSmokeManhole::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SmokeManholeModule, void
   (SmokeManholeModule::*)()>(Sexy::CBMemberTranslatorX<SmokeManholeModule, void
   (SmokeManholeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SmokeManholeModule,void(SmokeManholeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SmokeManholeModule,void(SmokeManholeModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RedeemRewardUI, void
   (RedeemRewardUI::*)()>(Sexy::CBMemberTranslatorX<RedeemRewardUI, void (RedeemRewardUI::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RedeemRewardUI,void(RedeemRewardUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RedeemRewardUI,void(RedeemRewardUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_VivoGameCenterButton, void
   (WorldMap_VivoGameCenterButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_VivoGameCenterButton,
   void (WorldMap_VivoGameCenterButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_VivoGameCenterButton,void(WorldMap_VivoGameCenterButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_VivoGameCenterButton,void(WorldMap_VivoGameCenterButton::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantPlantain, void
   (PlantPlantain::*)()>(Sexy::CBMemberTranslatorX<PlantPlantain, void (PlantPlantain::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<PlantPlantain,void(PlantPlantain::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantPlantain,void(PlantPlantain::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_DaveClubButton, void
   (WorldMap_DaveClubButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_DaveClubButton, void
   (WorldMap_DaveClubButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_DaveClubButton,void(WorldMap_DaveClubButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_DaveClubButton,void(WorldMap_DaveClubButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZMatchTicketBank, void
   (ZMatchTicketBank::*)()>(Sexy::CBMemberTranslatorX<ZMatchTicketBank, void
   (ZMatchTicketBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZMatchTicketBank,void(ZMatchTicketBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZMatchTicketBank,void(ZMatchTicketBank::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<StoneLotteryPanel, void
   (StoneLotteryPanel::*)()>(Sexy::CBMemberTranslatorX<StoneLotteryPanel, void
   (StoneLotteryPanel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StoneLotteryPanel,void(StoneLotteryPanel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StoneLotteryPanel,void(StoneLotteryPanel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StoneLottery, void
   (StoneLottery::*)()>(Sexy::CBMemberTranslatorX<StoneLottery, void (StoneLottery::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StoneLottery,void(StoneLottery::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<StoneLottery,void(StoneLottery::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<OppoNewerRechargeMgr, void
   (OppoNewerRechargeMgr::*)()>(Sexy::CBMemberTranslatorX<OppoNewerRechargeMgr, void
   (OppoNewerRechargeMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<OppoNewerRechargeMgr,void(OppoNewerRechargeMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<OppoNewerRechargeMgr,void(OppoNewerRechargeMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<OppoNewerDailyAwardUI, void
   (OppoNewerDailyAwardUI::*)()>(Sexy::CBMemberTranslatorX<OppoNewerDailyAwardUI, void
   (OppoNewerDailyAwardUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<OppoNewerDailyAwardUI,void(OppoNewerDailyAwardUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<OppoNewerDailyAwardUI,void(OppoNewerDailyAwardUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MiniGameChallengeModule, void
   (MiniGameChallengeModule::*)()>(Sexy::CBMemberTranslatorX<MiniGameChallengeModule, void
   (MiniGameChallengeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MiniGameChallengeModule,void(MiniGameChallengeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MiniGameChallengeModule,void(MiniGameChallengeModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SoccerGameModule, void
   (SoccerGameModule::*)()>(Sexy::CBMemberTranslatorX<SoccerGameModule, void
   (SoccerGameModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SoccerGameModule,void(SoccerGameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SoccerGameModule,void(SoccerGameModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<SoccerGameWinOutro, void
   (SoccerGameWinOutro::*)()>(Sexy::CBMemberTranslatorX<SoccerGameWinOutro, void
   (SoccerGameWinOutro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SoccerGameWinOutro,void(SoccerGameWinOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SoccerGameWinOutro,void(SoccerGameWinOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SoccerGameLossOutro, void
   (SoccerGameLossOutro::*)()>(Sexy::CBMemberTranslatorX<SoccerGameLossOutro, void
   (SoccerGameLossOutro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SoccerGameLossOutro,void(SoccerGameLossOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SoccerGameLossOutro,void(SoccerGameLossOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieGentleman, void
   (ZombieGentleman::*)()>(Sexy::CBMemberTranslatorX<ZombieGentleman, void (ZombieGentleman::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieGentleman,void(ZombieGentleman::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieGentleman,void(ZombieGentleman::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SpringChargeManager, void
   (SpringChargeManager::*)()>(Sexy::CBMemberTranslatorX<SpringChargeManager, void
   (SpringChargeManager::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SpringChargeManager,void(SpringChargeManager::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SpringChargeManager,void(SpringChargeManager::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_AuthenticationButton, void
   (WorldMap_AuthenticationButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_AuthenticationButton,
   void (WorldMap_AuthenticationButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_AuthenticationButton,void(WorldMap_AuthenticationButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_AuthenticationButton,void(WorldMap_AuthenticationButton::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIWorldCupEntrance, void
   (UIWorldCupEntrance::*)()>(Sexy::CBMemberTranslatorX<UIWorldCupEntrance, void
   (UIWorldCupEntrance::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIWorldCupEntrance,void(UIWorldCupEntrance::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UIWorldCupEntrance,void(UIWorldCupEntrance::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMapActivityBtnTurnChangeManager, void
   (WorldMapActivityBtnTurnChangeManager::*)()>(Sexy::CBMemberTranslatorX<WorldMapActivityBtnTurnChangeManager,
   void (WorldMapActivityBtnTurnChangeManager::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<WorldMapActivityBtnTurnChangeManager,void(WorldMapActivityBtnTurnChangeManager::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMapActivityBtnTurnChangeManager,void(WorldMapActivityBtnTurnChangeManager::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_AnniversaryButton, void
   (WorldMap_AnniversaryButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_AnniversaryButton, void
   (WorldMap_AnniversaryButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_AnniversaryButton,void(WorldMap_AnniversaryButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_AnniversaryButton,void(WorldMap_AnniversaryButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_LimitGachaButton, void
   (WorldMap_LimitGachaButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_LimitGachaButton, void
   (WorldMap_LimitGachaButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_LimitGachaButton,void(WorldMap_LimitGachaButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_LimitGachaButton,void(WorldMap_LimitGachaButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_PlantSpecialOfferUIButton, void
   (WorldMap_PlantSpecialOfferUIButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_PlantSpecialOfferUIButton,
   void (WorldMap_PlantSpecialOfferUIButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<WorldMap_PlantSpecialOfferUIButton,void(WorldMap_PlantSpecialOfferUIButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_PlantSpecialOfferUIButton,void(WorldMap_PlantSpecialOfferUIButton::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_LuckBagUIButton, void
   (WorldMap_LuckBagUIButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_LuckBagUIButton, void
   (WorldMap_LuckBagUIButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_LuckBagUIButton,void(WorldMap_LuckBagUIButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_LuckBagUIButton,void(WorldMap_LuckBagUIButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UILimitLottery, void
   (UILimitLottery::*)()>(Sexy::CBMemberTranslatorX<UILimitLottery, void (UILimitLottery::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UILimitLottery,void(UILimitLottery::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UILimitLottery,void(UILimitLottery::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UILimitLotteryPage, void
   (UILimitLotteryPage::*)()>(Sexy::CBMemberTranslatorX<UILimitLotteryPage, void
   (UILimitLotteryPage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UILimitLotteryPage,void(UILimitLotteryPage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UILimitLotteryPage,void(UILimitLotteryPage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LimitLotteryPanel, void
   (LimitLotteryPanel::*)()>(Sexy::CBMemberTranslatorX<LimitLotteryPanel, void
   (LimitLotteryPanel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LimitLotteryPanel,void(LimitLotteryPanel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LimitLotteryPanel,void(LimitLotteryPanel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LimitLotteryPagePanel, void
   (LimitLotteryPanel::*)()>(Sexy::CBMemberTranslatorX<LimitLotteryPagePanel, void
   (LimitLotteryPanel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LimitLotteryPagePanel,void(LimitLotteryPanel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LimitLotteryPagePanel,void(LimitLotteryPanel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UILimitedSummon, void
   (UILimitedSummon::*)()>(Sexy::CBMemberTranslatorX<UILimitedSummon, void (UILimitedSummon::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UILimitedSummon,void(UILimitedSummon::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UILimitedSummon,void(UILimitedSummon::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UINewYearGoods, void
   (UINewYearGoods::*)()>(Sexy::CBMemberTranslatorX<UINewYearGoods, void (UINewYearGoods::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UINewYearGoods,void(UINewYearGoods::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UINewYearGoods,void(UINewYearGoods::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UICarnival, void
   (UICarnival::*)()>(Sexy::CBMemberTranslatorX<UICarnival, void (UICarnival::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UICarnival,void(UICarnival::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UICarnival,void(UICarnival::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIFightZodiacIntro, void
   (UIFightZodiacIntro::*)()>(Sexy::CBMemberTranslatorX<UIFightZodiacIntro, void
   (UIFightZodiacIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIFightZodiacIntro,void(UIFightZodiacIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UIFightZodiacIntro,void(UIFightZodiacIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIFightZodiac, void
   (UIFightZodiac::*)()>(Sexy::CBMemberTranslatorX<UIFightZodiac, void (UIFightZodiac::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<UIFightZodiac,void(UIFightZodiac::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIFightZodiac,void(UIFightZodiac::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UICallofWish, void
   (UICallofWish::*)()>(Sexy::CBMemberTranslatorX<UICallofWish, void (UICallofWish::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UICallofWish,void(UICallofWish::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UICallofWish,void(UICallofWish::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CallofWishTaskWidget, void
   (CallofWishTaskWidget::*)()>(Sexy::CBMemberTranslatorX<CallofWishTaskWidget, void
   (CallofWishTaskWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CallofWishTaskWidget,void(CallofWishTaskWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CallofWishTaskWidget,void(CallofWishTaskWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UITravelLog, void
   (UITravelLog::*)()>(Sexy::CBMemberTranslatorX<UITravelLog, void (UITravelLog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UITravelLog,void(UITravelLog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UITravelLog,void(UITravelLog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DaveTreasureTaskWidget, void
   (DaveTreasureTaskWidget::*)()>(Sexy::CBMemberTranslatorX<DaveTreasureTaskWidget, void
   (DaveTreasureTaskWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DaveTreasureTaskWidget,void(DaveTreasureTaskWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DaveTreasureTaskWidget,void(DaveTreasureTaskWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DaveTreasureRewardButton, void
   (DaveTreasureRewardButton::*)()>(Sexy::CBMemberTranslatorX<DaveTreasureRewardButton, void
   (DaveTreasureRewardButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DaveTreasureRewardButton,void(DaveTreasureRewardButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DaveTreasureRewardButton,void(DaveTreasureRewardButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PennyGuideRewardButton, void
   (PennyGuideRewardButton::*)()>(Sexy::CBMemberTranslatorX<PennyGuideRewardButton, void
   (PennyGuideRewardButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PennyGuideRewardButton,void(PennyGuideRewardButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PennyGuideRewardButton,void(PennyGuideRewardButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DaveTreasureDisplayWidget, void
   (DaveTreasureDisplayWidget::*)()>(Sexy::CBMemberTranslatorX<DaveTreasureDisplayWidget, void
   (DaveTreasureDisplayWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DaveTreasureDisplayWidget,void(DaveTreasureDisplayWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DaveTreasureDisplayWidget,void(DaveTreasureDisplayWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DaveTaskFinishPennyLevelBoss, void
   (DaveTaskFinishPennyLevelBoss::*)()>(Sexy::CBMemberTranslatorX<DaveTaskFinishPennyLevelBoss, void
   (DaveTaskFinishPennyLevelBoss::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DaveTaskFinishPennyLevelBoss,void(DaveTaskFinishPennyLevelBoss::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DaveTaskFinishPennyLevelBoss,void(DaveTaskFinishPennyLevelBoss::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<FestivalGoldenEggManager, void
   (FestivalGoldenEggManager::*)()>(Sexy::CBMemberTranslatorX<FestivalGoldenEggManager, void
   (FestivalGoldenEggManager::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<FestivalGoldenEggManager,void(FestivalGoldenEggManager::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<FestivalGoldenEggManager,void(FestivalGoldenEggManager::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIArborDay, void
   (UIArborDay::*)()>(Sexy::CBMemberTranslatorX<UIArborDay, void (UIArborDay::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIArborDay,void(UIArborDay::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIArborDay,void(UIArborDay::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIBattleOrder, void
   (UIBattleOrder::*)()>(Sexy::CBMemberTranslatorX<UIBattleOrder, void (UIBattleOrder::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<UIBattleOrder,void(UIBattleOrder::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIBattleOrder,void(UIBattleOrder::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIAnniversaryTreasure, void
   (UIAnniversaryTreasure::*)()>(Sexy::CBMemberTranslatorX<UIAnniversaryTreasure, void
   (UIAnniversaryTreasure::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIAnniversaryTreasure,void(UIAnniversaryTreasure::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UIAnniversaryTreasure,void(UIAnniversaryTreasure::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskDailyConsumeGemsListener, void
   (GeneralTaskDailyConsumeGemsListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskDailyConsumeGemsListener,
   void (GeneralTaskDailyConsumeGemsListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskDailyConsumeGemsListener,void(GeneralTaskDailyConsumeGemsListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskDailyConsumeGemsListener,void(GeneralTaskDailyConsumeGemsListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskAvatarTransgenosisListener, void
   (GeneralTaskAvatarTransgenosisListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskAvatarTransgenosisListener,
   void (GeneralTaskAvatarTransgenosisListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskAvatarTransgenosisListener,void(GeneralTaskAvatarTransgenosisListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskAvatarTransgenosisListener,void(GeneralTaskAvatarTransgenosisListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NoviceSevenDaysTaskPassLevelWithCheckListener, void
   (NoviceSevenDaysTaskPassLevelWithCheckListener::*)()>(Sexy::CBMemberTranslatorX<NoviceSevenDaysTaskPassLevelWithCheckListener,
   void (NoviceSevenDaysTaskPassLevelWithCheckListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<NoviceSevenDaysTaskPassLevelWithCheckListener,void(NoviceSevenDaysTaskPassLevelWithCheckListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<NoviceSevenDaysTaskPassLevelWithCheckListener,void(NoviceSevenDaysTaskPassLevelWithCheckListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskPlantLevelUpListener, void
   (GeneralTaskPlantLevelUpListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskPlantLevelUpListener,
   void (GeneralTaskPlantLevelUpListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskPlantLevelUpListener,void(GeneralTaskPlantLevelUpListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskPlantLevelUpListener,void(GeneralTaskPlantLevelUpListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskDailyTravelLogListener, void
   (GeneralTaskDailyTravelLogListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskDailyTravelLogListener,
   void (GeneralTaskDailyTravelLogListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskDailyTravelLogListener,void(GeneralTaskDailyTravelLogListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskDailyTravelLogListener,void(GeneralTaskDailyTravelLogListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskWorldTravelLogListener, void
   (GeneralTaskWorldTravelLogListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskWorldTravelLogListener,
   void (GeneralTaskWorldTravelLogListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskWorldTravelLogListener,void(GeneralTaskWorldTravelLogListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskWorldTravelLogListener,void(GeneralTaskWorldTravelLogListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskSpecialTravelLogListener, void
   (GeneralTaskSpecialTravelLogListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskSpecialTravelLogListener,
   void (GeneralTaskSpecialTravelLogListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskSpecialTravelLogListener,void(GeneralTaskSpecialTravelLogListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskSpecialTravelLogListener,void(GeneralTaskSpecialTravelLogListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskPlantFamilyRefreshWithCheckListener, void
   (GeneralTaskPlantFamilyRefreshWithCheckListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskPlantFamilyRefreshWithCheckListener,
   void (GeneralTaskPlantFamilyRefreshWithCheckListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskPlantFamilyRefreshWithCheckListener,void(GeneralTaskPlantFamilyRefreshWithCheckListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskPlantFamilyRefreshWithCheckListener,void(GeneralTaskPlantFamilyRefreshWithCheckListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskTransgenosisWithCheckListener, void
   (GeneralTaskTransgenosisWithCheckListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskTransgenosisWithCheckListener,
   void (GeneralTaskTransgenosisWithCheckListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskTransgenosisWithCheckListener,void(GeneralTaskTransgenosisWithCheckListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskTransgenosisWithCheckListener,void(GeneralTaskTransgenosisWithCheckListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskPVPBuyShopObjectListener, void
   (GeneralTaskPVPBuyShopObjectListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskPVPBuyShopObjectListener,
   void (GeneralTaskPVPBuyShopObjectListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskPVPBuyShopObjectListener,void(GeneralTaskPVPBuyShopObjectListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskPVPBuyShopObjectListener,void(GeneralTaskPVPBuyShopObjectListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskSteadyAccessoryListener, void
   (GeneralTaskSteadyAccessoryListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskSteadyAccessoryListener,
   void (GeneralTaskSteadyAccessoryListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskSteadyAccessoryListener,void(GeneralTaskSteadyAccessoryListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskSteadyAccessoryListener,void(GeneralTaskSteadyAccessoryListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskBuySecretStoreListener, void
   (GeneralTaskBuySecretStoreListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskBuySecretStoreListener,
   void (GeneralTaskBuySecretStoreListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskBuySecretStoreListener,void(GeneralTaskBuySecretStoreListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskBuySecretStoreListener,void(GeneralTaskBuySecretStoreListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskPublishCustomLevelListener, void
   (GeneralTaskPublishCustomLevelListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskPublishCustomLevelListener,
   void (GeneralTaskPublishCustomLevelListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskPublishCustomLevelListener,void(GeneralTaskPublishCustomLevelListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskPublishCustomLevelListener,void(GeneralTaskPublishCustomLevelListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskBreakHappyVaseListener, void
   (GeneralTaskBreakHappyVaseListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskBreakHappyVaseListener,
   void (GeneralTaskBreakHappyVaseListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskBreakHappyVaseListener,void(GeneralTaskBreakHappyVaseListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskBreakHappyVaseListener,void(GeneralTaskBreakHappyVaseListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskBreakGoldenEggListener, void
   (GeneralTaskBreakGoldenEggListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskBreakGoldenEggListener,
   void (GeneralTaskBreakGoldenEggListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskBreakGoldenEggListener,void(GeneralTaskBreakGoldenEggListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskBreakGoldenEggListener,void(GeneralTaskBreakGoldenEggListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskRichManRollDiceListener, void
   (GeneralTaskRichManRollDiceListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskRichManRollDiceListener,
   void (GeneralTaskRichManRollDiceListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskRichManRollDiceListener,void(GeneralTaskRichManRollDiceListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskRichManRollDiceListener,void(GeneralTaskRichManRollDiceListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskPassBossChallengeLevelListener, void
   (GeneralTaskPassBossChallengeLevelListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskPassBossChallengeLevelListener,
   void (GeneralTaskPassBossChallengeLevelListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskPassBossChallengeLevelListener,void(GeneralTaskPassBossChallengeLevelListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskPassBossChallengeLevelListener,void(GeneralTaskPassBossChallengeLevelListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskConsumeGemsListener, void
   (GeneralTaskConsumeGemsListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskConsumeGemsListener,
   void (GeneralTaskConsumeGemsListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GeneralTaskConsumeGemsListener,void(GeneralTaskConsumeGemsListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskConsumeGemsListener,void(GeneralTaskConsumeGemsListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskRealSecretStoreListener, void
   (GeneralTaskRealSecretStoreListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskRealSecretStoreListener,
   void (GeneralTaskRealSecretStoreListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskRealSecretStoreListener,void(GeneralTaskRealSecretStoreListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskRealSecretStoreListener,void(GeneralTaskRealSecretStoreListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPUpgradeSunListener, void
   (NewPVPUpgradeSunListener::*)()>(Sexy::CBMemberTranslatorX<NewPVPUpgradeSunListener, void
   (NewPVPUpgradeSunListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPUpgradeSunListener,void(NewPVPUpgradeSunListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<NewPVPUpgradeSunListener,void(NewPVPUpgradeSunListener::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPFirstBloodListener, void
   (NewPVPFirstBloodListener::*)()>(Sexy::CBMemberTranslatorX<NewPVPFirstBloodListener, void
   (NewPVPFirstBloodListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewPVPFirstBloodListener,void(NewPVPFirstBloodListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<NewPVPFirstBloodListener,void(NewPVPFirstBloodListener::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewPVPAddZombieInSingleLevelListener, void
   (NewPVPAddZombieInSingleLevelListener::*)()>(Sexy::CBMemberTranslatorX<NewPVPAddZombieInSingleLevelListener,
   void (NewPVPAddZombieInSingleLevelListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<NewPVPAddZombieInSingleLevelListener,void(NewPVPAddZombieInSingleLevelListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<NewPVPAddZombieInSingleLevelListener,void(NewPVPAddZombieInSingleLevelListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RecruitNumListener, void
   (RecruitNumListener::*)()>(Sexy::CBMemberTranslatorX<RecruitNumListener, void
   (RecruitNumListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RecruitNumListener,void(RecruitNumListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RecruitNumListener,void(RecruitNumListener::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RecruitStarNumListener, void
   (RecruitStarNumListener::*)()>(Sexy::CBMemberTranslatorX<RecruitStarNumListener, void
   (RecruitStarNumListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RecruitStarNumListener,void(RecruitStarNumListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RecruitStarNumListener,void(RecruitStarNumListener::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskCollectNFSLinkage1Listener, void
   (GeneralTaskCollectNFSLinkage1Listener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskCollectNFSLinkage1Listener,
   void (GeneralTaskCollectNFSLinkage1Listener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskCollectNFSLinkage1Listener,void(GeneralTaskCollectNFSLinkage1Listener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskCollectNFSLinkage1Listener,void(GeneralTaskCollectNFSLinkage1Listener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskCollectNFSLinkage2Listener, void
   (GeneralTaskCollectNFSLinkage2Listener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskCollectNFSLinkage2Listener,
   void (GeneralTaskCollectNFSLinkage2Listener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskCollectNFSLinkage2Listener,void(GeneralTaskCollectNFSLinkage2Listener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskCollectNFSLinkage2Listener,void(GeneralTaskCollectNFSLinkage2Listener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LuckyChestTask, void
   (LuckyChestTask::*)()>(Sexy::CBMemberTranslatorX<LuckyChestTask, void (LuckyChestTask::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LuckyChestTask,void(LuckyChestTask::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<LuckyChestTask,void(LuckyChestTask::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskUnlockPlantAvatarListener, void
   (GeneralTaskUnlockPlantAvatarListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskUnlockPlantAvatarListener,
   void (GeneralTaskUnlockPlantAvatarListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskUnlockPlantAvatarListener,void(GeneralTaskUnlockPlantAvatarListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskUnlockPlantAvatarListener,void(GeneralTaskUnlockPlantAvatarListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskPlantWarsStarListener, void
   (GeneralTaskPlantWarsStarListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskPlantWarsStarListener,
   void (GeneralTaskPlantWarsStarListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskPlantWarsStarListener,void(GeneralTaskPlantWarsStarListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskPlantWarsStarListener,void(GeneralTaskPlantWarsStarListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeneralTaskNewPlantLevelUpListener, void
   (GeneralTaskNewPlantLevelUpListener::*)()>(Sexy::CBMemberTranslatorX<GeneralTaskNewPlantLevelUpListener,
   void (GeneralTaskNewPlantLevelUpListener::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GeneralTaskNewPlantLevelUpListener,void(GeneralTaskNewPlantLevelUpListener::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeneralTaskNewPlantLevelUpListener,void(GeneralTaskNewPlantLevelUpListener::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<FestivalShopContent, void
   (FestivalShopContent::*)()>(Sexy::CBMemberTranslatorX<FestivalShopContent, void
   (FestivalShopContent::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<FestivalShopContent,void(FestivalShopContent::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<FestivalShopContent,void(FestivalShopContent::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_AcFirstRechargeButton, void
   (WorldMap_AcFirstRechargeButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_AcFirstRechargeButton,
   void (WorldMap_AcFirstRechargeButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_AcFirstRechargeButton,void(WorldMap_AcFirstRechargeButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_AcFirstRechargeButton,void(WorldMap_AcFirstRechargeButton::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantButtercup, void
   (PlantButtercup::*)()>(Sexy::CBMemberTranslatorX<PlantButtercup, void (PlantButtercup::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantButtercup,void(PlantButtercup::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantButtercup,void(PlantButtercup::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Effect_Mole, void
   (Effect_Mole::*)()>(Sexy::CBMemberTranslatorX<Effect_Mole, void (Effect_Mole::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Effect_Mole,void(Effect_Mole::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Effect_Mole,void(Effect_Mole::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemMole, void
   (GridItemMole::*)()>(Sexy::CBMemberTranslatorX<GridItemMole, void (GridItemMole::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemMole,void(GridItemMole::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemMole,void(GridItemMole::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WhackAMoleIntro, void
   (WhackAMoleIntro::*)()>(Sexy::CBMemberTranslatorX<WhackAMoleIntro, void (WhackAMoleIntro::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WhackAMoleIntro,void(WhackAMoleIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<WhackAMoleIntro,void(WhackAMoleIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WhackAMoleModule, void
   (WhackAMoleModule::*)()>(Sexy::CBMemberTranslatorX<WhackAMoleModule, void
   (WhackAMoleModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WhackAMoleModule,void(WhackAMoleModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<WhackAMoleModule,void(WhackAMoleModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<WhackAMoleWinOutro, void
   (WhackAMoleWinOutro::*)()>(Sexy::CBMemberTranslatorX<WhackAMoleWinOutro, void
   (WhackAMoleWinOutro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WhackAMoleWinOutro,void(WhackAMoleWinOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WhackAMoleWinOutro,void(WhackAMoleWinOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WhackAMoleLossOutro, void
   (WhackAMoleLossOutro::*)()>(Sexy::CBMemberTranslatorX<WhackAMoleLossOutro, void
   (WhackAMoleLossOutro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WhackAMoleLossOutro,void(WhackAMoleLossOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WhackAMoleLossOutro,void(WhackAMoleLossOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<IdentifierMgr, void
   (IdentifierMgr::*)()>(Sexy::CBMemberTranslatorX<IdentifierMgr, void (IdentifierMgr::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<IdentifierMgr,void(IdentifierMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<IdentifierMgr,void(IdentifierMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BasePowerup, void
   (BasePowerup::*)()>(Sexy::CBMemberTranslatorX<BasePowerup, void (BasePowerup::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BasePowerup,void(BasePowerup::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<BasePowerup,void(BasePowerup::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerupTouchBased, void
   (PowerupTouchBased::*)()>(Sexy::CBMemberTranslatorX<PowerupTouchBased, void
   (PowerupTouchBased::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PowerupTouchBased,void(PowerupTouchBased::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PowerupTouchBased,void(PowerupTouchBased::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ComponentRadiusBurst, void
   (ComponentRadiusBurst::*)()>(Sexy::CBMemberTranslatorX<ComponentRadiusBurst, void
   (ComponentRadiusBurst::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ComponentRadiusBurst,void(ComponentRadiusBurst::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ComponentRadiusBurst,void(ComponentRadiusBurst::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Bomb, void (Bomb::*)()>(Sexy::CBMemberTranslatorX<Bomb, void
   (Bomb::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Bomb,void(Bomb::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Bomb,void(Bomb::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BombModule, void (BombModule::*)()
   const>(Sexy::CBMemberTranslatorX<BombModule, void (BombModule::*)() const> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BombModule,void(BombModule::*)()const>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<BombModule,void(BombModule::*)()const>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BeghouledModule, void
   (BeghouledModule::*)()>(Sexy::CBMemberTranslatorX<BeghouledModule, void (BeghouledModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BeghouledModule,void(BeghouledModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<BeghouledModule,void(BeghouledModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BeghouledWaveProgressMeter, void
   (BeghouledWaveProgressMeter::*)()>(Sexy::CBMemberTranslatorX<BeghouledWaveProgressMeter, void
   (BeghouledWaveProgressMeter::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BeghouledWaveProgressMeter,void(BeghouledWaveProgressMeter::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<BeghouledWaveProgressMeter,void(BeghouledWaveProgressMeter::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BeghouledZombieSpawnerModule, void
   (BeghouledZombieSpawnerModule::*)()>(Sexy::CBMemberTranslatorX<BeghouledZombieSpawnerModule, void
   (BeghouledZombieSpawnerModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BeghouledZombieSpawnerModule,void(BeghouledZombieSpawnerModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<BeghouledZombieSpawnerModule,void(BeghouledZombieSpawnerModule::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CamelMinigameModule, void
   (CamelMinigameModule::*)()>(Sexy::CBMemberTranslatorX<CamelMinigameModule, void
   (CamelMinigameModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CamelMinigameModule,void(CamelMinigameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CamelMinigameModule,void(CamelMinigameModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CannonMinigameModule, void
   (CannonMinigameModule::*)()>(Sexy::CBMemberTranslatorX<CannonMinigameModule, void
   (CannonMinigameModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CannonMinigameModule,void(CannonMinigameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CannonMinigameModule,void(CannonMinigameModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WhackHammerUI, void
   (WhackHammerUI::*)()>(Sexy::CBMemberTranslatorX<WhackHammerUI, void (WhackHammerUI::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<WhackHammerUI,void(WhackHammerUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<WhackHammerUI,void(WhackHammerUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ChallengeModule, void
   (ChallengeModule::*)()>(Sexy::CBMemberTranslatorX<ChallengeModule, void (ChallengeModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ChallengeModule,void(ChallengeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ChallengeModule,void(ChallengeModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieModernNewspaper, void
   (ZombieModernNewspaper::*)()>(Sexy::CBMemberTranslatorX<ZombieModernNewspaper, void
   (ZombieModernNewspaper::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieModernNewspaper,void(ZombieModernNewspaper::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieModernNewspaper,void(ZombieModernNewspaper::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantStatefulFramework, void
   (PlantStatefulFramework::*)()>(Sexy::CBMemberTranslatorX<PlantStatefulFramework, void
   (PlantStatefulFramework::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantGrimrose, void
   (PlantGrimrose::*)()>(Sexy::CBMemberTranslatorX<PlantGrimrose, void (PlantGrimrose::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<PlantGrimrose,void(PlantGrimrose::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantGrimrose,void(PlantGrimrose::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MissileToeTutorialModule, void
   (MissileToeTutorialModule::*)()>(Sexy::CBMemberTranslatorX<MissileToeTutorialModule, void
   (MissileToeTutorialModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MissileToeTutorialModule,void(MissileToeTutorialModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MissileToeTutorialModule,void(MissileToeTutorialModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AlarmSagittifoliaFenceSystem, void
   (AlarmSagittifoliaFenceSystem::*)()>(Sexy::CBMemberTranslatorX<AlarmSagittifoliaFenceSystem, void
   (AlarmSagittifoliaFenceSystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AlarmSagittifoliaFenceSystem,void(AlarmSagittifoliaFenceSystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AlarmSagittifoliaFenceSystem,void(AlarmSagittifoliaFenceSystem::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAlarmSagittifolia, void
   (PlantAlarmSagittifolia::*)()>(Sexy::CBMemberTranslatorX<PlantAlarmSagittifolia, void
   (PlantAlarmSagittifolia::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAlarmSagittifolia,void(PlantAlarmSagittifolia::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAlarmSagittifolia,void(PlantAlarmSagittifolia::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantIcyCurrant, void
   (PlantIcyCurrant::*)()>(Sexy::CBMemberTranslatorX<PlantIcyCurrant, void (PlantIcyCurrant::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantIcyCurrant,void(PlantIcyCurrant::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantIcyCurrant,void(PlantIcyCurrant::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieModernAllStar, void
   (ZombieModernAllStar::*)()>(Sexy::CBMemberTranslatorX<ZombieModernAllStar, void
   (ZombieModernAllStar::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieModernAllStar,void(ZombieModernAllStar::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieModernAllStar,void(ZombieModernAllStar::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieModernBalloon, void
   (ZombieModernBalloon::*)()>(Sexy::CBMemberTranslatorX<ZombieModernBalloon, void
   (ZombieModernBalloon::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieModernBalloon,void(ZombieModernBalloon::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieModernBalloon,void(ZombieModernBalloon::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieSteamCoalMiner, void
   (ZombieSteamCoalMiner::*)()>(Sexy::CBMemberTranslatorX<ZombieSteamCoalMiner, void
   (ZombieSteamCoalMiner::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieSteamCoalMiner,void(ZombieSteamCoalMiner::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieSteamCoalMiner,void(ZombieSteamCoalMiner::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieSteamStove, void
   (ZombieSteamStove::*)()>(Sexy::CBMemberTranslatorX<ZombieSteamStove, void
   (ZombieSteamStove::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieSteamStove,void(ZombieSteamStove::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieSteamStove,void(ZombieSteamStove::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombossSteamTrainSpawnActionHandler, void
   (ZombossSteamTrainSpawnActionHandler::*)()>(Sexy::CBMemberTranslatorX<ZombossSteamTrainSpawnActionHandler,
   void (ZombossSteamTrainSpawnActionHandler::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<ZombossSteamTrainSpawnActionHandler,void(ZombossSteamTrainSpawnActionHandler::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombossSteamTrainSpawnActionHandler,void(ZombossSteamTrainSpawnActionHandler::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CoinBank, void (CoinBank::*)()>(Sexy::CBMemberTranslatorX<CoinBank,
   void (CoinBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CoinBank,void(CoinBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CoinBank,void(CoinBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Collectable, void
   (Collectable::*)()>(Sexy::CBMemberTranslatorX<Collectable, void (Collectable::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Collectable,void(Collectable::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Collectable,void(Collectable::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CollectableSeedPacket, void
   (CollectableSeedPacket::*)()>(Sexy::CBMemberTranslatorX<CollectableSeedPacket, void
   (CollectableSeedPacket::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CollectableSeedPacket,void(CollectableSeedPacket::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CollectableSeedPacket,void(CollectableSeedPacket::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CollectableSeedPacketZombie, void
   (CollectableSeedPacketZombie::*)()>(Sexy::CBMemberTranslatorX<CollectableSeedPacketZombie, void
   (CollectableSeedPacketZombie::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CollectableSeedPacketZombie,void(CollectableSeedPacketZombie::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CollectableSeedPacketZombie,void(CollectableSeedPacketZombie::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CollectableSeedRain, void
   (CollectableSeedRain::*)()>(Sexy::CBMemberTranslatorX<CollectableSeedRain, void
   (CollectableSeedRain::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CollectableSeedRain,void(CollectableSeedRain::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CollectableSeedRain,void(CollectableSeedRain::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ConveyorSeedBank, void
   (ConveyorSeedBank::*)()>(Sexy::CBMemberTranslatorX<ConveyorSeedBank, void
   (ConveyorSeedBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ConveyorSeedBank,void(ConveyorSeedBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ConveyorSeedBank,void(ConveyorSeedBank::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<CowboyMinigameModule, void
   (CowboyMinigameModule::*)()>(Sexy::CBMemberTranslatorX<CowboyMinigameModule, void
   (CowboyMinigameModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CowboyMinigameModule,void(CowboyMinigameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CowboyMinigameModule,void(CowboyMinigameModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CrazyNPC, void (CrazyNPC::*)()>(Sexy::CBMemberTranslatorX<CrazyNPC,
   void (CrazyNPC::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CrazyNPC,void(CrazyNPC::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CrazyNPC,void(CrazyNPC::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CrazyNPCManager, void
   (CrazyNPCManager::*)()>(Sexy::CBMemberTranslatorX<CrazyNPCManager, void (CrazyNPCManager::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CrazyNPCManager,void(CrazyNPCManager::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CrazyNPCManager,void(CrazyNPCManager::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CrazyOlafTest, void
   (CrazyOlafTest::*)()>(Sexy::CBMemberTranslatorX<CrazyOlafTest, void (CrazyOlafTest::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<CrazyOlafTest,void(CrazyOlafTest::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CrazyOlafTest,void(CrazyOlafTest::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DangerRoomLevelIntro, void
   (DangerRoomLevelIntro::*)()>(Sexy::CBMemberTranslatorX<DangerRoomLevelIntro, void
   (DangerRoomLevelIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DangerRoomLevelIntro,void(DangerRoomLevelIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DangerRoomLevelIntro,void(DangerRoomLevelIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DangerRoomModule, void
   (DangerRoomModule::*)()>(Sexy::CBMemberTranslatorX<DangerRoomModule, void
   (DangerRoomModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DangerRoomModule,void(DangerRoomModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<DangerRoomModule,void(DangerRoomModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<DangerRoomStatScreen, void
   (DangerRoomStatScreen::*)()>(Sexy::CBMemberTranslatorX<DangerRoomStatScreen, void
   (DangerRoomStatScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DangerRoomStatScreen,void(DangerRoomStatScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DangerRoomStatScreen,void(DangerRoomStatScreen::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<EgyptStage, void
   (EgyptStage::*)()>(Sexy::CBMemberTranslatorX<EgyptStage, void (EgyptStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<EgyptStage,void(EgyptStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<EgyptStage,void(EgyptStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<KongFuStage, void
   (KongFuStage::*)()>(Sexy::CBMemberTranslatorX<KongFuStage, void (KongFuStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<KongFuStage,void(KongFuStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<KongFuStage,void(KongFuStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<FadeOutOutroModule, void
   (FadeOutOutroModule::*)()>(Sexy::CBMemberTranslatorX<FadeOutOutroModule, void
   (FadeOutOutroModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<FadeOutOutroModule,void(FadeOutOutroModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<FadeOutOutroModule,void(FadeOutOutroModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<FiregourdTutorialIntro, void
   (FiregourdTutorialIntro::*)()>(Sexy::CBMemberTranslatorX<FiregourdTutorialIntro, void
   (FiregourdTutorialIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Fuse, void (Fuse::*)()>(Sexy::CBMemberTranslatorX<Fuse, void
   (Fuse::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Fuse,void(Fuse::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Fuse,void(Fuse::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerTileModule, void
   (PowerTileModule::*)()>(Sexy::CBMemberTranslatorX<PowerTileModule, void (PowerTileModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PowerTileModule,void(PowerTileModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PowerTileModule,void(PowerTileModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<FutureStage, void
   (FutureStage::*)()>(Sexy::CBMemberTranslatorX<FutureStage, void (FutureStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<FutureStage,void(FutureStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<FutureStage,void(FutureStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BeachStage, void
   (BeachStage::*)()>(Sexy::CBMemberTranslatorX<BeachStage, void (BeachStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BeachStage,void(BeachStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<BeachStage,void(BeachStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SkyCityStage, void
   (SkyCityStage::*)()>(Sexy::CBMemberTranslatorX<SkyCityStage, void (SkyCityStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SkyCityStage,void(SkyCityStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SkyCityStage,void(SkyCityStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RenaiStage, void
   (RenaiStage::*)()>(Sexy::CBMemberTranslatorX<RenaiStage, void (RenaiStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RenaiStage,void(RenaiStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RenaiStage,void(RenaiStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RenaiModule, void
   (RenaiModule::*)()>(Sexy::CBMemberTranslatorX<RenaiModule, void (RenaiModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RenaiModule,void(RenaiModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RenaiModule,void(RenaiModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StatueMazeModule, void
   (StatueMazeModule::*)()>(Sexy::CBMemberTranslatorX<StatueMazeModule, void
   (StatueMazeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StatueMazeModule,void(StatueMazeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<StatueMazeModule,void(StatueMazeModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemMazeStatue, void
   (GridItemMazeStatue::*)()>(Sexy::CBMemberTranslatorX<GridItemMazeStatue, void
   (GridItemMazeStatue::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemMazeStatue,void(GridItemMazeStatue::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemMazeStatue,void(GridItemMazeStatue::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<JuggledModule, void
   (JuggledModule::*)()>(Sexy::CBMemberTranslatorX<JuggledModule, void (JuggledModule::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<JuggledModule,void(JuggledModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<JuggledModule,void(JuggledModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<HeianWindModule, void
   (HeianWindModule::*)()>(Sexy::CBMemberTranslatorX<HeianWindModule, void (HeianWindModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<HeianWindModule,void(HeianWindModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<HeianWindModule,void(HeianWindModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieHeianNinja, void
   (ZombieHeianNinja::*)()>(Sexy::CBMemberTranslatorX<ZombieHeianNinja, void
   (ZombieHeianNinja::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieHeianNinja,void(ZombieHeianNinja::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieHeianNinja,void(ZombieHeianNinja::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<GameStateMgr, void
   (GameStateMgr::*)()>(Sexy::CBMemberTranslatorX<GameStateMgr, void (GameStateMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GameStateMgr,void(GameStateMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GameStateTransitionController, void
   (GameStateTransitionController::*)()>(Sexy::CBMemberTranslatorX<GameStateTransitionController,
   void (GameStateTransitionController::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GameStateTransitionController,void(GameStateTransitionController::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GameStateTransitionController,void(GameStateTransitionController::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GemBank, void (GemBank::*)()>(Sexy::CBMemberTranslatorX<GemBank, void
   (GemBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GemBank,void(GemBank::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GemBank,void(GemBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerTileSubsystem, void
   (PowerTileSubsystem::*)()>(Sexy::CBMemberTranslatorX<PowerTileSubsystem, void
   (PowerTileSubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PowerTileSubsystem,void(PowerTileSubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PowerTileSubsystem,void(PowerTileSubsystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemEliminateShield, void
   (GridItemEliminateShield::*)()>(Sexy::CBMemberTranslatorX<GridItemEliminateShield, void
   (GridItemEliminateShield::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemEliminateShield,void(GridItemEliminateShield::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemEliminateShield,void(GridItemEliminateShield::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemZombiePortal, void
   (GridItemZombiePortal::*)()>(Sexy::CBMemberTranslatorX<GridItemZombiePortal, void
   (GridItemZombiePortal::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemZombiePortal,void(GridItemZombiePortal::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemZombiePortal,void(GridItemZombiePortal::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RoofModule, void
   (RoofModule::*)()>(Sexy::CBMemberTranslatorX<RoofModule, void (RoofModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RoofModule,void(RoofModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RoofModule,void(RoofModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RoofStage, void (RoofStage::*)()>(Sexy::CBMemberTranslatorX<RoofStage,
   void (RoofStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RoofStage,void(RoofStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RoofStage,void(RoofStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIHeadshot, void
   (UIHeadshot::*)()>(Sexy::CBMemberTranslatorX<UIHeadshot, void (UIHeadshot::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIHeadshot,void(UIHeadshot::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIHeadshot,void(UIHeadshot::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIDangerRoomSelectScreen, void
   (UIDangerRoomSelectScreen::*)()>(Sexy::CBMemberTranslatorX<UIDangerRoomSelectScreen, void
   (UIDangerRoomSelectScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIDangerRoomSelectScreen,void(UIDangerRoomSelectScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UIDangerRoomSelectScreen,void(UIDangerRoomSelectScreen::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIPrivacyDialog, void
   (UIPrivacyDialog::*)()>(Sexy::CBMemberTranslatorX<UIPrivacyDialog, void (UIPrivacyDialog::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIPrivacyDialog,void(UIPrivacyDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIPrivacyDialog,void(UIPrivacyDialog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIMysteryStore, void
   (UIMysteryStore::*)()>(Sexy::CBMemberTranslatorX<UIMysteryStore, void (UIMysteryStore::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIMysteryStore,void(UIMysteryStore::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIMysteryStore,void(UIMysteryStore::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SecretStoreMgr, void
   (SecretStoreMgr::*)()>(Sexy::CBMemberTranslatorX<SecretStoreMgr, void (SecretStoreMgr::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SecretStoreMgr,void(SecretStoreMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SecretStoreMgr,void(SecretStoreMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UILimitedGacha, void
   (UILimitedGacha::*)()>(Sexy::CBMemberTranslatorX<UILimitedGacha, void (UILimitedGacha::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UILimitedGacha,void(UILimitedGacha::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UILimitedGacha,void(UILimitedGacha::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactPresentMgr, void
   (ArtifactPresentMgr::*)()>(Sexy::CBMemberTranslatorX<ArtifactPresentMgr, void
   (ArtifactPresentMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactPresentMgr,void(ArtifactPresentMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArtifactPresentMgr,void(ArtifactPresentMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<EnergyGridModule, void
   (EnergyGridModule::*)()>(Sexy::CBMemberTranslatorX<EnergyGridModule, void
   (EnergyGridModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<EnergyGridModule,void(EnergyGridModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<EnergyGridModule,void(EnergyGridModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<BronzeModule, void
   (BronzeModule::*)()>(Sexy::CBMemberTranslatorX<BronzeModule, void (BronzeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BronzeModule,void(BronzeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<BronzeModule,void(BronzeModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GravestoneModule, void
   (GravestoneModule::*)()>(Sexy::CBMemberTranslatorX<GravestoneModule, void
   (GravestoneModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GravestoneModule,void(GravestoneModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GravestoneModule,void(GravestoneModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ArmrackModule, void
   (ArmrackModule::*)()>(Sexy::CBMemberTranslatorX<ArmrackModule, void (ArmrackModule::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<ArmrackModule,void(ArmrackModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ArmrackModule,void(ArmrackModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<EvilDaveModule, void
   (EvilDaveModule::*)()>(Sexy::CBMemberTranslatorX<EvilDaveModule, void (EvilDaveModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<EvilDaveModule,void(EvilDaveModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<EvilDaveModule,void(EvilDaveModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TowerDefendModule, void
   (TowerDefendModule::*)()>(Sexy::CBMemberTranslatorX<TowerDefendModule, void
   (TowerDefendModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TowerDefendModule,void(TowerDefendModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<TowerDefendModule,void(TowerDefendModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SpeedUpTileModule, void
   (SpeedUpTileModule::*)()>(Sexy::CBMemberTranslatorX<SpeedUpTileModule, void
   (SpeedUpTileModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SpeedUpTileModule,void(SpeedUpTileModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SpeedUpTileModule,void(SpeedUpTileModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UISecretGacha, void
   (UISecretGacha::*)()>(Sexy::CBMemberTranslatorX<UISecretGacha, void (UISecretGacha::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<UISecretGacha,void(UISecretGacha::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UISecretGacha,void(UISecretGacha::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GachaItemDisplayer, void
   (GachaItemDisplayer::*)()>(Sexy::CBMemberTranslatorX<GachaItemDisplayer, void
   (GachaItemDisplayer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GachaItemDisplayer,void(GachaItemDisplayer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GachaItemDisplayer,void(GachaItemDisplayer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GachaItem, void (GachaItem::*)()>(Sexy::CBMemberTranslatorX<GachaItem,
   void (GachaItem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GachaItem,void(GachaItem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GachaItem,void(GachaItem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GachaMgr, void (GachaMgr::*)()>(Sexy::CBMemberTranslatorX<GachaMgr,
   void (GachaMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GachaMgr,void(GachaMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GachaMgr,void(GachaMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItem, void (GridItem::*)()>(Sexy::CBMemberTranslatorX<GridItem,
   void (GridItem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItem,void(GridItem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItem,void(GridItem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemArmrack, void
   (GridItemArmrack::*)()>(Sexy::CBMemberTranslatorX<GridItemArmrack, void (GridItemArmrack::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemArmrack,void(GridItemArmrack::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemArmrack,void(GridItemArmrack::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemFlame, void
   (GridItemFlame::*)()>(Sexy::CBMemberTranslatorX<GridItemFlame, void (GridItemFlame::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemFlame,void(GridItemFlame::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemFlame,void(GridItemFlame::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemGravestone, void
   (GridItemGravestone::*)()>(Sexy::CBMemberTranslatorX<GridItemGravestone, void
   (GridItemGravestone::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemGravestone,void(GridItemGravestone::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemGravestone,void(GridItemGravestone::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemMechanismPlank, void
   (GridItemMechanismPlank::*)()>(Sexy::CBMemberTranslatorX<GridItemMechanismPlank, void
   (GridItemMechanismPlank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemMechanismPlank,void(GridItemMechanismPlank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemMechanismPlank,void(GridItemMechanismPlank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemRailcart, void
   (GridItemRailcart::*)()>(Sexy::CBMemberTranslatorX<GridItemRailcart, void
   (GridItemRailcart::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemRailcart,void(GridItemRailcart::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemRailcart,void(GridItemRailcart::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemBronze, void
   (GridItemBronze::*)()>(Sexy::CBMemberTranslatorX<GridItemBronze, void (GridItemBronze::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemBronze,void(GridItemBronze::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemBronze,void(GridItemBronze::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemGoldTile, void
   (GridItemGoldTile::*)()>(Sexy::CBMemberTranslatorX<GridItemGoldTile, void
   (GridItemGoldTile::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemGoldTile,void(GridItemGoldTile::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemGoldTile,void(GridItemGoldTile::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemSpeaker, void
   (GridItemSpeaker::*)()>(Sexy::CBMemberTranslatorX<GridItemSpeaker, void (GridItemSpeaker::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemSpeaker,void(GridItemSpeaker::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemSpeaker,void(GridItemSpeaker::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemSpeakerZomboss, void
   (GridItemSpeakerZomboss::*)()>(Sexy::CBMemberTranslatorX<GridItemSpeakerZomboss, void
   (GridItemSpeakerZomboss::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemSpeakerZomboss,void(GridItemSpeakerZomboss::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemSpeakerZomboss,void(GridItemSpeakerZomboss::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WarMistModule, void
   (WarMistModule::*)()>(Sexy::CBMemberTranslatorX<WarMistModule, void (WarMistModule::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<WarMistModule,void(WarMistModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<WarMistModule,void(WarMistModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemEgg, void
   (GridItemEgg::*)()>(Sexy::CBMemberTranslatorX<GridItemEgg, void (GridItemEgg::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemEgg,void(GridItemEgg::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemEgg,void(GridItemEgg::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MagnifyingGrassTutorialIntro, void
   (MagnifyingGrassTutorialIntro::*)()>(Sexy::CBMemberTranslatorX<MagnifyingGrassTutorialIntro, void
   (MagnifyingGrassTutorialIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MagnifyingGrassTutorialIntro,void(MagnifyingGrassTutorialIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MagnifyingGrassTutorialIntro,void(MagnifyingGrassTutorialIntro::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<IntroModule, void
   (IntroModule::*)()>(Sexy::CBMemberTranslatorX<IntroModule, void (IntroModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<IntroModule,void(IntroModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<IntroModule,void(IntroModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<IntroCinema, void
   (IntroCinema::*)()>(Sexy::CBMemberTranslatorX<IntroCinema, void (IntroCinema::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<IntroCinema,void(IntroCinema::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<IntroCinema,void(IntroCinema::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<IntroSingleHanded, void
   (IntroSingleHanded::*)()>(Sexy::CBMemberTranslatorX<IntroSingleHanded, void
   (IntroSingleHanded::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<IntroSingleHanded,void(IntroSingleHanded::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<IntroSingleHanded,void(IntroSingleHanded::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<IntroEvilDave, void
   (IntroEvilDave::*)()>(Sexy::CBMemberTranslatorX<IntroEvilDave, void (IntroEvilDave::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<IntroEvilDave,void(IntroEvilDave::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<IntroEvilDave,void(IntroEvilDave::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<OakTrainIntro, void
   (OakTrainIntro::*)()>(Sexy::CBMemberTranslatorX<OakTrainIntro, void (OakTrainIntro::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<OakTrainIntro,void(OakTrainIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TowerDefendIntro, void
   (TowerDefendIntro::*)()>(Sexy::CBMemberTranslatorX<TowerDefendIntro, void
   (TowerDefendIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TowerDefendIntro,void(TowerDefendIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TowerDefendIntro,void(TowerDefendIntro::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<SnakeIntro, void
   (SnakeIntro::*)()>(Sexy::CBMemberTranslatorX<SnakeIntro, void (SnakeIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SnakeIntro,void(SnakeIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SnakeIntro,void(SnakeIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SeedRainIntro, void
   (SeedRainIntro::*)()>(Sexy::CBMemberTranslatorX<SeedRainIntro, void (SeedRainIntro::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<SeedRainIntro,void(SeedRainIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SeedRainIntro,void(SeedRainIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<EliminateIntro, void
   (EliminateIntro::*)()>(Sexy::CBMemberTranslatorX<EliminateIntro, void (EliminateIntro::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<EliminateIntro,void(EliminateIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<EliminateIntro,void(EliminateIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SkyCityIntro, void
   (SkyCityIntro::*)()>(Sexy::CBMemberTranslatorX<SkyCityIntro, void (SkyCityIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SkyCityIntro,void(SkyCityIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ChristmasProtectIntro, void
   (ChristmasProtectIntro::*)()>(Sexy::CBMemberTranslatorX<ChristmasProtectIntro, void
   (ChristmasProtectIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ChristmasProtectIntro,void(ChristmasProtectIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ChristmasProtectIntro,void(ChristmasProtectIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ThunderIntro, void
   (ThunderIntro::*)()>(Sexy::CBMemberTranslatorX<ThunderIntro, void (ThunderIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ThunderIntro,void(ThunderIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LastStandMinigameModule, void
   (LastStandMinigameModule::*)()>(Sexy::CBMemberTranslatorX<LastStandMinigameModule, void
   (LastStandMinigameModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LastStandMinigameModule,void(LastStandMinigameModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LawnMowerModule, void
   (LawnMowerModule::*)()>(Sexy::CBMemberTranslatorX<LawnMowerModule, void (LawnMowerModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LawnMowerModule,void(LawnMowerModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<LawnMowerModule,void(LawnMowerModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LawnBrainModule, void
   (LawnBrainModule::*)()>(Sexy::CBMemberTranslatorX<LawnBrainModule, void (LawnBrainModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LawnBrainModule,void(LawnBrainModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<LawnBrainModule,void(LawnBrainModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<EditProfileWidget, void
   (EditProfileWidget::*)()>(Sexy::CBMemberTranslatorX<EditProfileWidget, void
   (EditProfileWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<EditProfileWidget,void(EditProfileWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<EditProfileWidget,void(EditProfileWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MechanismPlankModule, void
   (MechanismPlankModule::*)()>(Sexy::CBMemberTranslatorX<MechanismPlankModule, void
   (MechanismPlankModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MechanismPlankModule,void(MechanismPlankModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MechanismPlankModule,void(MechanismPlankModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MetricsCollector, void
   (MetricsCollector::*)()>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MetricsCollector,void(MetricsCollector::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<MetricsCollector,void(MetricsCollector::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<MinecartTutorialIntro, void
   (MinecartTutorialIntro::*)()>(Sexy::CBMemberTranslatorX<MinecartTutorialIntro, void
   (MinecartTutorialIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MinecartTutorialIntro,void(MinecartTutorialIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MinecartTutorialIntro,void(MinecartTutorialIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewOptionsDialog, void
   (NewOptionsDialog::*)()>(Sexy::CBMemberTranslatorX<NewOptionsDialog, void
   (NewOptionsDialog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewOptionsDialog,void(NewOptionsDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewOptionsDialog,void(NewOptionsDialog::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<PaddedRoomModule, void
   (PaddedRoomModule::*)()>(Sexy::CBMemberTranslatorX<PaddedRoomModule, void
   (PaddedRoomModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PaddedRoomModule,void(PaddedRoomModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PaddedRoomModule,void(PaddedRoomModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<PauseButton, void
   (PauseButton::*)()>(Sexy::CBMemberTranslatorX<PauseButton, void (PauseButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PauseButton,void(PauseButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PauseButton,void(PauseButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CustomLevelAppraiseUI, void
   (CustomLevelAppraiseUI::*)()>(Sexy::CBMemberTranslatorX<CustomLevelAppraiseUI, void
   (CustomLevelAppraiseUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CustomLevelAppraiseUI,void(CustomLevelAppraiseUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CustomLevelAppraiseUI,void(CustomLevelAppraiseUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PickupCollectableTutorialModule, void
   (PickupCollectableTutorialModule::*)()>(Sexy::CBMemberTranslatorX<PickupCollectableTutorialModule,
   void (PickupCollectableTutorialModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<PickupCollectableTutorialModule,void(PickupCollectableTutorialModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PickupCollectableTutorialModule,void(PickupCollectableTutorialModule::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PirateCannonTutorialIntro, void
   (PirateCannonTutorialIntro::*)()>(Sexy::CBMemberTranslatorX<PirateCannonTutorialIntro, void
   (PirateCannonTutorialIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PirateCannonTutorialIntro,void(PirateCannonTutorialIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PirateCannonTutorialIntro,void(PirateCannonTutorialIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PiratePlankModule, void
   (PiratePlankModule::*)()>(Sexy::CBMemberTranslatorX<PiratePlankModule, void
   (PiratePlankModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PiratePlankModule,void(PiratePlankModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PiratePlankModule,void(PiratePlankModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PirateStage, void
   (PirateStage::*)()>(Sexy::CBMemberTranslatorX<PirateStage, void (PirateStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PirateStage,void(PirateStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PirateStage,void(PirateStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PoolDaylightStage, void
   (PoolDaylightStage::*)()>(Sexy::CBMemberTranslatorX<PoolDaylightStage, void
   (PoolDaylightStage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PoolDaylightStage,void(PoolDaylightStage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PoolDaylightStage,void(PoolDaylightStage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Plant, void (Plant::*)()>(Sexy::CBMemberTranslatorX<Plant, void
   (Plant::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Plant,void(Plant::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Plant,void(Plant::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantGroupSubsystem, void
   (PlantGroupSubsystem::*)()>(Sexy::CBMemberTranslatorX<PlantGroupSubsystem, void
   (PlantGroupSubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantGroupSubsystem,void(PlantGroupSubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantGroupSubsystem,void(PlantGroupSubsystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantfoodPurchaseTutorialIntro, void
   (PlantfoodPurchaseTutorialIntro::*)()>(Sexy::CBMemberTranslatorX<PlantfoodPurchaseTutorialIntro,
   void (PlantfoodPurchaseTutorialIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantfoodPurchaseTutorialIntro,void(PlantfoodPurchaseTutorialIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantfoodPurchaseTutorialIntro,void(PlantfoodPurchaseTutorialIntro::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro, void
   (PlantfoodTutorialIntro::*)()>(Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro, void
   (PlantfoodTutorialIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantfoodUI, void
   (PlantfoodUI::*)()>(Sexy::CBMemberTranslatorX<PlantfoodUI, void (PlantfoodUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantfoodUI,void(PlantfoodUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantfoodUI,void(PlantfoodUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantShineVine, void
   (PlantShineVine::*)()>(Sexy::CBMemberTranslatorX<PlantShineVine, void (PlantShineVine::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantShineVine,void(PlantShineVine::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantShineVine,void(PlantShineVine::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantHeavenDatura, void
   (PlantHeavenDatura::*)()>(Sexy::CBMemberTranslatorX<PlantHeavenDatura, void
   (PlantHeavenDatura::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantHeavenDatura,void(PlantHeavenDatura::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantHeavenDatura,void(PlantHeavenDatura::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieCatapult, void
   (ZombieCatapult::*)()>(Sexy::CBMemberTranslatorX<ZombieCatapult, void (ZombieCatapult::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieCatapult,void(ZombieCatapult::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieCatapult,void(ZombieCatapult::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ1WhackZombieModule, void
   (PVZ1WhackZombieModule::*)()>(Sexy::CBMemberTranslatorX<PVZ1WhackZombieModule, void
   (PVZ1WhackZombieModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ1WhackZombieModule,void(PVZ1WhackZombieModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ1WhackZombieModule,void(PVZ1WhackZombieModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ1KlotskiModule, void
   (PVZ1KlotskiModule::*)()>(Sexy::CBMemberTranslatorX<PVZ1KlotskiModule, void
   (PVZ1KlotskiModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ1KlotskiModule,void(PVZ1KlotskiModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ1KlotskiModule,void(PVZ1KlotskiModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CarGridItem, void
   (CarGridItem::*)()>(Sexy::CBMemberTranslatorX<CarGridItem, void (CarGridItem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CarGridItem,void(CarGridItem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CarGridItem,void(CarGridItem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SpringprincessProjectile, void
   (SpringprincessProjectile::*)()>(Sexy::CBMemberTranslatorX<SpringprincessProjectile, void
   (SpringprincessProjectile::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SpringprincessProjectile,void(SpringprincessProjectile::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SpringprincessProjectile,void(SpringprincessProjectile::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantCoconutCannon, void
   (PlantCoconutCannon::*)()>(Sexy::CBMemberTranslatorX<PlantCoconutCannon, void
   (PlantCoconutCannon::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantCoconutCannon,void(PlantCoconutCannon::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantCoconutCannon,void(PlantCoconutCannon::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantIceburg, void
   (PlantIceburg::*)()>(Sexy::CBMemberTranslatorX<PlantIceburg, void (PlantIceburg::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantIceburg,void(PlantIceburg::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantIceburg,void(PlantIceburg::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantMagnifyingGrass, void
   (PlantMagnifyingGrass::*)()>(Sexy::CBMemberTranslatorX<PlantMagnifyingGrass, void
   (PlantMagnifyingGrass::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantMagnifyingGrass,void(PlantMagnifyingGrass::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantMagnifyingGrass,void(PlantMagnifyingGrass::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantSunflower, void
   (PlantSunflower::*)()>(Sexy::CBMemberTranslatorX<PlantSunflower, void (PlantSunflower::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantSunflower,void(PlantSunflower::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantSunflower,void(PlantSunflower::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantFireGourd, void
   (PlantFireGourd::*)()>(Sexy::CBMemberTranslatorX<PlantFireGourd, void (PlantFireGourd::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantFireGourd,void(PlantFireGourd::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantFireGourd,void(PlantFireGourd::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MagicCard, void (MagicCard::*)()>(Sexy::CBMemberTranslatorX<MagicCard,
   void (MagicCard::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MagicCard,void(MagicCard::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<MagicCard,void(MagicCard::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantMagicShroom, void
   (PlantMagicShroom::*)()>(Sexy::CBMemberTranslatorX<PlantMagicShroom, void
   (PlantMagicShroom::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantMagicShroom,void(PlantMagicShroom::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantMagicShroom,void(PlantMagicShroom::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantBirthSunflower, void
   (PlantBirthSunflower::*)()>(Sexy::CBMemberTranslatorX<PlantBirthSunflower, void
   (PlantBirthSunflower::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantBirthSunflower,void(PlantBirthSunflower::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantBirthSunflower,void(PlantBirthSunflower::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DropingImpEffectAnim, void
   (DropingImpEffectAnim::*)()>(Sexy::CBMemberTranslatorX<DropingImpEffectAnim, void
   (DropingImpEffectAnim::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DropingImpEffectAnim,void(DropingImpEffectAnim::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DropingImpEffectAnim,void(DropingImpEffectAnim::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DropShipModule, void
   (DropShipModule::*)()>(Sexy::CBMemberTranslatorX<DropShipModule, void (DropShipModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DropShipModule,void(DropShipModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<DropShipModule,void(DropShipModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AkeeProjectile, void
   (AkeeProjectile::*)()>(Sexy::CBMemberTranslatorX<AkeeProjectile, void (AkeeProjectile::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AkeeProjectile,void(AkeeProjectile::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<AkeeProjectile,void(AkeeProjectile::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantBoomFlower, void
   (PlantBoomFlower::*)()>(Sexy::CBMemberTranslatorX<PlantBoomFlower, void (PlantBoomFlower::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantBoomFlower,void(PlantBoomFlower::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantBoomFlower,void(PlantBoomFlower::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantBoomFlower, bool
   (PlantBoomFlower::*)()>(Sexy::CBMemberTranslatorX<PlantBoomFlower, bool (PlantBoomFlower::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantBoomFlower,bool(PlantBoomFlower::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantBoomFlower,bool(PlantBoomFlower::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAnimRig_BoomFlower, bool
   (PlantAnimRig::*)()>(Sexy::CBMemberTranslatorX<PlantAnimRig_BoomFlower, bool (PlantAnimRig::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAnimRig_BoomFlower,bool(PlantAnimRig::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAnimRig_BoomFlower,bool(PlantAnimRig::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAnimRig_Cactus, void
   (PlantAnimRig_Cactus::*)()>(Sexy::CBMemberTranslatorX<PlantAnimRig_Cactus, void
   (PlantAnimRig_Cactus::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAnimRig_Cactus,void(PlantAnimRig_Cactus::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAnimRig_Cactus,void(PlantAnimRig_Cactus::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ElectricCurrantFenceSystem, void
   (ElectricCurrantFenceSystem::*)()>(Sexy::CBMemberTranslatorX<ElectricCurrantFenceSystem, void
   (ElectricCurrantFenceSystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ElectricCurrantFenceSystem,void(ElectricCurrantFenceSystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ElectricCurrantFenceSystem,void(ElectricCurrantFenceSystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LanternRiddlesUI, void
   (LanternRiddlesUI::*)()>(Sexy::CBMemberTranslatorX<LanternRiddlesUI, void
   (LanternRiddlesUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LanternRiddlesUI,void(LanternRiddlesUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<LanternRiddlesUI,void(LanternRiddlesUI::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<RedPackUI, void (RedPackUI::*)()>(Sexy::CBMemberTranslatorX<RedPackUI,
   void (RedPackUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RedPackUI,void(RedPackUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RedPackUI,void(RedPackUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ConsumptionRewardDialog, void
   (ConsumptionRewardDialog::*)()>(Sexy::CBMemberTranslatorX<ConsumptionRewardDialog, void
   (ConsumptionRewardDialog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ConsumptionRewardDialog,void(ConsumptionRewardDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ConsumptionRewardDialog,void(ConsumptionRewardDialog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_DailyAchievementButton, void
   (WorldMap_DailyAchievementButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_DailyAchievementButton,
   void (WorldMap_DailyAchievementButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<WorldMap_DailyAchievementButton,void(WorldMap_DailyAchievementButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_DailyAchievementButton,void(WorldMap_DailyAchievementButton::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BananaTutorialModule, void
   (BananaTutorialModule::*)()>(Sexy::CBMemberTranslatorX<BananaTutorialModule, void
   (BananaTutorialModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BananaTutorialModule,void(BananaTutorialModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<BananaTutorialModule,void(BananaTutorialModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BowlingBulbSuperProjectile, void
   (BowlingBulbSuperProjectile::*)()>(Sexy::CBMemberTranslatorX<BowlingBulbSuperProjectile, void
   (BowlingBulbSuperProjectile::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BowlingBulbSuperProjectile,void(BowlingBulbSuperProjectile::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<BowlingBulbSuperProjectile,void(BowlingBulbSuperProjectile::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantPuffshroom, void
   (PlantPuffshroom::*)()>(Sexy::CBMemberTranslatorX<PlantPuffshroom, void (PlantPuffshroom::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantPuffshroom,void(PlantPuffshroom::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantPuffshroom,void(PlantPuffshroom::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantSunshroom, void
   (PlantSunshroom::*)()>(Sexy::CBMemberTranslatorX<PlantSunshroom, void (PlantSunshroom::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantSunshroom,void(PlantSunshroom::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantSunshroom,void(PlantSunshroom::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantIceShroom, void
   (PlantIceShroom::*)()>(Sexy::CBMemberTranslatorX<PlantIceShroom, void (PlantIceShroom::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantIceShroom,void(PlantIceShroom::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantIceShroom,void(PlantIceShroom::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantHorsebean, void
   (PlantHorsebean::*)()>(Sexy::CBMemberTranslatorX<PlantHorsebean, void (PlantHorsebean::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantHorsebean,void(PlantHorsebean::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantHorsebean,void(PlantHorsebean::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<HorsebeanPlane, void
   (HorsebeanPlane::*)()>(Sexy::CBMemberTranslatorX<HorsebeanPlane, void (HorsebeanPlane::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<HorsebeanPlane,void(HorsebeanPlane::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<HorsebeanPlane,void(HorsebeanPlane::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantTulipTrumpeter, void
   (PlantTulipTrumpeter::*)()>(Sexy::CBMemberTranslatorX<PlantTulipTrumpeter, void
   (PlantTulipTrumpeter::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantStrawBurst, void
   (PlantStrawBurst::*)()>(Sexy::CBMemberTranslatorX<PlantStrawBurst, void (PlantStrawBurst::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantStrawBurst,void(PlantStrawBurst::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantStrawBurst,void(PlantStrawBurst::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieGum, void (ZombieGum::*)()>(Sexy::CBMemberTranslatorX<ZombieGum,
   void (ZombieGum::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieGum,void(ZombieGum::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieGum,void(ZombieGum::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantHollyKnight, void
   (PlantHollyKnight::*)()>(Sexy::CBMemberTranslatorX<PlantHollyKnight, void
   (PlantHollyKnight::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantHollyKnight,void(PlantHollyKnight::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantHollyKnight,void(PlantHollyKnight::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantSnapPea, void
   (PlantSnapPea::*)()>(Sexy::CBMemberTranslatorX<PlantSnapPea, void (PlantSnapPea::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantSnapPea,void(PlantSnapPea::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantSnapPea,void(PlantSnapPea::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<HeroPlantFramework, void
   (HeroPlantFramework::*)()>(Sexy::CBMemberTranslatorX<HeroPlantFramework, void
   (HeroPlantFramework::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<HeroPlantFramework,void(HeroPlantFramework::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<HeroPlantFramework,void(HeroPlantFramework::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<HeroPlantTalentSubsystem, void
   (HeroPlantTalentSubsystem::*)()>(Sexy::CBMemberTranslatorX<HeroPlantTalentSubsystem, void
   (HeroPlantTalentSubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<HeroPlantTalentSubsystem,void(HeroPlantTalentSubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<HeroPlantTalentSubsystem,void(HeroPlantTalentSubsystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<HeroPlantModule, void
   (HeroPlantModule::*)()>(Sexy::CBMemberTranslatorX<HeroPlantModule, void (HeroPlantModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<HeroPlantModule,void(HeroPlantModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<HeroPlantModule,void(HeroPlantModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<HeroPlantIntroModule, void
   (HeroPlantIntroModule::*)()>(Sexy::CBMemberTranslatorX<HeroPlantIntroModule, void
   (HeroPlantIntroModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<HeroPlantIntroModule,void(HeroPlantIntroModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<HeroPlantIntroModule,void(HeroPlantIntroModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdventureTeamEditorUI, void
   (AdventureTeamEditorUI::*)()>(Sexy::CBMemberTranslatorX<AdventureTeamEditorUI, void
   (AdventureTeamEditorUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdventureTeamEditorUI,void(AdventureTeamEditorUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdventureTeamEditorUI,void(AdventureTeamEditorUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DungeonWidget, void
   (DungeonWidget::*)()>(Sexy::CBMemberTranslatorX<DungeonWidget, void (DungeonWidget::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<DungeonWidget,void(DungeonWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<DungeonWidget,void(DungeonWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAdventureUI, void
   (PlantAdventureUI::*)()>(Sexy::CBMemberTranslatorX<PlantAdventureUI, void
   (PlantAdventureUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAdventureUI,void(PlantAdventureUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantAdventureUI,void(PlantAdventureUI::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<AdventureOpenedUI, void
   (AdventureOpenedUI::*)()>(Sexy::CBMemberTranslatorX<AdventureOpenedUI, void
   (AdventureOpenedUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdventureOpenedUI,void(AdventureOpenedUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdventureOpenedUI,void(AdventureOpenedUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AdventureSurpriseUI, void
   (AdventureSurpriseUI::*)()>(Sexy::CBMemberTranslatorX<AdventureSurpriseUI, void
   (AdventureSurpriseUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AdventureSurpriseUI,void(AdventureSurpriseUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AdventureSurpriseUI,void(AdventureSurpriseUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_PlantAdventureButton, void
   (WorldMap_PlantAdventureButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_PlantAdventureButton,
   void (WorldMap_PlantAdventureButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_PlantAdventureButton,void(WorldMap_PlantAdventureButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_PlantAdventureButton,void(WorldMap_PlantAdventureButton::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_RechargeReward, void
   (WorldMap_RechargeReward::*)()>(Sexy::CBMemberTranslatorX<WorldMap_RechargeReward, void
   (WorldMap_RechargeReward::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_RechargeReward,void(WorldMap_RechargeReward::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_RechargeReward,void(WorldMap_RechargeReward::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PneumaticSeedBank, void
   (PneumaticSeedBank::*)()>(Sexy::CBMemberTranslatorX<PneumaticSeedBank, void
   (PneumaticSeedBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PneumaticSeedBank,void(PneumaticSeedBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PneumaticSeedBank,void(PneumaticSeedBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerTileIntro, void
   (PowerTileIntro::*)()>(Sexy::CBMemberTranslatorX<PowerTileIntro, void (PowerTileIntro::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PowerTileIntro,void(PowerTileIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PowerTileIntro,void(PowerTileIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerupFlickZombie, void
   (PowerupFlickZombie::*)()>(Sexy::CBMemberTranslatorX<PowerupFlickZombie, void
   (PowerupFlickZombie::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PowerupFlickZombie,void(PowerupFlickZombie::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PowerupFlickZombie,void(PowerupFlickZombie::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerupManager, void
   (PowerupManager::*)()>(Sexy::CBMemberTranslatorX<PowerupManager, void (PowerupManager::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PowerupManager,void(PowerupManager::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PowerupManager,void(PowerupManager::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerupPurchaseIntro, void
   (PowerupPurchaseIntro::*)()>(Sexy::CBMemberTranslatorX<PowerupPurchaseIntro, void
   (PowerupPurchaseIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PowerupPurchaseIntro,void(PowerupPurchaseIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PowerupPurchaseIntro,void(PowerupPurchaseIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerupTimeUI, void
   (PowerupTimeUI::*)()>(Sexy::CBMemberTranslatorX<PowerupTimeUI, void (PowerupTimeUI::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<PowerupTimeUI,void(PowerupTimeUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PowerupTimeUI,void(PowerupTimeUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<OakArrowAddUI, void
   (OakArrowAddUI::*)()>(Sexy::CBMemberTranslatorX<OakArrowAddUI, void (OakArrowAddUI::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<OakArrowAddUI,void(OakArrowAddUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<OakArrowAddUI,void(OakArrowAddUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SkyCannonUI, void
   (SkyCannonUI::*)()>(Sexy::CBMemberTranslatorX<SkyCannonUI, void (SkyCannonUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SkyCannonUI,void(SkyCannonUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SkyCannonUI,void(SkyCannonUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro, void
   (PowerupCukeTutorialIntro::*)()>(Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro, void
   (PowerupCukeTutorialIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerupUI, void (PowerupUI::*)()>(Sexy::CBMemberTranslatorX<PowerupUI,
   void (PowerupUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PowerupUI,void(PowerupUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PowerupUI,void(PowerupUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PowerupWizardFinger, void
   (PowerupWizardFinger::*)()>(Sexy::CBMemberTranslatorX<PowerupWizardFinger, void
   (PowerupWizardFinger::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PowerupWizardFinger,void(PowerupWizardFinger::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PowerupWizardFinger,void(PowerupWizardFinger::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ProfileMgr, void
   (ProfileMgr::*)()>(Sexy::CBMemberTranslatorX<ProfileMgr, void (ProfileMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ProfileMgr,void(ProfileMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ProfileMgr,void(ProfileMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PurchaseMgr, void
   (PurchaseMgr::*)()>(Sexy::CBMemberTranslatorX<PurchaseMgr, void (PurchaseMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PurchaseMgr,void(PurchaseMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PurchaseMgr,void(PurchaseMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ProtectThePlantChallengeModule, void
   (ProtectThePlantChallengeModule::*)()>(Sexy::CBMemberTranslatorX<ProtectThePlantChallengeModule,
   void (ProtectThePlantChallengeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<InitialPlantModule, void
   (InitialPlantModule::*)()>(Sexy::CBMemberTranslatorX<InitialPlantModule, void
   (InitialPlantModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<InitialPlantModule,void(InitialPlantModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<InitialPlantModule,void(InitialPlantModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<InitialPlantPlacer, void
   (InitialPlantPlacer::*)()>(Sexy::CBMemberTranslatorX<InitialPlantPlacer, void
   (InitialPlantPlacer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<InitialPlantPlacer,void(InitialPlantPlacer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<InitialPlantPlacer,void(InitialPlantPlacer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<InitialGridItemPlacer, void
   (InitialGridItemPlacer::*)()>(Sexy::CBMemberTranslatorX<InitialGridItemPlacer, void
   (InitialGridItemPlacer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<InitialGridItemPlacer,void(InitialGridItemPlacer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<InitialGridItemPlacer,void(InitialGridItemPlacer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<InitialZombiePlacer, void
   (InitialZombiePlacer::*)()>(Sexy::CBMemberTranslatorX<InitialZombiePlacer, void
   (InitialZombiePlacer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<InitialZombiePlacer,void(InitialZombiePlacer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<InitialZombiePlacer,void(InitialZombiePlacer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TideModule, void
   (TideModule::*)()>(Sexy::CBMemberTranslatorX<TideModule, void (TideModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TideModule,void(TideModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TideModule,void(TideModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SingleHandedModule, void
   (SingleHandedModule::*)()>(Sexy::CBMemberTranslatorX<SingleHandedModule, void
   (SingleHandedModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SingleHandedModule,void(SingleHandedModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SingleHandedModule,void(SingleHandedModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ2UIAwardScreen, void
   (PVZ2UIAwardScreen::*)()>(Sexy::CBMemberTranslatorX<PVZ2UIAwardScreen, void
   (PVZ2UIAwardScreen::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ2UIAwardScreen,void(PVZ2UIAwardScreen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ2UIAwardScreen,void(PVZ2UIAwardScreen::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ2WaitingDialog, void
   (PVZ2WaitingDialog::*)()>(Sexy::CBMemberTranslatorX<PVZ2WaitingDialog, void
   (PVZ2WaitingDialog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ2WaitingDialog,void(PVZ2WaitingDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ2WaitingDialog,void(PVZ2WaitingDialog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ2UIGameObjectCard, void
   (PVZ2UIGameObjectCard::*)()>(Sexy::CBMemberTranslatorX<PVZ2UIGameObjectCard, void
   (PVZ2UIGameObjectCard::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ2UIGameObjectCard,void(PVZ2UIGameObjectCard::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ2UIGameObjectCard,void(PVZ2UIGameObjectCard::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ2UISeedChooserPreviewDisplay, void
   (PVZ2UISeedChooserPreviewDisplay::*)()>(Sexy::CBMemberTranslatorX<PVZ2UISeedChooserPreviewDisplay,
   void (PVZ2UISeedChooserPreviewDisplay::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<PVZ2UISeedChooserPreviewDisplay,void(PVZ2UISeedChooserPreviewDisplay::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ2UISeedChooserPreviewDisplay,void(PVZ2UISeedChooserPreviewDisplay::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ2UIStoreItemDisplayer, void
   (PVZ2UIStoreItemDisplayer::*)()>(Sexy::CBMemberTranslatorX<PVZ2UIStoreItemDisplayer, void
   (PVZ2UIStoreItemDisplayer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ2UIStoreItemDisplayer,void(PVZ2UIStoreItemDisplayer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ2UIStoreItemDisplayer,void(PVZ2UIStoreItemDisplayer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ2UIBuyGiftDialog, void
   (PVZ2UIBuyGiftDialog::*)()>(Sexy::CBMemberTranslatorX<PVZ2UIBuyGiftDialog, void
   (PVZ2UIBuyGiftDialog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ2UIBuyGiftDialog,void(PVZ2UIBuyGiftDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ2UIBuyGiftDialog,void(PVZ2UIBuyGiftDialog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ2UILotteryResult, void
   (PVZ2UILotteryResult::*)()>(Sexy::CBMemberTranslatorX<PVZ2UILotteryResult, void
   (PVZ2UILotteryResult::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ2UILotteryResult,void(PVZ2UILotteryResult::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ2UILotteryResult,void(PVZ2UILotteryResult::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantContent, void
   (PlantContent::*)()>(Sexy::CBMemberTranslatorX<PlantContent, void (PlantContent::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantContent,void(PlantContent::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantContent,void(PlantContent::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantLevelUpListView, void
   (PlantLevelUpListView::*)()>(Sexy::CBMemberTranslatorX<PlantLevelUpListView, void
   (PlantLevelUpListView::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantLevelUpListView,void(PlantLevelUpListView::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantLevelUpListView,void(PlantLevelUpListView::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantLevelUpInfoDialog, void
   (PlantLevelUpInfoDialog::*)()>(Sexy::CBMemberTranslatorX<PlantLevelUpInfoDialog, void
   (PlantLevelUpInfoDialog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantLevelUpInfoDialog,void(PlantLevelUpInfoDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantLevelUpInfoDialog,void(PlantLevelUpInfoDialog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantLevelUpCheckDialog, void
   (PlantLevelUpCheckDialog::*)()>(Sexy::CBMemberTranslatorX<PlantLevelUpCheckDialog, void
   (PlantLevelUpCheckDialog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantLevelUpCheckDialog,void(PlantLevelUpCheckDialog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAvatarContent, void
   (PlantAvatarContent::*)()>(Sexy::CBMemberTranslatorX<PlantAvatarContent, void
   (PlantAvatarContent::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAvatarContent,void(PlantAvatarContent::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAvatarContent,void(PlantAvatarContent::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAvatarSwitchButton, void
   (PlantAvatarSwitchButton::*)()>(Sexy::CBMemberTranslatorX<PlantAvatarSwitchButton, void
   (PlantAvatarSwitchButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAvatarSwitchButton,void(PlantAvatarSwitchButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAvatarSwitchButton,void(PlantAvatarSwitchButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAvatarSwitchButtonScrollWidget, void
   (PlantAvatarSwitchButtonScrollWidget::*)()>(Sexy::CBMemberTranslatorX<PlantAvatarSwitchButtonScrollWidget,
   void (PlantAvatarSwitchButtonScrollWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<PlantAvatarSwitchButtonScrollWidget,void(PlantAvatarSwitchButtonScrollWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAvatarSwitchButtonScrollWidget,void(PlantAvatarSwitchButtonScrollWidget::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAvatarListView, void
   (PlantAvatarListView::*)()>(Sexy::CBMemberTranslatorX<PlantAvatarListView, void
   (PlantAvatarListView::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAvatarListView,void(PlantAvatarListView::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAvatarListView,void(PlantAvatarListView::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAvatarInfoDialog, void
   (PlantAvatarInfoDialog::*)()>(Sexy::CBMemberTranslatorX<PlantAvatarInfoDialog, void
   (PlantAvatarInfoDialog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAvatarInfoDialog,void(PlantAvatarInfoDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAvatarInfoDialog,void(PlantAvatarInfoDialog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAvatarPackageItem, void
   (PlantAvatarPackageItem::*)()>(Sexy::CBMemberTranslatorX<PlantAvatarPackageItem, void
   (PlantAvatarPackageItem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAvatarPackageItem,void(PlantAvatarPackageItem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAvatarPackageItem,void(PlantAvatarPackageItem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAvatarPackageView, void
   (PlantAvatarPackageView::*)()>(Sexy::CBMemberTranslatorX<PlantAvatarPackageView, void
   (PlantAvatarPackageView::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAvatarPackageView,void(PlantAvatarPackageView::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAvatarPackageView,void(PlantAvatarPackageView::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GetPlantBagUI, void
   (GetPlantBagUI::*)()>(Sexy::CBMemberTranslatorX<GetPlantBagUI, void (GetPlantBagUI::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<GetPlantBagUI,void(GetPlantBagUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GetPlantBagUI,void(GetPlantBagUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewerPresentUI, void
   (NewerPresentUI::*)()>(Sexy::CBMemberTranslatorX<NewerPresentUI, void (NewerPresentUI::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewerPresentUI,void(NewerPresentUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NewerPresentUI,void(NewerPresentUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WishScrollPanel, void
   (WishScrollPanel::*)()>(Sexy::CBMemberTranslatorX<WishScrollPanel, void (WishScrollPanel::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WishScrollPanel,void(WishScrollPanel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<WishScrollPanel,void(WishScrollPanel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<FestivalEntranceUI, void
   (FestivalEntranceUI::*)()>(Sexy::CBMemberTranslatorX<FestivalEntranceUI, void
   (FestivalEntranceUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<FestivalEntranceUI,void(FestivalEntranceUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<FestivalEntranceUI,void(FestivalEntranceUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieModernSuperfanImp, void
   (ZombieModernSuperfanImp::*)()>(Sexy::CBMemberTranslatorX<ZombieModernSuperfanImp, void
   (ZombieModernSuperfanImp::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieModernSuperfanImp,void(ZombieModernSuperfanImp::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieModernSuperfanImp,void(ZombieModernSuperfanImp::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GetNewerBagUI, void
   (GetNewerBagUI::*)()>(Sexy::CBMemberTranslatorX<GetNewerBagUI, void (GetNewerBagUI::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<GetNewerBagUI,void(GetNewerBagUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GetNewerBagUI,void(GetNewerBagUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GetGemsRestoreUI, void
   (GetGemsRestoreUI::*)()>(Sexy::CBMemberTranslatorX<GetGemsRestoreUI, void
   (GetGemsRestoreUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GetGemsRestoreUI,void(GetGemsRestoreUI::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<TowerDefendUpgradeUI, void
   (TowerDefendUpgradeUI::*)()>(Sexy::CBMemberTranslatorX<TowerDefendUpgradeUI, void
   (TowerDefendUpgradeUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TowerDefendUpgradeUI,void(TowerDefendUpgradeUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<TowerDefendUpgradeUI,void(TowerDefendUpgradeUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AutoTestAllLevel, void
   (AutoTestAllLevel::*)()>(Sexy::CBMemberTranslatorX<AutoTestAllLevel, void
   (AutoTestAllLevel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<AutoTestPlantsVsZombies, void
   (AutoTestPlantsVsZombies::*)()>(Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies, void
   (AutoTestPlantsVsZombies::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock, void
   (AutoTestAllLevelUnlock::*)()>(Sexy::CBMemberTranslatorX<AutoTestAllLevelUnlock, void
   (AutoTestAllLevelUnlock::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AutoTestAllLevelUnlock,void(AutoTestAllLevelUnlock::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp, void
   (AutoTestPlantLevelUp::*)()>(Sexy::CBMemberTranslatorX<AutoTestPlantLevelUp, void
   (AutoTestPlantLevelUp::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GameObject, void
   (GameObject::*)()>(Sexy::CBMemberTranslatorX<GameObject, void (GameObject::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GameObject,void(GameObject::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GameObject,void(GameObject::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ConfigUpdateMgr, void
   (ConfigUpdateMgr::*)()>(Sexy::CBMemberTranslatorX<ConfigUpdateMgr, void (ConfigUpdateMgr::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ConfigUpdateMgr,void(ConfigUpdateMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ConfigUpdateMgr,void(ConfigUpdateMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LuaUpdateMgr, void
   (LuaUpdateMgr::*)()>(Sexy::CBMemberTranslatorX<LuaUpdateMgr, void (LuaUpdateMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LuaUpdateMgr,void(LuaUpdateMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<LuaUpdateMgr,void(LuaUpdateMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIUpdateMgr, void
   (UIUpdateMgr::*)()>(Sexy::CBMemberTranslatorX<UIUpdateMgr, void (UIUpdateMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIUpdateMgr,void(UIUpdateMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIUpdateMgr,void(UIUpdateMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZRemoteControl, void
   (PVZRemoteControl::*)()>(Sexy::CBMemberTranslatorX<PVZRemoteControl, void
   (PVZRemoteControl::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZRemoteControl,void(PVZRemoteControl::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PVZRemoteControl,void(PVZRemoteControl::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<RailcartModule, void
   (RailcartModule::*)()>(Sexy::CBMemberTranslatorX<RailcartModule, void (RailcartModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RailcartModule,void(RailcartModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RailcartModule,void(RailcartModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SeedBankModule, void
   (SeedBankModule::*)()>(Sexy::CBMemberTranslatorX<SeedBankModule, void (SeedBankModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SeedBankModule,void(SeedBankModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SeedBankModule,void(SeedBankModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SeedChooser, void
   (SeedChooser::*)()>(Sexy::CBMemberTranslatorX<SeedChooser, void (SeedChooser::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SeedChooser,void(SeedChooser::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SeedPacket, void
   (SeedPacket::*)()>(Sexy::CBMemberTranslatorX<SeedPacket, void (SeedPacket::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SeedPacket,void(SeedPacket::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SeedPacket,void(SeedPacket::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SeedPacket_ToolRift, void
   (SeedPacket_ToolRift::*)()>(Sexy::CBMemberTranslatorX<SeedPacket_ToolRift, void
   (SeedPacket_ToolRift::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SeedPacket_ToolRift,void(SeedPacket_ToolRift::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SeedPacket_ToolRift,void(SeedPacket_ToolRift::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ShovelUI, void (ShovelUI::*)()>(Sexy::CBMemberTranslatorX<ShovelUI,
   void (ShovelUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ShovelUI,void(ShovelUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ShovelUI,void(ShovelUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SimpleZombieSpawnerModule, void
   (SimpleZombieSpawnerModule::*)()>(Sexy::CBMemberTranslatorX<SimpleZombieSpawnerModule, void
   (SimpleZombieSpawnerModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SimpleZombieSpawnerModule,void(SimpleZombieSpawnerModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SimpleZombieSpawnerModule,void(SimpleZombieSpawnerModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SpeedChange, void
   (SpeedChange::*)()>(Sexy::CBMemberTranslatorX<SpeedChange, void (SpeedChange::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SpeedChange,void(SpeedChange::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SpeedChange,void(SpeedChange::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NextWaveButton, void
   (NextWaveButton::*)()>(Sexy::CBMemberTranslatorX<NextWaveButton, void (NextWaveButton::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NextWaveButton,void(NextWaveButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NextWaveButton,void(NextWaveButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StageModule, void
   (StageModule::*)()>(Sexy::CBMemberTranslatorX<StageModule, void (StageModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<StageModule,void(StageModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StandardLevelIntro, void
   (StandardLevelIntro::*)()>(Sexy::CBMemberTranslatorX<StandardLevelIntro, void
   (StandardLevelIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StandardLevelIntro,void(StandardLevelIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DefeatZombiesOfTypeChallenge, void
   (DefeatZombiesOfTypeChallenge::*)()>(Sexy::CBMemberTranslatorX<DefeatZombiesOfTypeChallenge, void
   (DefeatZombiesOfTypeChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DefeatZombiesOfTypeChallenge,void(DefeatZombiesOfTypeChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DefeatZombiesOfTypeChallenge,void(DefeatZombiesOfTypeChallenge::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeBeatTheLevel, void
   (StarChallengeBeatTheLevel::*)()>(Sexy::CBMemberTranslatorX<StarChallengeBeatTheLevel, void
   (StarChallengeBeatTheLevel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeBeatTheLevel,void(StarChallengeBeatTheLevel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeBeatTheLevel,void(StarChallengeBeatTheLevel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeKillZombiesInTime, void
   (StarChallengeKillZombiesInTime::*)()>(Sexy::CBMemberTranslatorX<StarChallengeKillZombiesInTime,
   void (StarChallengeKillZombiesInTime::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeKillZombiesInTime,void(StarChallengeKillZombiesInTime::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeKillZombiesInTime,void(StarChallengeKillZombiesInTime::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengePlantBeforeLine, void
   (StarChallengePlantBeforeLine::*)()>(Sexy::CBMemberTranslatorX<StarChallengePlantBeforeLine, void
   (StarChallengePlantBeforeLine::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengePlantsLost, void
   (StarChallengePlantsLost::*)()>(Sexy::CBMemberTranslatorX<StarChallengePlantsLost, void
   (StarChallengePlantsLost::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengePlantsLost,void(StarChallengePlantsLost::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengePlantsLost,void(StarChallengePlantsLost::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeSaveMowers, void
   (StarChallengeSaveMowers::*)()>(Sexy::CBMemberTranslatorX<StarChallengeSaveMowers, void
   (StarChallengeSaveMowers::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeSaveMowers,void(StarChallengeSaveMowers::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeSaveMowers,void(StarChallengeSaveMowers::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeSaveBombs, void
   (StarChallengeSaveBombs::*)()>(Sexy::CBMemberTranslatorX<StarChallengeSaveBombs, void
   (StarChallengeSaveBombs::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeSaveBombs,void(StarChallengeSaveBombs::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeSaveBombs,void(StarChallengeSaveBombs::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeSimultaneousPlants, void
   (StarChallengeSimultaneousPlants::*)()>(Sexy::CBMemberTranslatorX<StarChallengeSimultaneousPlants,
   void (StarChallengeSimultaneousPlants::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<StarChallengeSimultaneousPlants,void(StarChallengeSimultaneousPlants::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeSimultaneousPlants,void(StarChallengeSimultaneousPlants::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeSpendSunHoldout, void
   (StarChallengeSpendSunHoldout::*)()>(Sexy::CBMemberTranslatorX<StarChallengeSpendSunHoldout, void
   (StarChallengeSpendSunHoldout::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeSpendSunHoldout,void(StarChallengeSpendSunHoldout::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeSpendSunHoldout,void(StarChallengeSpendSunHoldout::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeSunProduced, void
   (StarChallengeSunProduced::*)()>(Sexy::CBMemberTranslatorX<StarChallengeSunProduced, void
   (StarChallengeSunProduced::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeSunProduced,void(StarChallengeSunProduced::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeSunProduced,void(StarChallengeSunProduced::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeSunUsed, void
   (StarChallengeSunUsed::*)()>(Sexy::CBMemberTranslatorX<StarChallengeSunUsed, void
   (StarChallengeSunUsed::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeSunUsed,void(StarChallengeSunUsed::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeSunUsed,void(StarChallengeSunUsed::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeZombieDistance, void
   (StarChallengeZombieDistance::*)()>(Sexy::CBMemberTranslatorX<StarChallengeZombieDistance, void
   (StarChallengeZombieDistance::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeZombieDistance,void(StarChallengeZombieDistance::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeZombieDistance,void(StarChallengeZombieDistance::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengePlantFreeze, void
   (StarChallengePlantFreeze::*)()>(Sexy::CBMemberTranslatorX<StarChallengePlantFreeze, void
   (StarChallengePlantFreeze::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengePlantFreeze,void(StarChallengePlantFreeze::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengePlantFreeze,void(StarChallengePlantFreeze::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengePlantsSurvive, void
   (StarChallengePlantsSurvive::*)()>(Sexy::CBMemberTranslatorX<StarChallengePlantsSurvive, void
   (StarChallengePlantsSurvive::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeBlowZombie, void
   (StarChallengeBlowZombie::*)()>(Sexy::CBMemberTranslatorX<StarChallengeBlowZombie, void
   (StarChallengeBlowZombie::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeBlowZombie,void(StarChallengeBlowZombie::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeBlowZombie,void(StarChallengeBlowZombie::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengePlantFoodNonuse, void
   (StarChallengePlantFoodNonuse::*)()>(Sexy::CBMemberTranslatorX<StarChallengePlantFoodNonuse, void
   (StarChallengePlantFoodNonuse::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengePlantFoodNonuse,void(StarChallengePlantFoodNonuse::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengePlantFoodNonuse,void(StarChallengePlantFoodNonuse::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeProtectPlant, void
   (StarChallengeProtectPlant::*)()>(Sexy::CBMemberTranslatorX<StarChallengeProtectPlant, void
   (StarChallengeProtectPlant::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeProtectPlant,void(StarChallengeProtectPlant::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeProtectPlant,void(StarChallengeProtectPlant::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeSandstormZombieKill, void
   (StarChallengeSandstormZombieKill::*)()>(Sexy::CBMemberTranslatorX<StarChallengeSandstormZombieKill,
   void (StarChallengeSandstormZombieKill::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<StarChallengeSandstormZombieKill,void(StarChallengeSandstormZombieKill::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeSandstormZombieKill,void(StarChallengeSandstormZombieKill::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeBufferTileZombieKill, void
   (StarChallengeBufferTileZombieKill::*)()>(Sexy::CBMemberTranslatorX<StarChallengeBufferTileZombieKill,
   void (StarChallengeBufferTileZombieKill::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<StarChallengeBufferTileZombieKill,void(StarChallengeBufferTileZombieKill::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeBufferTileZombieKill,void(StarChallengeBufferTileZombieKill::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengePotionZombieKill, void
   (StarChallengePotionZombieKill::*)()>(Sexy::CBMemberTranslatorX<StarChallengePotionZombieKill,
   void (StarChallengePotionZombieKill::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeTentZombieKill, void
   (StarChallengeTentZombieKill::*)()>(Sexy::CBMemberTranslatorX<StarChallengeTentZombieKill, void
   (StarChallengeTentZombieKill::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeTentZombieKill,void(StarChallengeTentZombieKill::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeTentZombieKill,void(StarChallengeTentZombieKill::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeUnfreezePlants, void
   (StarChallengeUnfreezePlants::*)()>(Sexy::CBMemberTranslatorX<StarChallengeUnfreezePlants, void
   (StarChallengeUnfreezePlants::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeUnfreezePlants,void(StarChallengeUnfreezePlants::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeUnfreezePlants,void(StarChallengeUnfreezePlants::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeFirecrackerZombieKill, void
   (StarChallengeFirecrackerZombieKill::*)()>(Sexy::CBMemberTranslatorX<StarChallengeFirecrackerZombieKill,
   void (StarChallengeFirecrackerZombieKill::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<StarChallengeFirecrackerZombieKill,void(StarChallengeFirecrackerZombieKill::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeFirecrackerZombieKill,void(StarChallengeFirecrackerZombieKill::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeFireworksZombieKill, void
   (StarChallengeFireworksZombieKill::*)()>(Sexy::CBMemberTranslatorX<StarChallengeFireworksZombieKill,
   void (StarChallengeFireworksZombieKill::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<StarChallengeFireworksZombieKill,void(StarChallengeFireworksZombieKill::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeFireworksZombieKill,void(StarChallengeFireworksZombieKill::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeProtectPlantByProtectorShield, void
   (StarChallengeProtectPlantByProtectorShield::*)()>(Sexy::CBMemberTranslatorX<StarChallengeProtectPlantByProtectorShield,
   void (StarChallengeProtectPlantByProtectorShield::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<StarChallengeProtectPlantByProtectorShield,void(StarChallengeProtectPlantByProtectorShield::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeProtectPlantByProtectorShield,void(StarChallengeProtectPlantByProtectorShield::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeBlowBarrelZombie, void
   (StarChallengeBlowBarrelZombie::*)()>(Sexy::CBMemberTranslatorX<StarChallengeBlowBarrelZombie,
   void (StarChallengeBlowBarrelZombie::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarChallengeBlowBarrelZombie,void(StarChallengeBlowBarrelZombie::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeBlowBarrelZombie,void(StarChallengeBlowBarrelZombie::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarChallengeBarrelPowderZombieKill, void
   (StarChallengeBarrelPowderZombieKill::*)()>(Sexy::CBMemberTranslatorX<StarChallengeBarrelPowderZombieKill,
   void (StarChallengeBarrelPowderZombieKill::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<StarChallengeBarrelPowderZombieKill,void(StarChallengeBarrelPowderZombieKill::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<StarChallengeBarrelPowderZombieKill,void(StarChallengeBarrelPowderZombieKill::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MoldColonyChallenge, void
   (MoldColonyChallenge::*)()>(Sexy::CBMemberTranslatorX<MoldColonyChallenge, void
   (MoldColonyChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MoldColonyChallenge,void(MoldColonyChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MoldColonyChallenge,void(MoldColonyChallenge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StartGameButton, void
   (StartGameButton::*)()>(Sexy::CBMemberTranslatorX<StartGameButton, void (StartGameButton::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StartGameButton,void(StartGameButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<StartGameButton,void(StartGameButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SunBank, void (SunBank::*)()>(Sexy::CBMemberTranslatorX<SunBank, void
   (SunBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SunBank,void(SunBank::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SunBank,void(SunBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SunbankTutorialIntro, void
   (SunbankTutorialIntro::*)()>(Sexy::CBMemberTranslatorX<SunbankTutorialIntro, void
   (SunbankTutorialIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SunbankTutorialIntro,void(SunbankTutorialIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SunbankTutorialIntro,void(SunbankTutorialIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SunBombChallengeModule, void
   (SunBombChallengeModule::*)()>(Sexy::CBMemberTranslatorX<SunBombChallengeModule, void
   (SunBombChallengeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SunBombChallengeModule,void(SunBombChallengeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<SunBombChallengeModule,void(SunBombChallengeModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePotionModule, void
   (ZombiePotionModule::*)()>(Sexy::CBMemberTranslatorX<ZombiePotionModule, void
   (ZombiePotionModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePotionModule,void(ZombiePotionModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePotionModule,void(ZombiePotionModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<OakTrainModule, void
   (OakTrainModule::*)()>(Sexy::CBMemberTranslatorX<OakTrainModule, void (OakTrainModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<OakTrainModule,void(OakTrainModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<OakTrainModule,void(OakTrainModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SunDropperModule, void
   (SunDropperModule::*)()>(Sexy::CBMemberTranslatorX<SunDropperModule, void
   (SunDropperModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SunDropperModule,void(SunDropperModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SunDropperModule,void(SunDropperModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<RainDarkModule, void
   (RainDarkModule::*)()>(Sexy::CBMemberTranslatorX<RainDarkModule, void (RainDarkModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RainDarkModule,void(RainDarkModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RainDarkModule,void(RainDarkModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GoldRoadModule, void
   (GoldRoadModule::*)()>(Sexy::CBMemberTranslatorX<GoldRoadModule, void (GoldRoadModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GoldRoadModule,void(GoldRoadModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GoldRoadModule,void(GoldRoadModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ProtectChristmasModule, void
   (ProtectChristmasModule::*)()>(Sexy::CBMemberTranslatorX<ProtectChristmasModule, void
   (ProtectChristmasModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ProtectChristmasModule,void(ProtectChristmasModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ProtectChristmasModule,void(ProtectChristmasModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TutorialMgr, void
   (TutorialMgr::*)()>(Sexy::CBMemberTranslatorX<TutorialMgr, void (TutorialMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TutorialMgr,void(TutorialMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TutorialMgr,void(TutorialMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TutorialLevel1, void
   (TutorialLevel1::*)()>(Sexy::CBMemberTranslatorX<TutorialLevel1, void (TutorialLevel1::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TutorialLevel1,void(TutorialLevel1::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TutorialLevel1,void(TutorialLevel1::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TutorialLevel2, void
   (TutorialLevel2::*)()>(Sexy::CBMemberTranslatorX<TutorialLevel2, void (TutorialLevel2::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TutorialLevel2,void(TutorialLevel2::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TutorialLevel2,void(TutorialLevel2::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TutorialLevel3, void
   (TutorialLevel3::*)()>(Sexy::CBMemberTranslatorX<TutorialLevel3, void (TutorialLevel3::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TutorialLevel3,void(TutorialLevel3::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TutorialLevel3,void(TutorialLevel3::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TutorialLevel4, void
   (TutorialLevel4::*)()>(Sexy::CBMemberTranslatorX<TutorialLevel4, void (TutorialLevel4::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TutorialLevel4,void(TutorialLevel4::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TutorialLevel4,void(TutorialLevel4::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIWidget, void (UIWidget::*)()>(Sexy::CBMemberTranslatorX<UIWidget,
   void (UIWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIWidget,void(UIWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIWidget,void(UIWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UniverseMap, void
   (UniverseMap::*)()>(Sexy::CBMemberTranslatorX<UniverseMap, void (UniverseMap::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UniverseMap,void(UniverseMap::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UniverseWorldButton, void
   (UniverseWorldButton::*)()>(Sexy::CBMemberTranslatorX<UniverseWorldButton, void
   (UniverseWorldButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UniverseWorldButton,void(UniverseWorldButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UniverseWorldButton,void(UniverseWorldButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UniverseWorldInfo, void
   (UniverseWorldInfo::*)()>(Sexy::CBMemberTranslatorX<UniverseWorldInfo, void
   (UniverseWorldInfo::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UniverseWorldInfo,void(UniverseWorldInfo::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UniverseWorldInfo,void(UniverseWorldInfo::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UniverseUnlockGate, void
   (UniverseUnlockGate::*)()>(Sexy::CBMemberTranslatorX<UniverseUnlockGate, void
   (UniverseUnlockGate::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UniverseUnlockGate,void(UniverseUnlockGate::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UniverseUnlockGate,void(UniverseUnlockGate::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<VictoryOutroModule, void
   (VictoryOutroModule::*)()>(Sexy::CBMemberTranslatorX<VictoryOutroModule, void
   (VictoryOutroModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<VictoryOutroModule,void(VictoryOutroModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ViewBoardOrZombiesButton, void
   (ViewBoardOrZombiesButton::*)()>(Sexy::CBMemberTranslatorX<ViewBoardOrZombiesButton, void
   (ViewBoardOrZombiesButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ViewBoardOrZombiesButton,void(ViewBoardOrZombiesButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ViewBoardOrZombiesButton,void(ViewBoardOrZombiesButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WaveGeneratorModule, void
   (WaveGeneratorModule::*)()>(Sexy::CBMemberTranslatorX<WaveGeneratorModule, void
   (WaveGeneratorModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WaveGeneratorModule,void(WaveGeneratorModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WaveGeneratorModule,void(WaveGeneratorModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WaveProgressMeter, void
   (WaveProgressMeter::*)()>(Sexy::CBMemberTranslatorX<WaveProgressMeter, void
   (WaveProgressMeter::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WaveProgressMeter,void(WaveProgressMeter::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WaveProgressMeter,void(WaveProgressMeter::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap, void (WorldMap::*)()>(Sexy::CBMemberTranslatorX<WorldMap,
   void (WorldMap::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap,void(WorldMap::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<WorldMap,void(WorldMap::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionUnlockNodesSequence, void
   (ActionUnlockNodesSequence::*)()>(Sexy::CBMemberTranslatorX<ActionUnlockNodesSequence, void
   (ActionUnlockNodesSequence::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionUnlockNodesSequence,void(ActionUnlockNodesSequence::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionUnlockNodesSequence,void(ActionUnlockNodesSequence::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionCheckForShowReturnWorldKey, void
   (ActionCheckForShowReturnWorldKey::*)()>(Sexy::CBMemberTranslatorX<ActionCheckForShowReturnWorldKey,
   void (ActionCheckForShowReturnWorldKey::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<ActionCheckForShowReturnWorldKey,void(ActionCheckForShowReturnWorldKey::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionCheckForShowReturnWorldKey,void(ActionCheckForShowReturnWorldKey::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionEnterTutorial, void
   (ActionEnterTutorial::*)()>(Sexy::CBMemberTranslatorX<ActionEnterTutorial, void
   (ActionEnterTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionEnterTutorial,void(ActionEnterTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionEnterTutorial,void(ActionEnterTutorial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionStartNarrativeID, void
   (ActionStartNarrativeID::*)()>(Sexy::CBMemberTranslatorX<ActionStartNarrativeID, void
   (ActionStartNarrativeID::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionStartNarrativeID,void(ActionStartNarrativeID::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionStartNarrativeID,void(ActionStartNarrativeID::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionLoginReward, void
   (ActionLoginReward::*)()>(Sexy::CBMemberTranslatorX<ActionLoginReward, void
   (ActionLoginReward::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionLoginReward,void(ActionLoginReward::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionLoginReward,void(ActionLoginReward::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionPopupAlways, void
   (ActionPopupAlways::*)()>(Sexy::CBMemberTranslatorX<ActionPopupAlways, void
   (ActionPopupAlways::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionPopupAlways,void(ActionPopupAlways::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionPopupAlways,void(ActionPopupAlways::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionShowPlantTrial, void
   (ActionShowPlantTrial::*)()>(Sexy::CBMemberTranslatorX<ActionShowPlantTrial, void
   (ActionShowPlantTrial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionShowPlantTrial,void(ActionShowPlantTrial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionShowPlantTrial,void(ActionShowPlantTrial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionShowSalesUI, void
   (ActionShowSalesUI::*)()>(Sexy::CBMemberTranslatorX<ActionShowSalesUI, void
   (ActionShowSalesUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionShowSalesUI,void(ActionShowSalesUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionShowSalesUI,void(ActionShowSalesUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionGeilivableLottery, void
   (ActionGeilivableLottery::*)()>(Sexy::CBMemberTranslatorX<ActionGeilivableLottery, void
   (ActionGeilivableLottery::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionGeilivableLottery,void(ActionGeilivableLottery::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionGeilivableLottery,void(ActionGeilivableLottery::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionShowFirstRecharge, void
   (ActionShowFirstRecharge::*)()>(Sexy::CBMemberTranslatorX<ActionShowFirstRecharge, void
   (ActionShowFirstRecharge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionShowFirstRecharge,void(ActionShowFirstRecharge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionShowFirstRecharge,void(ActionShowFirstRecharge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionShowRechargeBundle, void
   (ActionShowRechargeBundle::*)()>(Sexy::CBMemberTranslatorX<ActionShowRechargeBundle, void
   (ActionShowRechargeBundle::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionShowRechargeBundle,void(ActionShowRechargeBundle::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionShowRechargeBundle,void(ActionShowRechargeBundle::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionShowOfflineBundle, void
   (ActionShowOfflineBundle::*)()>(Sexy::CBMemberTranslatorX<ActionShowOfflineBundle, void
   (ActionShowOfflineBundle::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionShowOfflineBundle,void(ActionShowOfflineBundle::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionShowOfflineBundle,void(ActionShowOfflineBundle::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionLostPurchaseOrders, void
   (ActionLostPurchaseOrders::*)()>(Sexy::CBMemberTranslatorX<ActionLostPurchaseOrders, void
   (ActionLostPurchaseOrders::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionLostPurchaseOrders,void(ActionLostPurchaseOrders::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionLostPurchaseOrders,void(ActionLostPurchaseOrders::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionPVPTutorial, void
   (ActionPVPTutorial::*)()>(Sexy::CBMemberTranslatorX<ActionPVPTutorial, void
   (ActionPVPTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionPVPTutorial,void(ActionPVPTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionPVPTutorial,void(ActionPVPTutorial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionHardLevelReward, void
   (ActionHardLevelReward::*)()>(Sexy::CBMemberTranslatorX<ActionHardLevelReward, void
   (ActionHardLevelReward::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionHardLevelReward,void(ActionHardLevelReward::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionHardLevelReward,void(ActionHardLevelReward::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionCR_StoreTutorial, void
   (ActionCR_StoreTutorial::*)()>(Sexy::CBMemberTranslatorX<ActionCR_StoreTutorial, void
   (ActionCR_StoreTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionCR_StoreTutorial,void(ActionCR_StoreTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionCR_StoreTutorial,void(ActionCR_StoreTutorial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_TGTutorial, void
   (Action_TGTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_TGTutorial, void
   (Action_TGTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_TGTutorial,void(Action_TGTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_TGTutorial,void(Action_TGTutorial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_NewAvatarTutorial, void
   (Action_NewAvatarTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_NewAvatarTutorial, void
   (Action_NewAvatarTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_NewAvatarTutorial,void(Action_NewAvatarTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_NewAvatarTutorial,void(Action_NewAvatarTutorial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_GeneEnhancementTutorial, void
   (Action_GeneEnhancementTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_GeneEnhancementTutorial,
   void (Action_GeneEnhancementTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_GeneEnhancementTutorial,void(Action_GeneEnhancementTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_GeneEnhancementTutorial,void(Action_GeneEnhancementTutorial::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_NewPvPTutorial, void
   (Action_NewPvPTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_NewPvPTutorial, void
   (Action_NewPvPTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_NewPvPTutorial,void(Action_NewPvPTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_NewPvPTutorial,void(Action_NewPvPTutorial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_PlantWarsTutorial, void
   (Action_PlantWarsTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_PlantWarsTutorial, void
   (Action_PlantWarsTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_PlantWarsTutorial,void(Action_PlantWarsTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_PlantWarsTutorial,void(Action_PlantWarsTutorial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_PlantFamilyTutorial, void
   (Action_PlantFamilyTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_PlantFamilyTutorial, void
   (Action_PlantFamilyTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_PlantFamilyTutorial,void(Action_PlantFamilyTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_PlantFamilyTutorial,void(Action_PlantFamilyTutorial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionUUIDBindTip, void
   (ActionUUIDBindTip::*)()>(Sexy::CBMemberTranslatorX<ActionUUIDBindTip, void
   (ActionUUIDBindTip::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionUUIDBindTip,void(ActionUUIDBindTip::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionUUIDBindTip,void(ActionUUIDBindTip::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActionActivityLevelsTutorial, void
   (ActionActivityLevelsTutorial::*)()>(Sexy::CBMemberTranslatorX<ActionActivityLevelsTutorial, void
   (ActionActivityLevelsTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActionActivityLevelsTutorial,void(ActionActivityLevelsTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActionActivityLevelsTutorial,void(ActionActivityLevelsTutorial::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_JoustTutorial, void
   (Action_JoustTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_JoustTutorial, void
   (Action_JoustTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_JoustTutorial,void(Action_JoustTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_JoustTutorial,void(Action_JoustTutorial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_ArtifactTutorial, void
   (Action_ArtifactTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_ArtifactTutorial, void
   (Action_ArtifactTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_ArtifactTutorial,void(Action_ArtifactTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_ArtifactTutorial,void(Action_ArtifactTutorial::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_PennyClassroomTutorial, void
   (Action_PennyClassroomTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_PennyClassroomTutorial,
   void (Action_PennyClassroomTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_PennyClassroomTutorial,void(Action_PennyClassroomTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_PennyClassroomTutorial,void(Action_PennyClassroomTutorial::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_UnchartedModeTutorial, void
   (Action_UnchartedModeTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_UnchartedModeTutorial, void
   (Action_UnchartedModeTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_UnchartedModeTutorial,void(Action_UnchartedModeTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_UnchartedModeTutorial,void(Action_UnchartedModeTutorial::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_ReturnGems, void
   (Action_ReturnGems::*)()>(Sexy::CBMemberTranslatorX<Action_ReturnGems, void
   (Action_ReturnGems::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_ReturnGems,void(Action_ReturnGems::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_ReturnGems,void(Action_ReturnGems::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_LimitedSummonReward, void
   (Action_LimitedSummonReward::*)()>(Sexy::CBMemberTranslatorX<Action_LimitedSummonReward, void
   (Action_LimitedSummonReward::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_LimitedSummonReward,void(Action_LimitedSummonReward::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_LimitedSummonReward,void(Action_LimitedSummonReward::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_PennyGiftBoxReward, void
   (Action_PennyGiftBoxReward::*)()>(Sexy::CBMemberTranslatorX<Action_PennyGiftBoxReward, void
   (Action_PennyGiftBoxReward::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_PennyGiftBoxReward,void(Action_PennyGiftBoxReward::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_PennyGiftBoxReward,void(Action_PennyGiftBoxReward::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_SuperAccessory, void
   (Action_SuperAccessory::*)()>(Sexy::CBMemberTranslatorX<Action_SuperAccessory, void
   (Action_SuperAccessory::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_SuperAccessory,void(Action_SuperAccessory::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_SuperAccessory,void(Action_SuperAccessory::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Action_RiftWorldOpenTutorial, void
   (Action_RiftWorldOpenTutorial::*)()>(Sexy::CBMemberTranslatorX<Action_RiftWorldOpenTutorial, void
   (Action_RiftWorldOpenTutorial::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Action_RiftWorldOpenTutorial,void(Action_RiftWorldOpenTutorial::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Action_RiftWorldOpenTutorial,void(Action_RiftWorldOpenTutorial::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_AlmanacButton, void
   (WorldMap_AlmanacButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_AlmanacButton, void
   (WorldMap_AlmanacButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_AlmanacButton,void(WorldMap_AlmanacButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_AlmanacButton,void(WorldMap_AlmanacButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_KeyBank, void
   (WorldMap_KeyBank::*)()>(Sexy::CBMemberTranslatorX<WorldMap_KeyBank, void
   (WorldMap_KeyBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_KeyBank,void(WorldMap_KeyBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<WorldMap_KeyBank,void(WorldMap_KeyBank::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_StarBank, void
   (WorldMap_StarBank::*)()>(Sexy::CBMemberTranslatorX<WorldMap_StarBank, void
   (WorldMap_StarBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_StarBank,void(WorldMap_StarBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_StarBank,void(WorldMap_StarBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_PlantLevelUpButton, void
   (WorldMap_PlantLevelUpButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_PlantLevelUpButton, void
   (WorldMap_PlantLevelUpButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_PlantLevelUpButton,void(WorldMap_PlantLevelUpButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_PlantLevelUpButton,void(WorldMap_PlantLevelUpButton::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_WelfareButton, void
   (WorldMap_WelfareButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_WelfareButton, void
   (WorldMap_WelfareButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_WelfareButton,void(WorldMap_WelfareButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_WelfareButton,void(WorldMap_WelfareButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_LuaButtonsDelegate, void
   (WorldMap_LuaButtonsDelegate::*)()>(Sexy::CBMemberTranslatorX<WorldMap_LuaButtonsDelegate, void
   (WorldMap_LuaButtonsDelegate::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_LuaButtonsDelegate,void(WorldMap_LuaButtonsDelegate::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_LuaButtonsDelegate,void(WorldMap_LuaButtonsDelegate::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_ActivityHomeButton, void
   (WorldMap_ActivityHomeButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButton, void
   (WorldMap_ActivityHomeButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_ActivityHomeButton,void(WorldMap_ActivityHomeButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_ActivityHomeButton,void(WorldMap_ActivityHomeButton::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_ActivityHomeButtonExtra, void
   (WorldMap_ActivityHomeButtonExtra::*)()>(Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButtonExtra,
   void (WorldMap_ActivityHomeButtonExtra::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_ChallengeButton, void
   (WorldMap_ChallengeButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_ChallengeButton, void
   (WorldMap_ChallengeButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_DailyActivityButton, void
   (WorldMap_DailyActivityButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_DailyActivityButton, void
   (WorldMap_DailyActivityButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_DailyActivityButton,void(WorldMap_DailyActivityButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_DailyActivityButton,void(WorldMap_DailyActivityButton::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_ShopButton, void
   (WorldMap_ShopButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_ShopButton, void
   (WorldMap_ShopButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_ShopButton,void(WorldMap_ShopButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_ShopButton,void(WorldMap_ShopButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_WelfareButtonExtra, void
   (WorldMap_WelfareButtonExtra::*)()>(Sexy::CBMemberTranslatorX<WorldMap_WelfareButtonExtra, void
   (WorldMap_WelfareButtonExtra::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_WelfareButtonExtra,void(WorldMap_WelfareButtonExtra::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_WelfareButtonExtra,void(WorldMap_WelfareButtonExtra::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_TurnChangeButton, void
   (WorldMap_TurnChangeButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_TurnChangeButton, void
   (WorldMap_TurnChangeButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_TurnChangeButton,void(WorldMap_TurnChangeButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_TurnChangeButton,void(WorldMap_TurnChangeButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_ScrollBannerButton, void
   (WorldMap_ScrollBannerButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_ScrollBannerButton, void
   (WorldMap_ScrollBannerButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_ScrollBannerButton,void(WorldMap_ScrollBannerButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_ScrollBannerButton,void(WorldMap_ScrollBannerButton::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_ScrollBannerSwitchButton, void
   (WorldMap_ScrollBannerSwitchButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_ScrollBannerSwitchButton,
   void (WorldMap_ScrollBannerSwitchButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<WorldMap_ScrollBannerSwitchButton,void(WorldMap_ScrollBannerSwitchButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_ScrollBannerSwitchButton,void(WorldMap_ScrollBannerSwitchButton::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Zombie, void (Zombie::*)()>(Sexy::CBMemberTranslatorX<Zombie, void
   (Zombie::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Zombie,void(Zombie::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Zombie,void(Zombie::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieAgileBronze, void
   (ZombieAgileBronze::*)()>(Sexy::CBMemberTranslatorX<ZombieAgileBronze, void
   (ZombieAgileBronze::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieAgileBronze,void(ZombieAgileBronze::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieAgileBronze,void(ZombieAgileBronze::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieWithActions, void
   (ZombieWithActions::*)()>(Sexy::CBMemberTranslatorX<ZombieWithActions, void
   (ZombieWithActions::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieWithActions,void(ZombieWithActions::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieWithActions,void(ZombieWithActions::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieBeachFisherman, void
   (ZombieBeachFisherman::*)()>(Sexy::CBMemberTranslatorX<ZombieBeachFisherman, void
   (ZombieBeachFisherman::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieBeachFisherman,void(ZombieBeachFisherman::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieBeachFisherman,void(ZombieBeachFisherman::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieBeachShell, void
   (ZombieBeachShell::*)()>(Sexy::CBMemberTranslatorX<ZombieBeachShell, void
   (ZombieBeachShell::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieBeachShell,void(ZombieBeachShell::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieBeachShell,void(ZombieBeachShell::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieLionDance, void
   (ZombieLionDance::*)()>(Sexy::CBMemberTranslatorX<ZombieLionDance, void (ZombieLionDance::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieLionDance,void(ZombieLionDance::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieLionDance,void(ZombieLionDance::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieWealthGod, void
   (ZombieWealthGod::*)()>(Sexy::CBMemberTranslatorX<ZombieWealthGod, void (ZombieWealthGod::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieWealthGod,void(ZombieWealthGod::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieWealthGod,void(ZombieWealthGod::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieEndlessWealth, void
   (ZombieEndlessWealth::*)()>(Sexy::CBMemberTranslatorX<ZombieEndlessWealth, void
   (ZombieEndlessWealth::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieEndlessWealth,void(ZombieEndlessWealth::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieEndlessWealth,void(ZombieEndlessWealth::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieBeachSurfer, void
   (ZombieBeachSurfer::*)()>(Sexy::CBMemberTranslatorX<ZombieBeachSurfer, void
   (ZombieBeachSurfer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieBeachSurfer,void(ZombieBeachSurfer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieBeachSurfer,void(ZombieBeachSurfer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieBeachSnorkel, void
   (ZombieBeachSnorkel::*)()>(Sexy::CBMemberTranslatorX<ZombieBeachSnorkel, void
   (ZombieBeachSnorkel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieBeachSnorkel,void(ZombieBeachSnorkel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieBeachSnorkel,void(ZombieBeachSnorkel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieBallet, void
   (ZombieBallet::*)()>(Sexy::CBMemberTranslatorX<ZombieBallet, void (ZombieBallet::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieBallet,void(ZombieBallet::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieBallet,void(ZombieBallet::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieHeianSushi, void
   (ZombieHeianSushi::*)()>(Sexy::CBMemberTranslatorX<ZombieHeianSushi, void
   (ZombieHeianSushi::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieHeianSushi,void(ZombieHeianSushi::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieHeianSushi,void(ZombieHeianSushi::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieHeianAkinndo, void
   (ZombieHeianAkinndo::*)()>(Sexy::CBMemberTranslatorX<ZombieHeianAkinndo, void
   (ZombieHeianAkinndo::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieHeianAkinndo,void(ZombieHeianAkinndo::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieHeianAkinndo,void(ZombieHeianAkinndo::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieRomanBallista, void
   (ZombieRomanBallista::*)()>(Sexy::CBMemberTranslatorX<ZombieRomanBallista, void
   (ZombieRomanBallista::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieRomanBallista,void(ZombieRomanBallista::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieRomanBallista,void(ZombieRomanBallista::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieTowerDefendBasic, void
   (ZombieTowerDefendBasic::*)()>(Sexy::CBMemberTranslatorX<ZombieTowerDefendBasic, void
   (ZombieTowerDefendBasic::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieWolfBoss, void
   (ZombieWolfBoss::*)()>(Sexy::CBMemberTranslatorX<ZombieWolfBoss, void (ZombieWolfBoss::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieWolfBoss,void(ZombieWolfBoss::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieWolfBoss,void(ZombieWolfBoss::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieDarkWizard, void
   (ZombieDarkWizard::*)()>(Sexy::CBMemberTranslatorX<ZombieDarkWizard, void
   (ZombieDarkWizard::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieDarkWizard,void(ZombieDarkWizard::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieDarkWizard,void(ZombieDarkWizard::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieDarkWizardElite, void
   (ZombieDarkWizardElite::*)()>(Sexy::CBMemberTranslatorX<ZombieDarkWizardElite, void
   (ZombieDarkWizardElite::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieDarkWizardElite,void(ZombieDarkWizardElite::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieDarkWizardElite,void(ZombieDarkWizardElite::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieDarkJuggler, void
   (ZombieDarkJuggler::*)()>(Sexy::CBMemberTranslatorX<ZombieDarkJuggler, void
   (ZombieDarkJuggler::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieDarkJuggler,void(ZombieDarkJuggler::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieDarkJuggler,void(ZombieDarkJuggler::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieDarkKing, void
   (ZombieDarkKing::*)()>(Sexy::CBMemberTranslatorX<ZombieDarkKing, void (ZombieDarkKing::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieDarkKing,void(ZombieDarkKing::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieDarkKing,void(ZombieDarkKing::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieArchmage, void
   (ZombieArchmage::*)()>(Sexy::CBMemberTranslatorX<ZombieArchmage, void (ZombieArchmage::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieArchmage,void(ZombieArchmage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieArchmage,void(ZombieArchmage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieTarget, void
   (ZombieTarget::*)()>(Sexy::CBMemberTranslatorX<ZombieTarget, void (ZombieTarget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieTarget,void(ZombieTarget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieTarget,void(ZombieTarget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieTargetGargantuar, void
   (ZombieTargetGargantuar::*)()>(Sexy::CBMemberTranslatorX<ZombieTargetGargantuar, void
   (ZombieTargetGargantuar::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieTargetGargantuar,void(ZombieTargetGargantuar::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieCavalry, void
   (ZombieCavalry::*)()>(Sexy::CBMemberTranslatorX<ZombieCavalry, void (ZombieCavalry::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieCavalry,void(ZombieCavalry::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieCavalry,void(ZombieCavalry::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieCavalryRider, void
   (ZombieCavalryRider::*)()>(Sexy::CBMemberTranslatorX<ZombieCavalryRider, void
   (ZombieCavalryRider::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieCavalryRider,void(ZombieCavalryRider::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieCavalryRider,void(ZombieCavalryRider::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieRogue, void
   (ZombieRogue::*)()>(Sexy::CBMemberTranslatorX<ZombieRogue, void (ZombieRogue::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieRogue,void(ZombieRogue::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieRogue,void(ZombieRogue::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieBlowerSubSystem, void
   (ZombieBlowerSubSystem::*)()>(Sexy::CBMemberTranslatorX<ZombieBlowerSubSystem, void
   (ZombieBlowerSubSystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieBlowerSubSystem,void(ZombieBlowerSubSystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieBlowerSubSystem,void(ZombieBlowerSubSystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieBull, void
   (ZombieBull::*)()>(Sexy::CBMemberTranslatorX<ZombieBull, void (ZombieBull::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieBull,void(ZombieBull::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieBull,void(ZombieBull::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieCamel, void
   (ZombieCamel::*)()>(Sexy::CBMemberTranslatorX<ZombieCamel, void (ZombieCamel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieCamel,void(ZombieCamel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieCamel,void(ZombieCamel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieCamelTouch, void
   (ZombieCamelTouch::*)()>(Sexy::CBMemberTranslatorX<ZombieCamelTouch, void
   (ZombieCamelTouch::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieCamelTouch,void(ZombieCamelTouch::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieCamelTouch,void(ZombieCamelTouch::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieFutureImp, void
   (ZombieFutureImp::*)()>(Sexy::CBMemberTranslatorX<ZombieFutureImp, void (ZombieFutureImp::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieFutureImp,void(ZombieFutureImp::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieFutureImp,void(ZombieFutureImp::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieFutureJetpack, void
   (ZombieFutureJetpack::*)()>(Sexy::CBMemberTranslatorX<ZombieFutureJetpack, void
   (ZombieFutureJetpack::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieFutureJetpack,void(ZombieFutureJetpack::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieFutureJetpack,void(ZombieFutureJetpack::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieFutureProtector, void
   (ZombieFutureProtector::*)()>(Sexy::CBMemberTranslatorX<ZombieFutureProtector, void
   (ZombieFutureProtector::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieFutureProtector,void(ZombieFutureProtector::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieFutureProtector,void(ZombieFutureProtector::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieGargantuar, void
   (ZombieGargantuar::*)()>(Sexy::CBMemberTranslatorX<ZombieGargantuar, void
   (ZombieGargantuar::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieGargantuar,void(ZombieGargantuar::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieGargantuar,void(ZombieGargantuar::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieGargantuarMech, void
   (ZombieGargantuarMech::*)()>(Sexy::CBMemberTranslatorX<ZombieGargantuarMech, void
   (ZombieGargantuarMech::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieGargantuarMech,void(ZombieGargantuarMech::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieGargantuarMech,void(ZombieGargantuarMech::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieImp, void (ZombieImp::*)()>(Sexy::CBMemberTranslatorX<ZombieImp,
   void (ZombieImp::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieImp,void(ZombieImp::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieImp,void(ZombieImp::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieMech, void
   (ZombieMech::*)()>(Sexy::CBMemberTranslatorX<ZombieMech, void (ZombieMech::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieMech,void(ZombieMech::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieMech,void(ZombieMech::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieMechDisco, void
   (ZombieMechDisco::*)()>(Sexy::CBMemberTranslatorX<ZombieMechDisco, void (ZombieMechDisco::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieMechDisco,void(ZombieMechDisco::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieMechDisco,void(ZombieMechDisco::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieMechDiscoSubsystem, void
   (ZombieMechDiscoSubsystem::*)()>(Sexy::CBMemberTranslatorX<ZombieMechDiscoSubsystem, void
   (ZombieMechDiscoSubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieMechDiscoSubsystem,void(ZombieMechDiscoSubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieMechDiscoSubsystem,void(ZombieMechDiscoSubsystem::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieMechFootball, void
   (ZombieMechFootball::*)()>(Sexy::CBMemberTranslatorX<ZombieMechFootball, void
   (ZombieMechFootball::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieMechFootball,void(ZombieMechFootball::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieMechFootball,void(ZombieMechFootball::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieMonkImp, void
   (ZombieMonkImp::*)()>(Sexy::CBMemberTranslatorX<ZombieMonkImp, void (ZombieMonkImp::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieMonkImp,void(ZombieMonkImp::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieMonkImp,void(ZombieMonkImp::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePharaoh, void
   (ZombiePharaoh::*)()>(Sexy::CBMemberTranslatorX<ZombiePharaoh, void (ZombiePharaoh::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePharaoh,void(ZombiePharaoh::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombiePharaoh,void(ZombiePharaoh::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePirateBarrel, void
   (ZombiePirateBarrel::*)()>(Sexy::CBMemberTranslatorX<ZombiePirateBarrel, void
   (ZombiePirateBarrel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePirateBarrel,void(ZombiePirateBarrel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePirateBarrel,void(ZombiePirateBarrel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePirateCannon, void
   (ZombiePirateCannon::*)()>(Sexy::CBMemberTranslatorX<ZombiePirateCannon, void
   (ZombiePirateCannon::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePirateCannon,void(ZombiePirateCannon::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePirateCannon,void(ZombiePirateCannon::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePirateParrot, void
   (ZombiePirateParrot::*)()>(Sexy::CBMemberTranslatorX<ZombiePirateParrot, void
   (ZombiePirateParrot::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePirateParrot,void(ZombiePirateParrot::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePirateParrot,void(ZombiePirateParrot::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieProspector, void
   (ZombieProspector::*)()>(Sexy::CBMemberTranslatorX<ZombieProspector, void
   (ZombieProspector::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieProspector,void(ZombieProspector::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieProspector,void(ZombieProspector::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieRa, void (ZombieRa::*)()>(Sexy::CBMemberTranslatorX<ZombieRa,
   void (ZombieRa::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieRa,void(ZombieRa::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieRa,void(ZombieRa::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiesAteYourBrainsModule, void
   (ZombiesAteYourBrainsModule::*)()>(Sexy::CBMemberTranslatorX<ZombiesAteYourBrainsModule, void
   (ZombiesAteYourBrainsModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiesAteYourBrainsModule,void(ZombiesAteYourBrainsModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiesAteYourBrainsModule,void(ZombiesAteYourBrainsModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CardGameZombiesAteYourBaseModule, void
   (CardGameZombiesAteYourBaseModule::*)()>(Sexy::CBMemberTranslatorX<CardGameZombiesAteYourBaseModule,
   void (CardGameZombiesAteYourBaseModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<CardGameZombiesAteYourBaseModule,void(CardGameZombiesAteYourBaseModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CardGameZombiesAteYourBaseModule,void(CardGameZombiesAteYourBaseModule::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantWarsZombiesAteYourBrainsModule, void
   (PlantWarsZombiesAteYourBrainsModule::*)()>(Sexy::CBMemberTranslatorX<PlantWarsZombiesAteYourBrainsModule,
   void (PlantWarsZombiesAteYourBrainsModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<PlantWarsZombiesAteYourBrainsModule,void(PlantWarsZombiesAteYourBrainsModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantWarsZombiesAteYourBrainsModule,void(PlantWarsZombiesAteYourBrainsModule::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiesAteYourBrainsOutro, void
   (ZombiesAteYourBrainsOutro::*)()>(Sexy::CBMemberTranslatorX<ZombiesAteYourBrainsOutro, void
   (ZombiesAteYourBrainsOutro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantWarsZombiesDeadWinCon, void
   (PlantWarsZombiesDeadWinCon::*)()>(Sexy::CBMemberTranslatorX<PlantWarsZombiesDeadWinCon, void
   (PlantWarsZombiesDeadWinCon::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantWarsZombiesDeadWinCon,void(PlantWarsZombiesDeadWinCon::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantWarsZombiesDeadWinCon,void(PlantWarsZombiesDeadWinCon::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieSwashbuckler, void
   (ZombieSwashbuckler::*)()>(Sexy::CBMemberTranslatorX<ZombieSwashbuckler, void
   (ZombieSwashbuckler::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieSwashbuckler,void(ZombieSwashbuckler::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieSwashbuckler,void(ZombieSwashbuckler::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieTombRaiser, void
   (ZombieTombRaiser::*)()>(Sexy::CBMemberTranslatorX<ZombieTombRaiser, void
   (ZombieTombRaiser::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieTombRaiser,void(ZombieTombRaiser::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieTombRaiser,void(ZombieTombRaiser::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieTreasureYeti, void
   (ZombieTreasureYeti::*)()>(Sexy::CBMemberTranslatorX<ZombieTreasureYeti, void
   (ZombieTreasureYeti::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieTreasureYeti,void(ZombieTreasureYeti::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieTreasureYeti,void(ZombieTreasureYeti::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieRocket, void
   (ZombieRocket::*)()>(Sexy::CBMemberTranslatorX<ZombieRocket, void (ZombieRocket::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieRocket,void(ZombieRocket::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieRocket,void(ZombieRocket::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieGong, void
   (ZombieGong::*)()>(Sexy::CBMemberTranslatorX<ZombieGong, void (ZombieGong::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieGong,void(ZombieGong::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieGong,void(ZombieGong::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieSelfExplode, void
   (ZombieSelfExplode::*)()>(Sexy::CBMemberTranslatorX<ZombieSelfExplode, void
   (ZombieSelfExplode::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieSelfExplode,void(ZombieSelfExplode::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieSelfExplode,void(ZombieSelfExplode::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieDrink, void
   (ZombieDrink::*)()>(Sexy::CBMemberTranslatorX<ZombieDrink, void (ZombieDrink::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieDrink,void(ZombieDrink::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieDrink,void(ZombieDrink::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieZombossBlade, void
   (ZombieZombossBlade::*)()>(Sexy::CBMemberTranslatorX<ZombieZombossBlade, void
   (ZombieZombossBlade::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieZombossQigong, void
   (ZombieZombossQigong::*)()>(Sexy::CBMemberTranslatorX<ZombieZombossQigong, void
   (ZombieZombossQigong::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieZombossExplosive, void
   (ZombieZombossExplosive::*)()>(Sexy::CBMemberTranslatorX<ZombieZombossExplosive, void
   (ZombieZombossExplosive::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RocketZombieFlickModule, void
   (RocketZombieFlickModule::*)()>(Sexy::CBMemberTranslatorX<RocketZombieFlickModule, void
   (RocketZombieFlickModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RocketZombieFlickModule,void(RocketZombieFlickModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RocketZombieFlickModule,void(RocketZombieFlickModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieZombossMech, void
   (ZombieZombossMech::*)()>(Sexy::CBMemberTranslatorX<ZombieZombossMech, void
   (ZombieZombossMech::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieZombossMech,void(ZombieZombossMech::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieZombossMech,void(ZombieZombossMech::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieZombossMech_Dark, void
   (ZombieZombossMech_Dark::*)()>(Sexy::CBMemberTranslatorX<ZombieZombossMech_Dark, void
   (ZombieZombossMech_Dark::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieZombossMech_Dark,void(ZombieZombossMech_Dark::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieZombossMech_Dark,void(ZombieZombossMech_Dark::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieZombossMech_SkyCity, void
   (ZombieZombossMech_SkyCity::*)()>(Sexy::CBMemberTranslatorX<ZombieZombossMech_SkyCity, void
   (ZombieZombossMech_SkyCity::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieZombossMech_SkyCity,void(ZombieZombossMech_SkyCity::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieZombossMech_SkyCity,void(ZombieZombossMech_SkyCity::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombossIceBall, void
   (ZombossIceBall::*)()>(Sexy::CBMemberTranslatorX<ZombossIceBall, void (ZombossIceBall::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombossIceBall,void(ZombossIceBall::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombossIceBall,void(ZombossIceBall::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieStrongBronze, void
   (ZombieStrongBronze::*)()>(Sexy::CBMemberTranslatorX<ZombieStrongBronze, void
   (ZombieStrongBronze::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieStrongBronze,void(ZombieStrongBronze::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieStrongBronze,void(ZombieStrongBronze::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieMagicBronze, void
   (ZombieMagicBronze::*)()>(Sexy::CBMemberTranslatorX<ZombieMagicBronze, void
   (ZombieMagicBronze::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieMagicBronze,void(ZombieMagicBronze::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieMagicBronze,void(ZombieMagicBronze::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieMonkDrink, void
   (ZombieMonkDrink::*)()>(Sexy::CBMemberTranslatorX<ZombieMonkDrink, void (ZombieMonkDrink::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieMonkDrink,void(ZombieMonkDrink::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieMonkDrink,void(ZombieMonkDrink::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieMonkNunchaku, void
   (ZombieMonkNunchaku::*)()>(Sexy::CBMemberTranslatorX<ZombieMonkNunchaku, void
   (ZombieMonkNunchaku::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieMonkNunchaku,void(ZombieMonkNunchaku::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieMonkNunchaku,void(ZombieMonkNunchaku::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Zomboss, void (Zomboss::*)()>(Sexy::CBMemberTranslatorX<Zomboss, void
   (Zomboss::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Zomboss,void(Zomboss::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Zomboss,void(Zomboss::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombossBattleModule, void
   (ZombossBattleModule::*)()>(Sexy::CBMemberTranslatorX<ZombossBattleModule, void
   (ZombossBattleModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombossBattleModule,void(ZombossBattleModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombossBattleModule,void(ZombossBattleModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombossLastStandMinigameModule, void
   (ZombossLastStandMinigameModule::*)()>(Sexy::CBMemberTranslatorX<ZombossLastStandMinigameModule,
   void (ZombossLastStandMinigameModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombossBattleIntro, void
   (ZombossBattleIntro::*)()>(Sexy::CBMemberTranslatorX<ZombossBattleIntro, void
   (ZombossBattleIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombossBattleIntro,void(ZombossBattleIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombossBattleIntro,void(ZombossBattleIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BossProgressMeter, void
   (BossProgressMeter::*)()>(Sexy::CBMemberTranslatorX<BossProgressMeter, void
   (BossProgressMeter::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BossProgressMeter,void(BossProgressMeter::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<BossProgressMeter,void(BossProgressMeter::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombossMechLastStandIntro, void
   (ZombossMechLastStandIntro::*)()>(Sexy::CBMemberTranslatorX<ZombossMechLastStandIntro, void
   (ZombossMechLastStandIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombossMechLastStandIntro,void(ZombossMechLastStandIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombossMechLastStandIntro,void(ZombossMechLastStandIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieHammer, void
   (ZombieHammer::*)()>(Sexy::CBMemberTranslatorX<ZombieHammer, void (ZombieHammer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieHammer,void(ZombieHammer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieHammer,void(ZombieHammer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieQigong, void
   (ZombieQigong::*)()>(Sexy::CBMemberTranslatorX<ZombieQigong, void (ZombieQigong::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieQigong,void(ZombieQigong::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieQigong,void(ZombieQigong::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieIceAgeDodo, void
   (ZombieIceAgeDodo::*)()>(Sexy::CBMemberTranslatorX<ZombieIceAgeDodo, void
   (ZombieIceAgeDodo::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieIceAgeDodo,void(ZombieIceAgeDodo::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieIceAgeChief, void
   (ZombieIceAgeChief::*)()>(Sexy::CBMemberTranslatorX<ZombieIceAgeChief, void
   (ZombieIceAgeChief::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieIceAgeChief,void(ZombieIceAgeChief::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieIceAgeChief,void(ZombieIceAgeChief::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieIceAgeSki, void
   (ZombieIceAgeSki::*)()>(Sexy::CBMemberTranslatorX<ZombieIceAgeSki, void (ZombieIceAgeSki::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieIceAgeSki,void(ZombieIceAgeSki::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieIceAgeSki,void(ZombieIceAgeSki::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemWalrusStatue, void
   (GridItemWalrusStatue::*)()>(Sexy::CBMemberTranslatorX<GridItemWalrusStatue, void
   (GridItemWalrusStatue::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemWalrusStatue,void(GridItemWalrusStatue::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemWalrusStatue,void(GridItemWalrusStatue::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PooyanModule, void
   (PooyanModule::*)()>(Sexy::CBMemberTranslatorX<PooyanModule, void (PooyanModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PooyanModule,void(PooyanModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PooyanIntro, void
   (PooyanIntro::*)()>(Sexy::CBMemberTranslatorX<PooyanIntro, void (PooyanIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PooyanIntro,void(PooyanIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BesiegeModule, void
   (BesiegeModule::*)()>(Sexy::CBMemberTranslatorX<BesiegeModule, void (BesiegeModule::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<BesiegeModule,void(BesiegeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<BesiegeModule,void(BesiegeModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BesiegeIntro, void
   (BesiegeIntro::*)()>(Sexy::CBMemberTranslatorX<BesiegeIntro, void (BesiegeIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<BesiegeIntro,void(BesiegeIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieSkycityBattlePlane, void
   (ZombieSkycityBattlePlane::*)()>(Sexy::CBMemberTranslatorX<ZombieSkycityBattlePlane, void
   (ZombieSkycityBattlePlane::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieSkycityBattlePlane,void(ZombieSkycityBattlePlane::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieInvisiblePlane, void
   (ZombieInvisiblePlane::*)()>(Sexy::CBMemberTranslatorX<ZombieInvisiblePlane, void
   (ZombieInvisiblePlane::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieInvisiblePlane,void(ZombieInvisiblePlane::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieInvisiblePlane,void(ZombieInvisiblePlane::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AirMissileGuide, void
   (AirMissileGuide::*)()>(Sexy::CBMemberTranslatorX<AirMissileGuide, void (AirMissileGuide::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AirMissileGuide,void(AirMissileGuide::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<AirMissileGuide,void(AirMissileGuide::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AirMissileLauncher, void
   (AirMissileLauncher::*)()>(Sexy::CBMemberTranslatorX<AirMissileLauncher, void
   (AirMissileLauncher::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AirMissileLauncher,void(AirMissileLauncher::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AirMissileLauncher,void(AirMissileLauncher::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<FishingModule, void
   (FishingModule::*)()>(Sexy::CBMemberTranslatorX<FishingModule, void (FishingModule::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<FishingModule,void(FishingModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<FishingModule,void(FishingModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SkyCannonTypeUI, void
   (SkyCannonTypeUI::*)()>(Sexy::CBMemberTranslatorX<SkyCannonTypeUI, void (SkyCannonTypeUI::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SkyCannonTypeUI,void(SkyCannonTypeUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SkyCannonTypeUI,void(SkyCannonTypeUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<FishingEnergyBar, void
   (FishingEnergyBar::*)()>(Sexy::CBMemberTranslatorX<FishingEnergyBar, void
   (FishingEnergyBar::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<FishingEnergyBar,void(FishingEnergyBar::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<FishingEnergyBar,void(FishingEnergyBar::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<IntroFishing, void
   (IntroFishing::*)()>(Sexy::CBMemberTranslatorX<IntroFishing, void (IntroFishing::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<IntroFishing,void(IntroFishing::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<IntroFishing,void(IntroFishing::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieCrystalSkull, void
   (ZombieCrystalSkull::*)()>(Sexy::CBMemberTranslatorX<ZombieCrystalSkull, void
   (ZombieCrystalSkull::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieCrystalSkull,void(ZombieCrystalSkull::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieCrystalSkull,void(ZombieCrystalSkull::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieExcavator, void
   (ZombieExcavator::*)()>(Sexy::CBMemberTranslatorX<ZombieExcavator, void (ZombieExcavator::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieExcavator,void(ZombieExcavator::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieExcavator,void(ZombieExcavator::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieImpPorter, void
   (ZombieImpPorter::*)()>(Sexy::CBMemberTranslatorX<ZombieImpPorter, void (ZombieImpPorter::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieImpPorter,void(ZombieImpPorter::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieImpPorter,void(ZombieImpPorter::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemTent, void
   (GridItemTent::*)()>(Sexy::CBMemberTranslatorX<GridItemTent, void (GridItemTent::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemTent,void(GridItemTent::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemTent,void(GridItemTent::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemBackpack, void
   (GridItemBackpack::*)()>(Sexy::CBMemberTranslatorX<GridItemBackpack, void
   (GridItemBackpack::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemBackpack,void(GridItemBackpack::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemBackpack,void(GridItemBackpack::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieLostCityLostPilot, void
   (ZombieLostCityLostPilot::*)()>(Sexy::CBMemberTranslatorX<ZombieLostCityLostPilot, void
   (ZombieLostCityLostPilot::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieLostCityLostPilot,void(ZombieLostCityLostPilot::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieLostCityBug, void
   (ZombieLostCityBug::*)()>(Sexy::CBMemberTranslatorX<ZombieLostCityBug, void
   (ZombieLostCityBug::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieLostCityBug,void(ZombieLostCityBug::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieLostCityBug,void(ZombieLostCityBug::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieLostCityBasic, void
   (ZombieLostCityBasic::*)()>(Sexy::CBMemberTranslatorX<ZombieLostCityBasic, void
   (ZombieLostCityBasic::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieLostCityBasic,void(ZombieLostCityBasic::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieLostCityBasic,void(ZombieLostCityBasic::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieEightiesArcade, void
   (ZombieEightiesArcade::*)()>(Sexy::CBMemberTranslatorX<ZombieEightiesArcade, void
   (ZombieEightiesArcade::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieEightiesArcade,void(ZombieEightiesArcade::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieEightiesArcade,void(ZombieEightiesArcade::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieEightiesBass, void
   (ZombieEightiesBass::*)()>(Sexy::CBMemberTranslatorX<ZombieEightiesBass, void
   (ZombieEightiesBass::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieEightiesBass,void(ZombieEightiesBass::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieEightiesBass,void(ZombieEightiesBass::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieEightiesBoombox, void
   (ZombieEightiesBoombox::*)()>(Sexy::CBMemberTranslatorX<ZombieEightiesBoombox, void
   (ZombieEightiesBoombox::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieEightiesBoombox,void(ZombieEightiesBoombox::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieEightiesBoombox,void(ZombieEightiesBoombox::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieEightiesBreakDancer, void
   (ZombieEightiesBreakDancer::*)()>(Sexy::CBMemberTranslatorX<ZombieEightiesBreakDancer, void
   (ZombieEightiesBreakDancer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieEightiesBreakDancer,void(ZombieEightiesBreakDancer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieEightiesBreakDancer,void(ZombieEightiesBreakDancer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieEightiesMC, void
   (ZombieEightiesMC::*)()>(Sexy::CBMemberTranslatorX<ZombieEightiesMC, void
   (ZombieEightiesMC::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieEightiesMC,void(ZombieEightiesMC::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieEightiesMC,void(ZombieEightiesMC::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieEightiesPunk, void
   (ZombieEightiesPunk::*)()>(Sexy::CBMemberTranslatorX<ZombieEightiesPunk, void
   (ZombieEightiesPunk::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieEightiesPunk,void(ZombieEightiesPunk::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieEightiesPunk,void(ZombieEightiesPunk::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieDinoBasic, void
   (ZombieDinoBasic::*)()>(Sexy::CBMemberTranslatorX<ZombieDinoBasic, void (ZombieDinoBasic::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieDinoBasic,void(ZombieDinoBasic::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieDinoBasic,void(ZombieDinoBasic::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieDinoStealEgg, void
   (ZombieDinoStealEgg::*)()>(Sexy::CBMemberTranslatorX<ZombieDinoStealEgg, void
   (ZombieDinoStealEgg::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieDinoStealEgg,void(ZombieDinoStealEgg::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieDinoStealEgg,void(ZombieDinoStealEgg::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieModernSolarTruck, void
   (ZombieModernSolarTruck::*)()>(Sexy::CBMemberTranslatorX<ZombieModernSolarTruck, void
   (ZombieModernSolarTruck::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieModernSolarTruck,void(ZombieModernSolarTruck::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieModernMiner, void
   (ZombieModernMiner::*)()>(Sexy::CBMemberTranslatorX<ZombieModernMiner, void
   (ZombieModernMiner::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieModernMiner,void(ZombieModernMiner::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieModernMiner,void(ZombieModernMiner::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieSteamCoalCart, void
   (ZombieSteamCoalCart::*)()>(Sexy::CBMemberTranslatorX<ZombieSteamCoalCart, void
   (ZombieSteamCoalCart::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieSteamCoalCart,void(ZombieSteamCoalCart::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieSteamCoalCart,void(ZombieSteamCoalCart::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieRenaiCarver, void
   (ZombieRenaiCarver::*)()>(Sexy::CBMemberTranslatorX<ZombieRenaiCarver, void
   (ZombieRenaiCarver::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieRenaiCarver,void(ZombieRenaiCarver::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieRenaiCarver,void(ZombieRenaiCarver::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Creature, void (Creature::*)()>(Sexy::CBMemberTranslatorX<Creature,
   void (Creature::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Creature,void(Creature::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Creature,void(Creature::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Dinosaur, void (Dinosaur::*)()>(Sexy::CBMemberTranslatorX<Dinosaur,
   void (Dinosaur::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Dinosaur,void(Dinosaur::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Dinosaur,void(Dinosaur::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DinosaurPterodactyl, void
   (DinosaurPterodactyl::*)()>(Sexy::CBMemberTranslatorX<DinosaurPterodactyl, void
   (DinosaurPterodactyl::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DinosaurPterodactyl,void(DinosaurPterodactyl::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DinosaurAnkylosaurus, void
   (DinosaurAnkylosaurus::*)()>(Sexy::CBMemberTranslatorX<DinosaurAnkylosaurus, void
   (DinosaurAnkylosaurus::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DinosaurRaptor, void
   (DinosaurRaptor::*)()>(Sexy::CBMemberTranslatorX<DinosaurRaptor, void (DinosaurRaptor::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DinosaurRaptor,void(DinosaurRaptor::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<DinosaurRaptor,void(DinosaurRaptor::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DinosaurStegosaurus, void
   (DinosaurStegosaurus::*)()>(Sexy::CBMemberTranslatorX<DinosaurStegosaurus, void
   (DinosaurStegosaurus::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DinosaurStegosaurus,void(DinosaurStegosaurus::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DinosaurStegosaurus,void(DinosaurStegosaurus::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DinosaurTyrannosaurus, void
   (DinosaurTyrannosaurus::*)()>(Sexy::CBMemberTranslatorX<DinosaurTyrannosaurus, void
   (DinosaurTyrannosaurus::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DinosaurYounger, void
   (DinosaurYounger::*)()>(Sexy::CBMemberTranslatorX<DinosaurYounger, void (DinosaurYounger::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DinosaurYounger,void(DinosaurYounger::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<DinosaurYounger,void(DinosaurYounger::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DinosaurRunner, void
   (DinosaurRunner::*)()>(Sexy::CBMemberTranslatorX<DinosaurRunner, void (DinosaurRunner::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DinosaurRunner,void(DinosaurRunner::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<DinosaurRunner,void(DinosaurRunner::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SharkMinion, void
   (SharkMinion::*)()>(Sexy::CBMemberTranslatorX<SharkMinion, void (SharkMinion::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SharkMinion,void(SharkMinion::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SharkMinion,void(SharkMinion::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieZombossMech_Beach, void
   (ZombieZombossMech_Beach::*)()>(Sexy::CBMemberTranslatorX<ZombieZombossMech_Beach, void
   (ZombieZombossMech_Beach::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieZombossMech_Beach,void(ZombieZombossMech_Beach::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieZombossMech_Beach,void(ZombieZombossMech_Beach::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BowlingMinigameModule, void
   (BowlingMinigameModule::*)()>(Sexy::CBMemberTranslatorX<BowlingMinigameModule, void
   (BowlingMinigameModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BowlingMinigameModule,void(BowlingMinigameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<BowlingMinigameModule,void(BowlingMinigameModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<JamStageMechanic, void
   (JamStageMechanic::*)()>(Sexy::CBMemberTranslatorX<JamStageMechanic, void
   (JamStageMechanic::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<JamStageMechanic,void(JamStageMechanic::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<JamStageMechanic,void(JamStageMechanic::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,
   std::string >, void (Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter, std::string
   >::*)()>(Sexy::CBMemberTranslatorX<Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,
   std::string >, void (Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter, std::string
   >::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,std::string>,void(Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,std::string>::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,std::string>,void(Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,std::string>::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,
   Sexy::IPurchaseDriver::CauseForIncompletion>, void
   (Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,
   Sexy::IPurchaseDriver::CauseForIncompletion>::*)()>(Sexy::CBMemberTranslatorX<Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,
   Sexy::IPurchaseDriver::CauseForIncompletion>, void
   (Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,
   Sexy::IPurchaseDriver::CauseForIncompletion>::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>,void(Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>,void(Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PurchaseBroker, void
   (PurchaseBroker::*)()>(Sexy::CBMemberTranslatorX<PurchaseBroker, void (PurchaseBroker::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PurchaseBroker,void(PurchaseBroker::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PurchaseBroker,void(PurchaseBroker::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RandZombieModule, void
   (RandZombieModule::*)()>(Sexy::CBMemberTranslatorX<RandZombieModule, void
   (RandZombieModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RandZombieModule,void(RandZombieModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RandZombieModule,void(RandZombieModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<WaveManagerModule, void
   (WaveManagerModule::*)()>(Sexy::CBMemberTranslatorX<WaveManagerModule, void
   (WaveManagerModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WaveManagerModule,void(WaveManagerModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WaveManagerModule,void(WaveManagerModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WaveManager, void
   (WaveManager::*)()>(Sexy::CBMemberTranslatorX<WaveManager, void (WaveManager::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WaveManager,void(WaveManager::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<WaveManager,void(WaveManager::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAccessoryUI, void
   (PlantAccessoryUI::*)()>(Sexy::CBMemberTranslatorX<PlantAccessoryUI, void
   (PlantAccessoryUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<HardLevelModule, void
   (HardLevelModule::*)()>(Sexy::CBMemberTranslatorX<HardLevelModule, void (HardLevelModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<HardLevelModule,void(HardLevelModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<HardLevelModule,void(HardLevelModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantTrialModule, void
   (PlantTrialModule::*)()>(Sexy::CBMemberTranslatorX<PlantTrialModule, void
   (PlantTrialModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantTrialModule,void(PlantTrialModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantTrialModule,void(PlantTrialModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantTrialViewUI, void
   (PlantTrialViewUI::*)()>(Sexy::CBMemberTranslatorX<PlantTrialViewUI, void
   (PlantTrialViewUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantTrialViewUI,void(PlantTrialViewUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantTrialViewUI,void(PlantTrialViewUI::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ArcadeModule, void
   (ArcadeModule::*)()>(Sexy::CBMemberTranslatorX<ArcadeModule, void (ArcadeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArcadeModule,void(ArcadeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ArcadeModule,void(ArcadeModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<VaseBreakerFlowActionReadySetBreak, void
   (VaseBreakerFlowActionReadySetBreak::*)()>(Sexy::CBMemberTranslatorX<VaseBreakerFlowActionReadySetBreak,
   void (VaseBreakerFlowActionReadySetBreak::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<VaseBreakerFlowActionReadySetBreak,void(VaseBreakerFlowActionReadySetBreak::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<VaseBreakerFlowActionReadySetBreak,void(VaseBreakerFlowActionReadySetBreak::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<VaseBreakerFlowActionShowNarrative, void
   (VaseBreakerFlowActionShowNarrative::*)()>(Sexy::CBMemberTranslatorX<VaseBreakerFlowActionShowNarrative,
   void (VaseBreakerFlowActionShowNarrative::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<VaseBreakerFlowActionShowNarrative,void(VaseBreakerFlowActionShowNarrative::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<VaseBreakerFlowActionShowNarrative,void(VaseBreakerFlowActionShowNarrative::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<VaseBreakerFlowActionLevelOfDayReward, void
   (VaseBreakerFlowActionLevelOfDayReward::*)()>(Sexy::CBMemberTranslatorX<VaseBreakerFlowActionLevelOfDayReward,
   void (VaseBreakerFlowActionLevelOfDayReward::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<VaseBreakerFlowActionLevelOfDayReward,void(VaseBreakerFlowActionLevelOfDayReward::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<VaseBreakerFlowActionLevelOfDayReward,void(VaseBreakerFlowActionLevelOfDayReward::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<VaseBreakerFlowActionDropPowerUpReward, void
   (VaseBreakerFlowActionDropPowerUpReward::*)()>(Sexy::CBMemberTranslatorX<VaseBreakerFlowActionDropPowerUpReward,
   void (VaseBreakerFlowActionDropPowerUpReward::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<VaseBreakerFlowActionDropPowerUpReward,void(VaseBreakerFlowActionDropPowerUpReward::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<VaseBreakerFlowActionDropPowerUpReward,void(VaseBreakerFlowActionDropPowerUpReward::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<VaseBreakerFlowModule, void
   (VaseBreakerFlowModule::*)()>(Sexy::CBMemberTranslatorX<VaseBreakerFlowModule, void
   (VaseBreakerFlowModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<VaseBreakerFlowModule,void(VaseBreakerFlowModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<VaseBreakerFlowModule,void(VaseBreakerFlowModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<VaseBreakerVictoryOutroModule, void
   (VaseBreakerVictoryOutroModule::*)()>(Sexy::CBMemberTranslatorX<VaseBreakerVictoryOutroModule,
   void (VaseBreakerVictoryOutroModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<VaseBreakerVictoryOutroModule,void(VaseBreakerVictoryOutroModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<VaseBreakerVictoryOutroModule,void(VaseBreakerVictoryOutroModule::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<VaseBreakerModule, void
   (VaseBreakerModule::*)()>(Sexy::CBMemberTranslatorX<VaseBreakerModule, void
   (VaseBreakerModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<VaseBreakerModule,void(VaseBreakerModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<VaseBreakerModule,void(VaseBreakerModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemVase, void
   (GridItemVase::*)()>(Sexy::CBMemberTranslatorX<GridItemVase, void (GridItemVase::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemVase,void(GridItemVase::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemVase,void(GridItemVase::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemCraterTimed, void
   (GridItemCraterTimed::*)()>(Sexy::CBMemberTranslatorX<GridItemCraterTimed, void
   (GridItemCraterTimed::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemCraterTimed,void(GridItemCraterTimed::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemCraterTimed,void(GridItemCraterTimed::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePVPNurse, void
   (ZombiePVPNurse::*)()>(Sexy::CBMemberTranslatorX<ZombiePVPNurse, void (ZombiePVPNurse::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePVPNurse,void(ZombiePVPNurse::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombiePVPNurse,void(ZombiePVPNurse::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePvpWizard, void
   (ZombiePvpWizard::*)()>(Sexy::CBMemberTranslatorX<ZombiePvpWizard, void (ZombiePvpWizard::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePvpWizard,void(ZombiePvpWizard::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombiePvpWizard,void(ZombiePvpWizard::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePVPCannon, void
   (ZombiePVPCannon::*)()>(Sexy::CBMemberTranslatorX<ZombiePVPCannon, void (ZombiePVPCannon::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePVPCannon,void(ZombiePVPCannon::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombiePVPCannon,void(ZombiePVPCannon::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePVPSeagull, void
   (ZombiePVPSeagull::*)()>(Sexy::CBMemberTranslatorX<ZombiePVPSeagull, void
   (ZombiePVPSeagull::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePVPSeagull,void(ZombiePVPSeagull::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombiePVPSeagull,void(ZombiePVPSeagull::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePVPChickenFarmer, void
   (ZombiePVPChickenFarmer::*)()>(Sexy::CBMemberTranslatorX<ZombiePVPChickenFarmer, void
   (ZombiePVPChickenFarmer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePVPChickenFarmer,void(ZombiePVPChickenFarmer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePVPChickenFarmer,void(ZombiePVPChickenFarmer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePVPPirateCaptain, void
   (ZombiePVPPirateCaptain::*)()>(Sexy::CBMemberTranslatorX<ZombiePVPPirateCaptain, void
   (ZombiePVPPirateCaptain::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePVPPirateCaptain,void(ZombiePVPPirateCaptain::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePVPPirateCaptain,void(ZombiePVPPirateCaptain::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieLostCityGuide, void
   (ZombieLostCityGuide::*)()>(Sexy::CBMemberTranslatorX<ZombieLostCityGuide, void
   (ZombieLostCityGuide::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieLostCityGuide,void(ZombieLostCityGuide::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieLostCityGuide,void(ZombieLostCityGuide::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelOfTheDay_LargePinataWidget, void
   (LevelOfTheDay_LargePinataWidget::*)()>(Sexy::CBMemberTranslatorX<LevelOfTheDay_LargePinataWidget,
   void (LevelOfTheDay_LargePinataWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<LevelOfTheDay_LargePinataWidget,void(LevelOfTheDay_LargePinataWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelOfTheDay_LargePinataWidget,void(LevelOfTheDay_LargePinataWidget::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelOfTheDay_ProgressWidget, void
   (LevelOfTheDay_ProgressWidget::*)()>(Sexy::CBMemberTranslatorX<LevelOfTheDay_ProgressWidget, void
   (LevelOfTheDay_ProgressWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelOfTheDay_ProgressWidget,void(LevelOfTheDay_ProgressWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelOfTheDay_ProgressWidget,void(LevelOfTheDay_ProgressWidget::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelOfTheDayRewardDialog, void
   (LevelOfTheDayRewardDialog::*)()>(Sexy::CBMemberTranslatorX<LevelOfTheDayRewardDialog, void
   (LevelOfTheDayRewardDialog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelOfTheDayRewardDialog,void(LevelOfTheDayRewardDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelOfTheDayRewardDialog,void(LevelOfTheDayRewardDialog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelOfTheDayOutro, void
   (LevelOfTheDayOutro::*)()>(Sexy::CBMemberTranslatorX<LevelOfTheDayOutro, void
   (LevelOfTheDayOutro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelOfTheDayOutro,void(LevelOfTheDayOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelOfTheDayOutro,void(LevelOfTheDayOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelOfTheDayModule, void
   (LevelOfTheDayModule::*)()>(Sexy::CBMemberTranslatorX<LevelOfTheDayModule, void
   (LevelOfTheDayModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelOfTheDayModule,void(LevelOfTheDayModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelOfTheDayModule,void(LevelOfTheDayModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActiveNationalDayTab, void
   (ActiveNationalDayTab::*)()>(Sexy::CBMemberTranslatorX<ActiveNationalDayTab, void
   (ActiveNationalDayTab::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActiveNationalDayTab,void(ActiveNationalDayTab::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActiveNationalDayTab,void(ActiveNationalDayTab::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActiveConsumptionTab, void
   (ActiveConsumptionTab::*)()>(Sexy::CBMemberTranslatorX<ActiveConsumptionTab, void
   (ActiveConsumptionTab::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActiveConsumptionTab,void(ActiveConsumptionTab::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActiveConsumptionTab,void(ActiveConsumptionTab::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantPieceCompletionDlg, void
   (PlantPieceCompletionDlg::*)()>(Sexy::CBMemberTranslatorX<PlantPieceCompletionDlg, void
   (PlantPieceCompletionDlg::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantPieceCompletionDlg,void(PlantPieceCompletionDlg::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantPieceCompletionDlg,void(PlantPieceCompletionDlg::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SnakeNode, void (SnakeNode::*)()>(Sexy::CBMemberTranslatorX<SnakeNode,
   void (SnakeNode::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SnakeNode,void(SnakeNode::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SnakeNode,void(SnakeNode::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SnakeModule, void
   (SnakeModule::*)()>(Sexy::CBMemberTranslatorX<SnakeModule, void (SnakeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SnakeModule,void(SnakeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SnakeModule,void(SnakeModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BuyItemUI, void (BuyItemUI::*)()>(Sexy::CBMemberTranslatorX<BuyItemUI,
   void (BuyItemUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BuyItemUI,void(BuyItemUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<BuyItemUI,void(BuyItemUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RechargeGiftUI, void
   (RechargeGiftUI::*)()>(Sexy::CBMemberTranslatorX<RechargeGiftUI, void (RechargeGiftUI::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RechargeGiftUI,void(RechargeGiftUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RechargeGiftUI,void(RechargeGiftUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<EliminateModule, void
   (EliminateModule::*)()>(Sexy::CBMemberTranslatorX<EliminateModule, void (EliminateModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<EliminateModule,void(EliminateModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SeedRainModule, void
   (SeedRainModule::*)()>(Sexy::CBMemberTranslatorX<SeedRainModule, void (SeedRainModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SeedRainModule,void(SeedRainModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SeedRainModule,void(SeedRainModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GlacierModule, void
   (GlacierModule::*)()>(Sexy::CBMemberTranslatorX<GlacierModule, void (GlacierModule::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<GlacierModule,void(GlacierModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GlacierModule,void(GlacierModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MinigameWhackAZombieModule, void
   (MinigameWhackAZombieModule::*)()>(Sexy::CBMemberTranslatorX<MinigameWhackAZombieModule, void
   (MinigameWhackAZombieModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MinigameWhackAZombieModule,void(MinigameWhackAZombieModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MinigameWhackAZombieModule,void(MinigameWhackAZombieModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiverEntitiesManager, void
   (RiverEntitiesManager::*)()>(Sexy::CBMemberTranslatorX<RiverEntitiesManager, void
   (RiverEntitiesManager::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiverEntitiesManager,void(RiverEntitiesManager::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiverEntitiesManager,void(RiverEntitiesManager::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarvingChomper, void
   (StarvingChomper::*)()>(Sexy::CBMemberTranslatorX<StarvingChomper, void (StarvingChomper::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarvingChomper,void(StarvingChomper::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<StarvingChomper,void(StarvingChomper::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiverCrossingIntro, void
   (RiverCrossingIntro::*)()>(Sexy::CBMemberTranslatorX<RiverCrossingIntro, void
   (RiverCrossingIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiverCrossingIntro,void(RiverCrossingIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiverCrossingDodoRider, void
   (RiverCrossingDodoRider::*)()>(Sexy::CBMemberTranslatorX<RiverCrossingDodoRider, void
   (RiverCrossingDodoRider::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiverCrossingModule, void
   (RiverCrossingModule::*)()>(Sexy::CBMemberTranslatorX<RiverCrossingModule, void
   (RiverCrossingModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiverCrossingModule,void(RiverCrossingModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MomotaroRiderModule, void
   (MomotaroRiderModule::*)()>(Sexy::CBMemberTranslatorX<MomotaroRiderModule, void
   (MomotaroRiderModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MomotaroRiderModule,void(MomotaroRiderModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MomotaroRiderModule,void(MomotaroRiderModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LotteryUI, void (LotteryUI::*)()>(Sexy::CBMemberTranslatorX<LotteryUI,
   void (LotteryUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LotteryUI,void(LotteryUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<LotteryUI,void(LotteryUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AccountBindDialog, void
   (AccountBindDialog::*)()>(Sexy::CBMemberTranslatorX<AccountBindDialog, void
   (AccountBindDialog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AccountBindDialog,void(AccountBindDialog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AccountBindDialog,void(AccountBindDialog::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ProfileSummaryComparer, void
   (ProfileSummaryComparer::*)()>(Sexy::CBMemberTranslatorX<ProfileSummaryComparer, void
   (ProfileSummaryComparer::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ProfileSummaryComparer,void(ProfileSummaryComparer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ProfileSummaryComparer,void(ProfileSummaryComparer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SalesButton, void
   (SalesButton::*)()>(Sexy::CBMemberTranslatorX<SalesButton, void (SalesButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SalesButton,void(SalesButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SalesButton,void(SalesButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<SalesUI, void (SalesUI::*)()>(Sexy::CBMemberTranslatorX<SalesUI, void
   (SalesUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<SalesUI,void(SalesUI::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<SalesUI,void(SalesUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_SalesButton, void
   (WorldMap_SalesButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_SalesButton, void
   (WorldMap_SalesButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_SalesButton,void(WorldMap_SalesButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_SalesButton,void(WorldMap_SalesButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<StarConvert, void
   (StarConvert::*)()>(Sexy::CBMemberTranslatorX<StarConvert, void (StarConvert::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<StarConvert,void(StarConvert::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<StarConvert,void(StarConvert::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_StarConvert, void
   (WorldMap_StarConvert::*)()>(Sexy::CBMemberTranslatorX<WorldMap_StarConvert, void
   (WorldMap_StarConvert::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_StarConvert,void(WorldMap_StarConvert::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_StarConvert,void(WorldMap_StarConvert::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieAirbubble, void
   (ZombieAirbubble::*)()>(Sexy::CBMemberTranslatorX<ZombieAirbubble, void (ZombieAirbubble::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieAirbubble,void(ZombieAirbubble::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieAirbubble,void(ZombieAirbubble::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieLollipops, void
   (ZombieLollipops::*)()>(Sexy::CBMemberTranslatorX<ZombieLollipops, void (ZombieLollipops::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieLollipops,void(ZombieLollipops::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieLollipops,void(ZombieLollipops::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieToygun, void
   (ZombieToygun::*)()>(Sexy::CBMemberTranslatorX<ZombieToygun, void (ZombieToygun::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieToygun,void(ZombieToygun::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieToygun,void(ZombieToygun::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_LevelofDay, void
   (WorldMap_LevelofDay::*)()>(Sexy::CBMemberTranslatorX<WorldMap_LevelofDay, void
   (WorldMap_LevelofDay::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_LevelofDay,void(WorldMap_LevelofDay::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_LevelofDay,void(WorldMap_LevelofDay::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ChildrenDayUI, void
   (ChildrenDayUI::*)()>(Sexy::CBMemberTranslatorX<ChildrenDayUI, void (ChildrenDayUI::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<ChildrenDayUI,void(ChildrenDayUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ChildrenDayUI,void(ChildrenDayUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RewardUI, void (RewardUI::*)()>(Sexy::CBMemberTranslatorX<RewardUI,
   void (RewardUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RewardUI,void(RewardUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<RewardUI,void(RewardUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DangerRoomManager, void
   (DangerRoomManager::*)()>(Sexy::CBMemberTranslatorX<DangerRoomManager, void
   (DangerRoomManager::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DangerRoomManager,void(DangerRoomManager::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DangerRoomManager,void(DangerRoomManager::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DangerRoomSeedChooser, void
   (DangerRoomSeedChooser::*)()>(Sexy::CBMemberTranslatorX<DangerRoomSeedChooser, void
   (DangerRoomSeedChooser::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DangerRoomSeedChooser,void(DangerRoomSeedChooser::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DangerRoomSeedChooser,void(DangerRoomSeedChooser::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIDangerRoomSkipLevel, void
   (UIDangerRoomSkipLevel::*)()>(Sexy::CBMemberTranslatorX<UIDangerRoomSkipLevel, void
   (UIDangerRoomSkipLevel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIDangerRoomSkipLevel,void(UIDangerRoomSkipLevel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UIDangerRoomSkipLevel,void(UIDangerRoomSkipLevel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIDangerRoomTrainingSkipLevel, void
   (UIDangerRoomTrainingSkipLevel::*)()>(Sexy::CBMemberTranslatorX<UIDangerRoomTrainingSkipLevel,
   void (UIDangerRoomTrainingSkipLevel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIDangerRoomTrainingSkipLevel,void(UIDangerRoomTrainingSkipLevel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<UIDangerRoomTrainingSkipLevel,void(UIDangerRoomTrainingSkipLevel::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePVPSkill, void
   (ZombiePVPSkill::*)()>(Sexy::CBMemberTranslatorX<ZombiePVPSkill, void (ZombiePVPSkill::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePVPSkill,void(ZombiePVPSkill::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombiePVPSkill,void(ZombiePVPSkill::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVPMapUI, void (PVPMapUI::*)()>(Sexy::CBMemberTranslatorX<PVPMapUI,
   void (PVPMapUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVPMapUI,void(PVPMapUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PVPMapUI,void(PVPMapUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_PVPButton, void
   (WorldMap_PVPButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_PVPButton, void
   (WorldMap_PVPButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_PVPButton,void(WorldMap_PVPButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_PVPButton,void(WorldMap_PVPButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlaybackModule, void
   (PlaybackModule::*)()>(Sexy::CBMemberTranslatorX<PlaybackModule, void (PlaybackModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlaybackModule,void(PlaybackModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlaybackModule,void(PlaybackModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVPManager, void
   (PVPManager::*)()>(Sexy::CBMemberTranslatorX<PVPManager, void (PVPManager::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVPManager,void(PVPManager::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PVPManager,void(PVPManager::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TrainingCampZombieDlg, void
   (TrainingCampZombieDlg::*)()>(Sexy::CBMemberTranslatorX<TrainingCampZombieDlg, void
   (TrainingCampZombieDlg::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TrainingCampZombieDlg,void(TrainingCampZombieDlg::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<TrainingCampZombieDlg,void(TrainingCampZombieDlg::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PvpRankDlg, void
   (PvpRankDlg::*)()>(Sexy::CBMemberTranslatorX<PvpRankDlg, void (PvpRankDlg::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PvpRankDlg,void(PvpRankDlg::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PvpRankDlg,void(PvpRankDlg::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PvpExchangeDlg, void
   (PvpExchangeDlg::*)()>(Sexy::CBMemberTranslatorX<PvpExchangeDlg, void (PvpExchangeDlg::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PvpExchangeDlg,void(PvpExchangeDlg::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PvpExchangeDlg,void(PvpExchangeDlg::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVPLabDlg, void (PVPLabDlg::*)()>(Sexy::CBMemberTranslatorX<PVPLabDlg,
   void (PVPLabDlg::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVPLabDlg,void(PVPLabDlg::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PVPLabDlg,void(PVPLabDlg::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVPBaseUpgrade, void
   (PVPBaseUpgrade::*)()>(Sexy::CBMemberTranslatorX<PVPBaseUpgrade, void (PVPBaseUpgrade::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVPBaseUpgrade,void(PVPBaseUpgrade::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PVPBaseUpgrade,void(PVPBaseUpgrade::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVPEntryDlg, void
   (PVPEntryDlg::*)()>(Sexy::CBMemberTranslatorX<PVPEntryDlg, void (PVPEntryDlg::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVPEntryDlg,void(PVPEntryDlg::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PVPEntryDlg,void(PVPEntryDlg::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVPZombieLevelUpMain, void
   (PVPZombieLevelUpMain::*)()>(Sexy::CBMemberTranslatorX<PVPZombieLevelUpMain, void
   (PVPZombieLevelUpMain::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVPZombieLevelUpMain,void(PVPZombieLevelUpMain::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVPZombieLevelUpMain,void(PVPZombieLevelUpMain::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVPSkillUpgrade, void
   (PVPSkillUpgrade::*)()>(Sexy::CBMemberTranslatorX<PVPSkillUpgrade, void (PVPSkillUpgrade::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVPSkillUpgrade,void(PVPSkillUpgrade::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PVPSkillUpgrade,void(PVPSkillUpgrade::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<IntroArenaBattle, void
   (IntroArenaBattle::*)()>(Sexy::CBMemberTranslatorX<IntroArenaBattle, void
   (IntroArenaBattle::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<IntroArenaBattle,void(IntroArenaBattle::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<IntroArenaBattle,void(IntroArenaBattle::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ArenaBattleModule, void
   (ArenaBattleModule::*)()>(Sexy::CBMemberTranslatorX<ArenaBattleModule, void
   (ArenaBattleModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArenaBattleModule,void(ArenaBattleModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArenaBattleModule,void(ArenaBattleModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArenaPlantModule, void
   (ArenaPlantModule::*)()>(Sexy::CBMemberTranslatorX<ArenaPlantModule, void
   (ArenaPlantModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArenaPlantModule,void(ArenaPlantModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ArenaPlantModule,void(ArenaPlantModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ArenaPVPStartButton, void
   (ArenaPVPStartButton::*)()>(Sexy::CBMemberTranslatorX<ArenaPVPStartButton, void
   (ArenaPVPStartButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArenaPVPStartButton,void(ArenaPVPStartButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArenaPVPStartButton,void(ArenaPVPStartButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArenaOccupyStartButton, void
   (ArenaOccupyStartButton::*)()>(Sexy::CBMemberTranslatorX<ArenaOccupyStartButton, void
   (ArenaOccupyStartButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArenaOccupyStartButton,void(ArenaOccupyStartButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArenaOccupyStartButton,void(ArenaOccupyStartButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArenaOccupyQuitButton, void
   (ArenaOccupyQuitButton::*)()>(Sexy::CBMemberTranslatorX<ArenaOccupyQuitButton, void
   (ArenaOccupyQuitButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArenaOccupyQuitButton,void(ArenaOccupyQuitButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArenaOccupyQuitButton,void(ArenaOccupyQuitButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArenaChangeSpeedButton, void
   (ArenaChangeSpeedButton::*)()>(Sexy::CBMemberTranslatorX<ArenaChangeSpeedButton, void
   (ArenaChangeSpeedButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArenaChangeSpeedButton,void(ArenaChangeSpeedButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArenaChangeSpeedButton,void(ArenaChangeSpeedButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArenaEndingButton, void
   (ArenaEndingButton::*)()>(Sexy::CBMemberTranslatorX<ArenaEndingButton, void
   (ArenaEndingButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArenaEndingButton,void(ArenaEndingButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArenaEndingButton,void(ArenaEndingButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<IntroArenaTutorialBattleModule, void
   (IntroArenaTutorialBattleModule::*)()>(Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule,
   void (IntroArenaTutorialBattleModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelEditor, void
   (LevelEditor::*)()>(Sexy::CBMemberTranslatorX<LevelEditor, void (LevelEditor::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelEditor,void(LevelEditor::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<LevelEditor,void(LevelEditor::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelEditorBoardGrid, void
   (LevelEditorBoardGrid::*)()>(Sexy::CBMemberTranslatorX<LevelEditorBoardGrid, void
   (LevelEditorBoardGrid::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelEditorBoardGrid,void(LevelEditorBoardGrid::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelEditorBoardGrid,void(LevelEditorBoardGrid::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelEditorNormalSeedBank, void
   (LevelEditorNormalSeedBank::*)()>(Sexy::CBMemberTranslatorX<LevelEditorNormalSeedBank, void
   (LevelEditorNormalSeedBank::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelEditorNormalSeedBank,void(LevelEditorNormalSeedBank::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelEditorNormalSeedBank,void(LevelEditorNormalSeedBank::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelEditorZombieSelectList, void
   (LevelEditorZombieSelectList::*)()>(Sexy::CBMemberTranslatorX<LevelEditorZombieSelectList, void
   (LevelEditorZombieSelectList::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelEditorZombieSelectList,void(LevelEditorZombieSelectList::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelEditorZombieSelectList,void(LevelEditorZombieSelectList::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelEditorWaveDisplay, void
   (LevelEditorWaveDisplay::*)()>(Sexy::CBMemberTranslatorX<LevelEditorWaveDisplay, void
   (LevelEditorWaveDisplay::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelEditorWaveDisplay,void(LevelEditorWaveDisplay::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelEditorWaveDisplay,void(LevelEditorWaveDisplay::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelEditorWaveEvent, void
   (LevelEditorWaveEvent::*)()>(Sexy::CBMemberTranslatorX<LevelEditorWaveEvent, void
   (LevelEditorWaveEvent::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelEditorWaveEvent,void(LevelEditorWaveEvent::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelEditorWaveEvent,void(LevelEditorWaveEvent::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LevelEditorVaseBreaker, void
   (LevelEditorVaseBreaker::*)()>(Sexy::CBMemberTranslatorX<LevelEditorVaseBreaker, void
   (LevelEditorVaseBreaker::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LevelEditorVaseBreaker,void(LevelEditorVaseBreaker::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<LevelEditorVaseBreaker,void(LevelEditorVaseBreaker::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<VolcanoSnowBattleModule, void
   (VolcanoSnowBattleModule::*)()>(Sexy::CBMemberTranslatorX<VolcanoSnowBattleModule, void
   (VolcanoSnowBattleModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActivityLevelsChoose, void
   (ActivityLevelsChoose::*)()>(Sexy::CBMemberTranslatorX<ActivityLevelsChoose, void
   (ActivityLevelsChoose::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActivityLevelsChoose,void(ActivityLevelsChoose::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActivityLevelsChoose,void(ActivityLevelsChoose::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<BossKillTimeChallengeModule, void
   (BossKillTimeChallengeModule::*)()>(Sexy::CBMemberTranslatorX<BossKillTimeChallengeModule, void
   (BossKillTimeChallengeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DinosaurDangerModule, void
   (DinosaurDangerModule::*)()>(Sexy::CBMemberTranslatorX<DinosaurDangerModule, void
   (DinosaurDangerModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DinosaurDangerModule,void(DinosaurDangerModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DinosaurDangerModule,void(DinosaurDangerModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<LotteryPanel, void
   (LotteryPanel::*)()>(Sexy::CBMemberTranslatorX<LotteryPanel, void (LotteryPanel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<LotteryPanel,void(LotteryPanel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<LotteryPanel,void(LotteryPanel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GeilivableLottery, void
   (GeilivableLottery::*)()>(Sexy::CBMemberTranslatorX<GeilivableLottery, void
   (GeilivableLottery::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GeilivableLottery,void(GeilivableLottery::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GeilivableLottery,void(GeilivableLottery::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TransGenosisUI, void
   (TransGenosisUI::*)()>(Sexy::CBMemberTranslatorX<TransGenosisUI, void (TransGenosisUI::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TransGenosisUI,void(TransGenosisUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TransGenosisUI,void(TransGenosisUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TGPieceTableUI, void
   (TGPieceTableUI::*)()>(Sexy::CBMemberTranslatorX<TGPieceTableUI, void (TGPieceTableUI::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TGPieceTableUI,void(TGPieceTableUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TGPieceTableUI,void(TGPieceTableUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<HintUI, void (HintUI::*)()>(Sexy::CBMemberTranslatorX<HintUI, void
   (HintUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<HintUI,void(HintUI::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<HintUI,void(HintUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GoldenEggUI, void
   (GoldenEggUI::*)()>(Sexy::CBMemberTranslatorX<GoldenEggUI, void (GoldenEggUI::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GoldenEggUI,void(GoldenEggUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GoldenEggUI,void(GoldenEggUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<EASquaredImpl, void
   (EASquaredImpl::*)()>(Sexy::CBMemberTranslatorX<EASquaredImpl, void (EASquaredImpl::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<EASquaredImpl,void(EASquaredImpl::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<EASquaredImpl,void(EASquaredImpl::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<EASquaredButton, void
   (EASquaredButton::*)()>(Sexy::CBMemberTranslatorX<EASquaredButton, void (EASquaredButton::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<EASquaredButton,void(EASquaredButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<EASquaredButton,void(EASquaredButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<EASquaredCoinBankButton, void
   (EASquaredCoinBankButton::*)()>(Sexy::CBMemberTranslatorX<EASquaredCoinBankButton, void
   (EASquaredCoinBankButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<EASquaredCoinBankButton,void(EASquaredCoinBankButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<EASquaredCoinBankButton,void(EASquaredCoinBankButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_AdsRewardButton, void
   (WorldMap_AdsRewardButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_AdsRewardButton, void
   (WorldMap_AdsRewardButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_AdsRewardButton,void(WorldMap_AdsRewardButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_AdsRewardButton,void(WorldMap_AdsRewardButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_AdsLotteryButton, void
   (WorldMap_AdsLotteryButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_AdsLotteryButton, void
   (WorldMap_AdsLotteryButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_AdsLotteryButton,void(WorldMap_AdsLotteryButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_AdsLotteryButton,void(WorldMap_AdsLotteryButton::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UICukePackage, void
   (UICukePackage::*)()>(Sexy::CBMemberTranslatorX<UICukePackage, void (UICukePackage::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<UICukePackage,void(UICukePackage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UICukePackage,void(UICukePackage::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AuthMgr, void (AuthMgr::*)()>(Sexy::CBMemberTranslatorX<AuthMgr, void
   (AuthMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AuthMgr,void(AuthMgr::*)()>(Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<AuthMgr,void(AuthMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NetworkItemMgr, void
   (NetworkItemMgr::*)()>(Sexy::CBMemberTranslatorX<NetworkItemMgr, void (NetworkItemMgr::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NetworkItemMgr,void(NetworkItemMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<NetworkItemMgr,void(NetworkItemMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TwoYearBirthday, void
   (TwoYearBirthday::*)()>(Sexy::CBMemberTranslatorX<TwoYearBirthday, void (TwoYearBirthday::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TwoYearBirthday,void(TwoYearBirthday::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TwoYearBirthday,void(TwoYearBirthday::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ShareRewardView, void
   (ShareRewardView::*)()>(Sexy::CBMemberTranslatorX<ShareRewardView, void (ShareRewardView::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ShareRewardView,void(ShareRewardView::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ShareRewardView,void(ShareRewardView::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantBundleUI, void
   (PlantBundleUI::*)()>(Sexy::CBMemberTranslatorX<PlantBundleUI, void (PlantBundleUI::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<PlantBundleUI,void(PlantBundleUI::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantBundleUI,void(PlantBundleUI::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<IntroWorldCup, void
   (IntroWorldCup::*)()>(Sexy::CBMemberTranslatorX<IntroWorldCup, void (IntroWorldCup::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<IntroWorldCup,void(IntroWorldCup::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<IntroWorldCup,void(IntroWorldCup::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PuzzleRotatePanel, void
   (PuzzleRotatePanel::*)()>(Sexy::CBMemberTranslatorX<PuzzleRotatePanel, void
   (PuzzleRotatePanel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PuzzleRotatePanel,void(PuzzleRotatePanel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PuzzleRotatePanel,void(PuzzleRotatePanel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RichmanTileEvent_MiniGame, void
   (RichmanTileEvent_MiniGame::*)()>(Sexy::CBMemberTranslatorX<RichmanTileEvent_MiniGame, void
   (RichmanTileEvent_MiniGame::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RichmanTileEvent_MiniGame,void(RichmanTileEvent_MiniGame::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RichmanTileEvent_MiniGame,void(RichmanTileEvent_MiniGame::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RichmanTileEvent_BossBattle, void
   (RichmanTileEvent_BossBattle::*)()>(Sexy::CBMemberTranslatorX<RichmanTileEvent_BossBattle, void
   (RichmanTileEvent_BossBattle::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RichmanTileEvent_BossBattle,void(RichmanTileEvent_BossBattle::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RichmanTileEvent_BossBattle,void(RichmanTileEvent_BossBattle::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RichmanTileEvent_WorldLevel, void
   (RichmanTileEvent_WorldLevel::*)()>(Sexy::CBMemberTranslatorX<RichmanTileEvent_WorldLevel, void
   (RichmanTileEvent_WorldLevel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RichmanTileEvent_WorldLevel,void(RichmanTileEvent_WorldLevel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RichmanTileEvent_WorldLevel,void(RichmanTileEvent_WorldLevel::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RichmanTileEvent_GuessGame, void
   (RichmanTileEvent_GuessGame::*)()>(Sexy::CBMemberTranslatorX<RichmanTileEvent_GuessGame, void
   (RichmanTileEvent_GuessGame::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RichmanTileEvent_GuessGame,void(RichmanTileEvent_GuessGame::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RichmanTileEvent_GuessGame,void(RichmanTileEvent_GuessGame::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DiscountShopContentWidget, void
   (DiscountShopContentWidget::*)()>(Sexy::CBMemberTranslatorX<DiscountShopContentWidget, void
   (DiscountShopContentWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DiscountShopContentWidget,void(DiscountShopContentWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DiscountShopContentWidget,void(DiscountShopContentWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DiscountShopContentWidgetNew, void
   (DiscountShopContentWidgetNew::*)()>(Sexy::CBMemberTranslatorX<DiscountShopContentWidgetNew, void
   (DiscountShopContentWidgetNew::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DiscountShopContentWidgetNew,void(DiscountShopContentWidgetNew::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DiscountShopContentWidgetNew,void(DiscountShopContentWidgetNew::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantAdventureMgr, void
   (PlantAdventureMgr::*)()>(Sexy::CBMemberTranslatorX<PlantAdventureMgr, void
   (PlantAdventureMgr::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantAdventureMgr,void(PlantAdventureMgr::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantAdventureMgr,void(PlantAdventureMgr::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantDefeatZombieChallenge, void
   (PlantDefeatZombieChallenge::*)()>(Sexy::CBMemberTranslatorX<PlantDefeatZombieChallenge, void
   (PlantDefeatZombieChallenge::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantDefeatZombieChallenge,void(PlantDefeatZombieChallenge::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantDefeatZombieChallenge,void(PlantDefeatZombieChallenge::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ1ModeOutro, void
   (PVZ1ModeOutro::*)()>(Sexy::CBMemberTranslatorX<PVZ1ModeOutro, void (PVZ1ModeOutro::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ1ModeOutro,void(PVZ1ModeOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PVZ1ModeOutro,void(PVZ1ModeOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<TimeEnergyModule, void
   (TimeEnergyModule::*)()>(Sexy::CBMemberTranslatorX<TimeEnergyModule, void
   (TimeEnergyModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<TimeEnergyModule,void(TimeEnergyModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<TimeEnergyModule,void(TimeEnergyModule::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieElecShieldGenerator, void
   (ZombieElecShieldGenerator::*)()>(Sexy::CBMemberTranslatorX<ZombieElecShieldGenerator, void
   (ZombieElecShieldGenerator::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieElecShieldGenerator,void(ZombieElecShieldGenerator::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieElecShieldGenerator,void(ZombieElecShieldGenerator::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<InitialGridItemWizardCrucible, void
   (InitialGridItemWizardCrucible::*)()>(Sexy::CBMemberTranslatorX<InitialGridItemWizardCrucible,
   void (InitialGridItemWizardCrucible::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<InitialGridItemWizardCrucible,void(InitialGridItemWizardCrucible::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<InitialGridItemWizardCrucible,void(InitialGridItemWizardCrucible::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePumpkinScarecrowBird, void
   (ZombiePumpkinScarecrowBird::*)()>(Sexy::CBMemberTranslatorX<ZombiePumpkinScarecrowBird, void
   (ZombiePumpkinScarecrowBird::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ProtectTheGridItemChallengeModule, void
   (ProtectTheGridItemChallengeModule::*)()>(Sexy::CBMemberTranslatorX<ProtectTheGridItemChallengeModule,
   void (ProtectTheGridItemChallengeModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<ProtectTheGridItemChallengeModule,void(ProtectTheGridItemChallengeModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ProtectTheGridItemChallengeModule,void(ProtectTheGridItemChallengeModule::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemZombieTent, void
   (GridItemZombieTent::*)()>(Sexy::CBMemberTranslatorX<GridItemZombieTent, void
   (GridItemZombieTent::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemZombieTent,void(GridItemZombieTent::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemZombieTent,void(GridItemZombieTent::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemFestivalZombieTent, void
   (GridItemFestivalZombieTent::*)()>(Sexy::CBMemberTranslatorX<GridItemFestivalZombieTent, void
   (GridItemFestivalZombieTent::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemFestivalZombieTent,void(GridItemFestivalZombieTent::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemFestivalZombieTent,void(GridItemFestivalZombieTent::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ArtifactBeeEntity, void
   (ArtifactBeeEntity::*)()>(Sexy::CBMemberTranslatorX<ArtifactBeeEntity, void
   (ArtifactBeeEntity::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ArtifactBeeEntity,void(ArtifactBeeEntity::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ArtifactBeeEntity,void(ArtifactBeeEntity::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemWisp, void
   (GridItemWisp::*)()>(Sexy::CBMemberTranslatorX<GridItemWisp, void (GridItemWisp::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemWisp,void(GridItemWisp::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemWisp,void(GridItemWisp::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantPowerVine, void
   (PlantPowerVine::*)()>(Sexy::CBMemberTranslatorX<PlantPowerVine, void (PlantPowerVine::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantPowerVine,void(PlantPowerVine::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantPowerVine,void(PlantPowerVine::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantSarracenia, void
   (PlantSarracenia::*)()>(Sexy::CBMemberTranslatorX<PlantSarracenia, void (PlantSarracenia::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantSarracenia,void(PlantSarracenia::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantSarracenia,void(PlantSarracenia::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantTwinsHoneySuckle, void
   (PlantTwinsHoneySuckle::*)()>(Sexy::CBMemberTranslatorX<PlantTwinsHoneySuckle, void
   (PlantTwinsHoneySuckle::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantTwinsHoneySuckle,void(PlantTwinsHoneySuckle::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantTwinsHoneySuckle,void(PlantTwinsHoneySuckle::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<DevilsParasiteEntity, void
   (DevilsParasiteEntity::*)()>(Sexy::CBMemberTranslatorX<DevilsParasiteEntity, void
   (DevilsParasiteEntity::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<DevilsParasiteEntity,void(DevilsParasiteEntity::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<DevilsParasiteEntity,void(DevilsParasiteEntity::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<RiftaShopCommonWidget, void
   (RiftaShopCommonWidget::*)()>(Sexy::CBMemberTranslatorX<RiftaShopCommonWidget, void
   (RiftaShopCommonWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<RiftaShopCommonWidget,void(RiftaShopCommonWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<RiftaShopCommonWidget,void(RiftaShopCommonWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<WorldMap_PlantWarsInfoButton, void
   (WorldMap_PlantWarsInfoButton::*)()>(Sexy::CBMemberTranslatorX<WorldMap_PlantWarsInfoButton, void
   (WorldMap_PlantWarsInfoButton::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<WorldMap_PlantWarsInfoButton,void(WorldMap_PlantWarsInfoButton::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<WorldMap_PlantWarsInfoButton,void(WorldMap_PlantWarsInfoButton::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantWarsModule, void
   (PlantWarsModule::*)()>(Sexy::CBMemberTranslatorX<PlantWarsModule, void (PlantWarsModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantWarsModule,void(PlantWarsModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantWarsModule,void(PlantWarsModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantWarsOutro, void
   (PlantWarsOutro::*)()>(Sexy::CBMemberTranslatorX<PlantWarsOutro, void (PlantWarsOutro::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantWarsOutro,void(PlantWarsOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<PlantWarsOutro,void(PlantWarsOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantWarsFadeOutOutroModule, void
   (PlantWarsFadeOutOutroModule::*)()>(Sexy::CBMemberTranslatorX<PlantWarsFadeOutOutroModule, void
   (PlantWarsFadeOutOutroModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantWarsFadeOutOutroModule,void(PlantWarsFadeOutOutroModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantWarsFadeOutOutroModule,void(PlantWarsFadeOutOutroModule::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PlantWarsFadeOutOutroModule, void
   (FadeOutOutroModule::*)()>(Sexy::CBMemberTranslatorX<PlantWarsFadeOutOutroModule, void
   (FadeOutOutroModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PlantWarsFadeOutOutroModule,void(FadeOutOutroModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PlantWarsFadeOutOutroModule,void(FadeOutOutroModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<AnimateArtifactMower, void
   (AnimateArtifactMower::*)()>(Sexy::CBMemberTranslatorX<AnimateArtifactMower, void
   (AnimateArtifactMower::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<AnimateArtifactMower,void(AnimateArtifactMower::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<AnimateArtifactMower,void(AnimateArtifactMower::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ1ModeShopCommonWidget, void
   (PVZ1ModeShopCommonWidget::*)()>(Sexy::CBMemberTranslatorX<PVZ1ModeShopCommonWidget, void
   (PVZ1ModeShopCommonWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ1ModeShopCommonWidget,void(PVZ1ModeShopCommonWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ1ModeShopCommonWidget,void(PVZ1ModeShopCommonWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CustomLevelShopCommonWidget, void
   (CustomLevelShopCommonWidget::*)()>(Sexy::CBMemberTranslatorX<CustomLevelShopCommonWidget, void
   (CustomLevelShopCommonWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CustomLevelShopCommonWidget,void(CustomLevelShopCommonWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CustomLevelShopCommonWidget,void(CustomLevelShopCommonWidget::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ1ModeSelectLevel, void
   (PVZ1ModeSelectLevel::*)()>(Sexy::CBMemberTranslatorX<PVZ1ModeSelectLevel, void
   (PVZ1ModeSelectLevel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ1ModeSelectLevel,void(PVZ1ModeSelectLevel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ1ModeSelectLevel,void(PVZ1ModeSelectLevel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIPennyClassroom, void
   (UIPennyClassroom::*)()>(Sexy::CBMemberTranslatorX<UIPennyClassroom, void
   (UIPennyClassroom::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIPennyClassroom,void(UIPennyClassroom::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIPennyClassroom,void(UIPennyClassroom::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<PennyClassroomShopCommonWidget, void
   (PennyClassroomShopCommonWidget::*)()>(Sexy::CBMemberTranslatorX<PennyClassroomShopCommonWidget,
   void (PennyClassroomShopCommonWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PennyClassroomShopCommonWidget,void(PennyClassroomShopCommonWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PennyClassroomShopCommonWidget,void(PennyClassroomShopCommonWidget::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ2UnchartedModeOutro, void
   (PVZ2UnchartedModeOutro::*)()>(Sexy::CBMemberTranslatorX<PVZ2UnchartedModeOutro, void
   (PVZ2UnchartedModeOutro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ2UnchartedModeSelectLevel, void
   (PVZ2UnchartedModeSelectLevel::*)()>(Sexy::CBMemberTranslatorX<PVZ2UnchartedModeSelectLevel, void
   (PVZ2UnchartedModeSelectLevel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ2UnchartedModeSelectLevel,void(PVZ2UnchartedModeSelectLevel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ2UnchartedModeSelectLevel,void(PVZ2UnchartedModeSelectLevel::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ2UnchartedModeSelectLevelAnniversary, void
   (PVZ2UnchartedModeSelectLevelAnniversary::*)()>(Sexy::CBMemberTranslatorX<PVZ2UnchartedModeSelectLevelAnniversary,
   void (PVZ2UnchartedModeSelectLevelAnniversary::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<PVZ2UnchartedModeSelectLevelAnniversary,void(PVZ2UnchartedModeSelectLevelAnniversary::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ2UnchartedModeSelectLevelAnniversary,void(PVZ2UnchartedModeSelectLevelAnniversary::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CardGameModule, void
   (CardGameModule::*)()>(Sexy::CBMemberTranslatorX<CardGameModule, void (CardGameModule::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CardGameModule,void(CardGameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CardGameModule,void(CardGameModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ1SeeingStarsModule, void
   (PVZ1SeeingStarsModule::*)()>(Sexy::CBMemberTranslatorX<PVZ1SeeingStarsModule, void
   (PVZ1SeeingStarsModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ1SeeingStarsModule,void(PVZ1SeeingStarsModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ1SeeingStarsModule,void(PVZ1SeeingStarsModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<NewBowlingMinigameModule, void
   (NewBowlingMinigameModule::*)()>(Sexy::CBMemberTranslatorX<NewBowlingMinigameModule, void
   (NewBowlingMinigameModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<NewBowlingMinigameModule,void(NewBowlingMinigameModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<NewBowlingMinigameModule,void(NewBowlingMinigameModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CardGameOutro, void
   (CardGameOutro::*)()>(Sexy::CBMemberTranslatorX<CardGameOutro, void (CardGameOutro::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<CardGameOutro,void(CardGameOutro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<CardGameOutro,void(CardGameOutro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CardGameRoundModule, void
   (CardGameRoundModule::*)()>(Sexy::CBMemberTranslatorX<CardGameRoundModule, void
   (CardGameRoundModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CardGameRoundModule,void(CardGameRoundModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CardGameRoundModule,void(CardGameRoundModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemCardGameZombie, void
   (GridItemCardGameZombie::*)()>(Sexy::CBMemberTranslatorX<GridItemCardGameZombie, void
   (GridItemCardGameZombie::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemCardGameZombie,void(GridItemCardGameZombie::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemCardGameZombie,void(GridItemCardGameZombie::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemCardGameZombieWind, void
   (GridItemCardGameZombieWind::*)()>(Sexy::CBMemberTranslatorX<GridItemCardGameZombieWind, void
   (GridItemCardGameZombieWind::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemCardGameZombieWind,void(GridItemCardGameZombieWind::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemCardGameZombieWind,void(GridItemCardGameZombieWind::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemCardGameZombieFlag, void
   (GridItemCardGameZombieFlag::*)()>(Sexy::CBMemberTranslatorX<GridItemCardGameZombieFlag, void
   (GridItemCardGameZombieFlag::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemCardGameZombieFlag,void(GridItemCardGameZombieFlag::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemCardGameZombieFlag,void(GridItemCardGameZombieFlag::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemCardGameZombieBarrel, void
   (GridItemCardGameZombieBarrel::*)()>(Sexy::CBMemberTranslatorX<GridItemCardGameZombieBarrel, void
   (GridItemCardGameZombieBarrel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemCardGameZombieBarrel,void(GridItemCardGameZombieBarrel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemCardGameZombieBarrel,void(GridItemCardGameZombieBarrel::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemCardGameZombieArchmage, void
   (GridItemCardGameZombieArchmage::*)()>(Sexy::CBMemberTranslatorX<GridItemCardGameZombieArchmage,
   void (GridItemCardGameZombieArchmage::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemCardGameZombieArchmage,void(GridItemCardGameZombieArchmage::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemCardGameZombieArchmage,void(GridItemCardGameZombieArchmage::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemCardGameZombieCannon, void
   (GridItemCardGameZombieCannon::*)()>(Sexy::CBMemberTranslatorX<GridItemCardGameZombieCannon, void
   (GridItemCardGameZombieCannon::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemCardGameZombieCannon,void(GridItemCardGameZombieCannon::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemCardGameZombieCannon,void(GridItemCardGameZombieCannon::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemCardGameZombieChickenFarmer, void
   (GridItemCardGameZombieChickenFarmer::*)()>(Sexy::CBMemberTranslatorX<GridItemCardGameZombieChickenFarmer,
   void (GridItemCardGameZombieChickenFarmer::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GridItemCardGameZombieChickenFarmer,void(GridItemCardGameZombieChickenFarmer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemCardGameZombieChickenFarmer,void(GridItemCardGameZombieChickenFarmer::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemCardGameZombieMechFootball, void
   (GridItemCardGameZombieMechFootball::*)()>(Sexy::CBMemberTranslatorX<GridItemCardGameZombieMechFootball,
   void (GridItemCardGameZombieMechFootball::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GridItemCardGameZombieMechFootball,void(GridItemCardGameZombieMechFootball::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemCardGameZombieMechFootball,void(GridItemCardGameZombieMechFootball::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemCardGameZombieMirrorQueen, void
   (GridItemCardGameZombieMirrorQueen::*)()>(Sexy::CBMemberTranslatorX<GridItemCardGameZombieMirrorQueen,
   void (GridItemCardGameZombieMirrorQueen::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<GridItemCardGameZombieMirrorQueen,void(GridItemCardGameZombieMirrorQueen::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemCardGameZombieMirrorQueen,void(GridItemCardGameZombieMirrorQueen::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CardGameSelectLevel, void
   (CardGameSelectLevel::*)()>(Sexy::CBMemberTranslatorX<CardGameSelectLevel, void
   (CardGameSelectLevel::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CardGameSelectLevel,void(CardGameSelectLevel::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CardGameSelectLevel,void(CardGameSelectLevel::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<CornucopiaShopCommonWidget, void
   (CornucopiaShopCommonWidget::*)()>(Sexy::CBMemberTranslatorX<CornucopiaShopCommonWidget, void
   (CornucopiaShopCommonWidget::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<CornucopiaShopCommonWidget,void(CornucopiaShopCommonWidget::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<CornucopiaShopCommonWidget,void(CornucopiaShopCommonWidget::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UICornucopia, void
   (UICornucopia::*)()>(Sexy::CBMemberTranslatorX<UICornucopia, void (UICornucopia::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UICornucopia,void(UICornucopia::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UICornucopia,void(UICornucopia::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIInvitation, void
   (UIInvitation::*)()>(Sexy::CBMemberTranslatorX<UIInvitation, void (UIInvitation::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIInvitation,void(UIInvitation::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIInvitation,void(UIInvitation::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIFutureGiftShop, void
   (UIFutureGiftShop::*)()>(Sexy::CBMemberTranslatorX<UIFutureGiftShop, void
   (UIFutureGiftShop::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIFutureGiftShop,void(UIFutureGiftShop::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIFutureGiftShop,void(UIFutureGiftShop::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<UIPennyGiftBox, void
   (UIPennyGiftBox::*)()>(Sexy::CBMemberTranslatorX<UIPennyGiftBox, void (UIPennyGiftBox::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIPennyGiftBox,void(UIPennyGiftBox::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIPennyGiftBox,void(UIPennyGiftBox::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UITourismOctober, void
   (UITourismOctober::*)()>(Sexy::CBMemberTranslatorX<UITourismOctober, void
   (UITourismOctober::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UITourismOctober,void(UITourismOctober::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UITourismOctober,void(UITourismOctober::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<UIPartyAssist, void
   (UIPartyAssist::*)()>(Sexy::CBMemberTranslatorX<UIPartyAssist, void (UIPartyAssist::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<UIPartyAssist,void(UIPartyAssist::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIPartyAssist,void(UIPartyAssist::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UILuckyChest, void
   (UILuckyChest::*)()>(Sexy::CBMemberTranslatorX<UILuckyChest, void (UILuckyChest::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UILuckyChest,void(UILuckyChest::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UILuckyChest,void(UILuckyChest::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActivityCollectionLuckyChest, void
   (ActivityCollectionLuckyChest::*)()>(Sexy::CBMemberTranslatorX<ActivityCollectionLuckyChest, void
   (ActivityCollectionLuckyChest::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActivityCollectionLuckyChest,void(ActivityCollectionLuckyChest::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActivityCollectionLuckyChest,void(ActivityCollectionLuckyChest::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<UIAutumnHarvest, void
   (UIAutumnHarvest::*)()>(Sexy::CBMemberTranslatorX<UIAutumnHarvest, void (UIAutumnHarvest::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<UIAutumnHarvest,void(UIAutumnHarvest::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<UIAutumnHarvest,void(UIAutumnHarvest::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieFairyTaleImp, void
   (ZombieFairyTaleImp::*)()>(Sexy::CBMemberTranslatorX<ZombieFairyTaleImp, void
   (ZombieFairyTaleImp::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieFairyTaleImp,void(ZombieFairyTaleImp::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieFairyTaleImp,void(ZombieFairyTaleImp::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieFairyTaleWitch, void
   (ZombieFairyTaleWitch::*)()>(Sexy::CBMemberTranslatorX<ZombieFairyTaleWitch, void
   (ZombieFairyTaleWitch::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieFairyTaleWitch,void(ZombieFairyTaleWitch::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieFairyTaleWitch,void(ZombieFairyTaleWitch::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePerfumer, void
   (ZombiePerfumer::*)()>(Sexy::CBMemberTranslatorX<ZombiePerfumer, void (ZombiePerfumer::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePerfumer,void(ZombiePerfumer::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombiePerfumer,void(ZombiePerfumer::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieToxicWater, void
   (ZombieToxicWater::*)()>(Sexy::CBMemberTranslatorX<ZombieToxicWater, void
   (ZombieToxicWater::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieToxicWater,void(ZombieToxicWater::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieToxicWater,void(ZombieToxicWater::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieGliding, void
   (ZombieGliding::*)()>(Sexy::CBMemberTranslatorX<ZombieGliding, void (ZombieGliding::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieGliding,void(ZombieGliding::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieGliding,void(ZombieGliding::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieJalapeno, void
   (ZombieJalapeno::*)()>(Sexy::CBMemberTranslatorX<ZombieJalapeno, void (ZombieJalapeno::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieJalapeno,void(ZombieJalapeno::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieJalapeno,void(ZombieJalapeno::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieExplodenut, void
   (ZombieExplodenut::*)()>(Sexy::CBMemberTranslatorX<ZombieExplodenut, void
   (ZombieExplodenut::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieExplodenut,void(ZombieExplodenut::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieExplodenut,void(ZombieExplodenut::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieHanabi, void
   (ZombieHanabi::*)()>(Sexy::CBMemberTranslatorX<ZombieHanabi, void (ZombieHanabi::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieHanabi,void(ZombieHanabi::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieHanabi,void(ZombieHanabi::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieOnmyoji, void
   (ZombieOnmyoji::*)()>(Sexy::CBMemberTranslatorX<ZombieOnmyoji, void (ZombieOnmyoji::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieOnmyoji,void(ZombieOnmyoji::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieOnmyoji,void(ZombieOnmyoji::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieWalkActionHandler, void
   (ZombieWalkActionHandler::*)()>(Sexy::CBMemberTranslatorX<ZombieWalkActionHandler, void
   (ZombieWalkActionHandler::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieWalkActionHandler,void(ZombieWalkActionHandler::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieWalkActionHandler,void(ZombieWalkActionHandler::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieStunActionHandler, void
   (ZombieStunActionHandler::*)()>(Sexy::CBMemberTranslatorX<ZombieStunActionHandler, void
   (ZombieStunActionHandler::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieStunActionHandler,void(ZombieStunActionHandler::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieStunActionHandler,void(ZombieStunActionHandler::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemZombossRobotBall, void
   (GridItemZombossRobotBall::*)()>(Sexy::CBMemberTranslatorX<GridItemZombossRobotBall, void
   (GridItemZombossRobotBall::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemZombossRobotBall,void(GridItemZombossRobotBall::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<GridItemZombossRobotBall,void(GridItemZombossRobotBall::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePumpkinKnight, void
   (ZombiePumpkinKnight::*)()>(Sexy::CBMemberTranslatorX<ZombiePumpkinKnight, void
   (ZombiePumpkinKnight::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombiePumpkinKnightGhost, void
   (ZombiePumpkinKnightGhost::*)()>(Sexy::CBMemberTranslatorX<ZombiePumpkinKnightGhost, void
   (ZombiePumpkinKnightGhost::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombiePumpkinKnightGhost,void(ZombiePumpkinKnightGhost::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombiePumpkinKnightGhost,void(ZombiePumpkinKnightGhost::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieVan, void (ZombieVan::*)()>(Sexy::CBMemberTranslatorX<ZombieVan,
   void (ZombieVan::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieVan,void(ZombieVan::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<VanMistSubsystem, void
   (VanMistSubsystem::*)()>(Sexy::CBMemberTranslatorX<VanMistSubsystem, void
   (VanMistSubsystem::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<VanMistSubsystem,void(VanMistSubsystem::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<VanMistSubsystem,void(VanMistSubsystem::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieParkour, void
   (ZombieParkour::*)()>(Sexy::CBMemberTranslatorX<ZombieParkour, void (ZombieParkour::*)()> const&)
    */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieParkour,void(ZombieParkour::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieParkour,void(ZombieParkour::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieBungee, void
   (ZombieBungee::*)()>(Sexy::CBMemberTranslatorX<ZombieBungee, void (ZombieBungee::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieBungee,void(ZombieBungee::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<ZombieBungee,void(ZombieBungee::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<GridItemHydraFog, void
   (GridItemHydraFog::*)()>(Sexy::CBMemberTranslatorX<GridItemHydraFog, void
   (GridItemHydraFog::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<GridItemHydraFog,void(GridItemHydraFog::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<GridItemHydraFog,void(GridItemHydraFog::*)()>::thunk
  ;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombossHydraSprayActionHandler, void
   (ZombossHydraSprayActionHandler::*)()>(Sexy::CBMemberTranslatorX<ZombossHydraSprayActionHandler,
   void (ZombossHydraSprayActionHandler::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombossHydraSprayActionHandler,void(ZombossHydraSprayActionHandler::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombossHydraSprayActionHandler,void(ZombossHydraSprayActionHandler::*)()>
       ::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieZombossMech_Hydra_Head, void
   (ZombieZombossMech_Hydra_Head::*)()>(Sexy::CBMemberTranslatorX<ZombieZombossMech_Hydra_Head, void
   (ZombieZombossMech_Hydra_Head::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieZombossMech_Hydra_Head,void(ZombieZombossMech_Hydra_Head::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieZombossMech_Hydra_Head,void(ZombieZombossMech_Hydra_Head::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<HydraGridMirror, void
   (HydraGridMirror::*)()>(Sexy::CBMemberTranslatorX<HydraGridMirror, void (HydraGridMirror::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<HydraGridMirror,void(HydraGridMirror::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<HydraGridMirror,void(HydraGridMirror::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ZombieZombossMech_Hydra, void
   (ZombieZombossMech_Hydra::*)()>(Sexy::CBMemberTranslatorX<ZombieZombossMech_Hydra, void
   (ZombieZombossMech_Hydra::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ZombieZombossMech_Hydra,void(ZombieZombossMech_Hydra::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ZombieZombossMech_Hydra,void(ZombieZombossMech_Hydra::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<PVZ1CopycatsModule, void
   (PVZ1CopycatsModule::*)()>(Sexy::CBMemberTranslatorX<PVZ1CopycatsModule, void
   (PVZ1CopycatsModule::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<PVZ1CopycatsModule,void(PVZ1CopycatsModule::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<PVZ1CopycatsModule,void(PVZ1CopycatsModule::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<MinigameCopycatsTutorialIntro, void
   (MinigameCopycatsTutorialIntro::*)()>(Sexy::CBMemberTranslatorX<MinigameCopycatsTutorialIntro,
   void (MinigameCopycatsTutorialIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ResilienceTutorialIntro, void
   (ResilienceTutorialIntro::*)()>(Sexy::CBMemberTranslatorX<ResilienceTutorialIntro, void
   (ResilienceTutorialIntro::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<ActivityDescriptionManager, void
   (ActivityDescriptionManager::*)()>(Sexy::CBMemberTranslatorX<ActivityDescriptionManager, void
   (ActivityDescriptionManager::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<ActivityDescriptionManager,void(ActivityDescriptionManager::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<ActivityDescriptionManager,void(ActivityDescriptionManager::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)()>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Lua::LuaUpdater, void
   (Lua::LuaUpdater::*)()>(Sexy::CBMemberTranslatorX<Lua::LuaUpdater, void (Lua::LuaUpdater::*)()>
   const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Lua::LuaUpdater,void(Lua::LuaUpdater::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) = CBMemberTranslator0<Lua::LuaUpdater,void(Lua::LuaUpdater::*)()>::thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Sexy::AndroidHttpTransaction, void
   (Sexy::AndroidHttpTransaction::*)()>(Sexy::CBMemberTranslatorX<Sexy::AndroidHttpTransaction, void
   (Sexy::AndroidHttpTransaction::*)()> const&) */

void __thiscall
Sexy::Delegate0::Delegate0<Sexy::AndroidHttpTransaction,void(Sexy::AndroidHttpTransaction::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Sexy::AndroidHttpTransaction,void(Sexy::AndroidHttpTransaction::*)()>::
       thunk;
  return;
}


/* Sexy::Delegate0::Delegate0<Sexy::AndroidHttpTransaction::ReceivedDataCallback, void
   (Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>(Sexy::CBMemberTranslatorX<Sexy::AndroidHttpTransaction::ReceivedDataCallback,
   void (Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()> const&) */

void __thiscall
Sexy::Delegate0::
Delegate0<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
          (Delegate0 *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608330;
  *(code **)(this + 0x28) =
       CBMemberTranslator0<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
       ::thunk;
  return;
}

