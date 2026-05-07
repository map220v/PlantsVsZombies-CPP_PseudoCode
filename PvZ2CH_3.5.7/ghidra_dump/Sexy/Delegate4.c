// Class: Sexy::Delegate4<bool,int,bool,bool>


/* Sexy::Delegate4<bool, int, bool, bool>::Delegate4<HotUIWidgetSeedPacket, void
   (HotUIWidgetSeedPacket::*)(bool, int, bool,
   bool)>(Sexy::CBMemberTranslatorX<HotUIWidgetSeedPacket, void (HotUIWidgetSeedPacket::*)(bool,
   int, bool, bool)> const&) */

void __thiscall
Sexy::Delegate4<bool,int,bool,bool>::
Delegate4<HotUIWidgetSeedPacket,void(HotUIWidgetSeedPacket::*)(bool,int,bool,bool)>
          (Delegate4<bool,int,bool,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066198f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<bool,int,bool,bool,HotUIWidgetSeedPacket,void(HotUIWidgetSeedPacket::*)(bool,int,bool,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<bool, int, bool, bool>::Delegate4<AdaptorNewPlantUIAllPlantsScreen, void
   (AdaptorNewPlantUIAllPlantsScreen::*)(bool, int, bool,
   bool)>(Sexy::CBMemberTranslatorX<AdaptorNewPlantUIAllPlantsScreen, void
   (AdaptorNewPlantUIAllPlantsScreen::*)(bool, int, bool, bool)> const&) */

void __thiscall
Sexy::Delegate4<bool,int,bool,bool>::
Delegate4<AdaptorNewPlantUIAllPlantsScreen,void(AdaptorNewPlantUIAllPlantsScreen::*)(bool,int,bool,bool)>
          (Delegate4<bool,int,bool,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066198f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<bool,int,bool,bool,AdaptorNewPlantUIAllPlantsScreen,void(AdaptorNewPlantUIAllPlantsScreen::*)(bool,int,bool,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<bool, int, bool, bool>::Delegate4<AdaptorNewPlantUIEntryScreen, void
   (AdaptorNewPlantUIEntryScreen::*)(bool, int, bool,
   bool)>(Sexy::CBMemberTranslatorX<AdaptorNewPlantUIEntryScreen, void
   (AdaptorNewPlantUIEntryScreen::*)(bool, int, bool, bool)> const&) */

void __thiscall
Sexy::Delegate4<bool,int,bool,bool>::
Delegate4<AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)(bool,int,bool,bool)>
          (Delegate4<bool,int,bool,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066198f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<bool,int,bool,bool,AdaptorNewPlantUIEntryScreen,void(AdaptorNewPlantUIEntryScreen::*)(bool,int,bool,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<Zombie*, int, float*, bool>::TEMPNAMEPLACEHOLDERVALUE(Zombie*, int, float*, bool)
   const */

void Sexy::Delegate4<Zombie*,int,float*,bool>::operator()
               (Zombie *param_1,int param_2,float *param_3,bool param_4)

{
  (**(code **)(param_1 + 0x28))(param_1,param_2,param_3,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate4<bool, int, bool, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate4<bool,int,bool,bool>::Invoke
          (Delegate4<bool,int,bool,bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  iVar4 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  bVar2 = RtInvokeVariant::Get<bool>(param_2 + 0x20);
  bVar3 = RtInvokeVariant::Get<bool>(param_2 + 0x30);
  (**(code **)(this + 0x28))(this,bVar1,iVar4,bVar2,bVar3);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<SecurityGourdModule, void (SecurityGourdModule::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<SecurityGourdModule, void
   (SecurityGourdModule::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<SecurityGourdModule,void(SecurityGourdModule::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,SecurityGourdModule,void(SecurityGourdModule::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::Invoke
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  string *psVar1;
  string *psVar2;
  string *psVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = RtInvokeVariant::Get<std::string_const&>(param_2);
  fVar4 = RtInvokeVariant::Get<float>(param_2 + 0x10);
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x20);
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x30);
  (**(code **)(this + 0x28))(fVar4,this,psVar1,psVar2,psVar3);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ArtifactLightning, void (ArtifactLightning::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<ArtifactLightning, void
   (ArtifactLightning::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ArtifactLightning,void(ArtifactLightning::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ArtifactLightning,void(ArtifactLightning::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemArtifactWeatherMonkey, void
   (GridItemArtifactWeatherMonkey::*)(std::string const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<GridItemArtifactWeatherMonkey, void
   (GridItemArtifactWeatherMonkey::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemArtifactWeatherMonkey,void(GridItemArtifactWeatherMonkey::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemArtifactWeatherMonkey,void(GridItemArtifactWeatherMonkey::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemCthulhuActiniaTentacleArtifact, void
   (GridItemCthulhuActiniaTentacleArtifact::*)(std::string const&, float, std::string const&,
   std::string const&)>(Sexy::CBMemberTranslatorX<GridItemCthulhuActiniaTentacleArtifact, void
   (GridItemCthulhuActiniaTentacleArtifact::*)(std::string const&, float, std::string const&,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemCthulhuActiniaTentacleArtifact,void(GridItemCthulhuActiniaTentacleArtifact::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemCthulhuActiniaTentacleArtifact,void(GridItemCthulhuActiniaTentacleArtifact::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ArtifactGravity, void (ArtifactGravity::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<ArtifactGravity, void
   (ArtifactGravity::*)(std::string const&, float, std::string const&, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ArtifactGravity,void(ArtifactGravity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ArtifactGravity,void(ArtifactGravity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ArtifactHydraulic, void (ArtifactHydraulic::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<ArtifactHydraulic, void
   (ArtifactHydraulic::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ArtifactHydraulic,void(ArtifactHydraulic::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ArtifactHydraulic,void(ArtifactHydraulic::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<Zombie*, int, float*, bool>::Delegate4<ArtifactSnowdrift, void
   (ArtifactSnowdrift::*)(Zombie*, int, float*, bool)>(Sexy::CBMemberTranslatorX<ArtifactSnowdrift,
   void (ArtifactSnowdrift::*)(Zombie*, int, float*, bool)> const&) */

void __thiscall
Sexy::Delegate4<Zombie*,int,float*,bool>::
Delegate4<ArtifactSnowdrift,void(ArtifactSnowdrift::*)(Zombie*,int,float*,bool)>
          (Delegate4<Zombie*,int,float*,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695da0;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<Zombie*,int,float*,bool,ArtifactSnowdrift,void(ArtifactSnowdrift::*)(Zombie*,int,float*,bool)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate4<Zombie*, int, float*, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate4<Zombie*,int,float*,bool>::Invoke
          (Delegate4<Zombie*,int,float*,bool> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  int iVar2;
  Zombie *pZVar3;
  float *pfVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = RtInvokeVariant::Get<Zombie*>(param_2);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  pfVar4 = RtInvokeVariant::Get<float*>(param_2 + 0x20);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x30);
  (**(code **)(this + 0x28))(this,pZVar3,iVar2,pfVar4,bVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ArtifactGashaponSubSystem, void (ArtifactGashaponSubSystem::*)(std::string
   const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<ArtifactGashaponSubSystem, void
   (ArtifactGashaponSubSystem::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ArtifactGashaponSubSystem,void(ArtifactGashaponSubSystem::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ArtifactGashaponSubSystem,void(ArtifactGashaponSubSystem::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ArtifactGashaponGuacodileProjectile, void
   (ArtifactGashaponGuacodileProjectile::*)(std::string const&, float, std::string const&,
   std::string const&)>(Sexy::CBMemberTranslatorX<ArtifactGashaponGuacodileProjectile, void
   (ArtifactGashaponGuacodileProjectile::*)(std::string const&, float, std::string const&,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ArtifactGashaponGuacodileProjectile,void(ArtifactGashaponGuacodileProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ArtifactGashaponGuacodileProjectile,void(ArtifactGashaponGuacodileProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ArtifactGashaponParsnipProjectile, void
   (ArtifactGashaponParsnipProjectile::*)(std::string const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<ArtifactGashaponParsnipProjectile, void
   (ArtifactGashaponParsnipProjectile::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ArtifactGashaponParsnipProjectile,void(ArtifactGashaponParsnipProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ArtifactGashaponParsnipProjectile,void(ArtifactGashaponParsnipProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<UFO, void (UFO::*)(std::string const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<UFO, void (UFO::*)(std::string const&, float, std::string
   const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<UFO,void(UFO::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,UFO,void(UFO::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<FestivalLotteryTab, void (FestivalLotteryTab::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<FestivalLotteryTab, void
   (FestivalLotteryTab::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<FestivalLotteryTab,void(FestivalLotteryTab::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,FestivalLotteryTab,void(FestivalLotteryTab::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<InfernoAPFProjectile, void (InfernoPFProjectile::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<InfernoAPFProjectile, void
   (InfernoPFProjectile::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<InfernoAPFProjectile,void(InfernoPFProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,InfernoAPFProjectile,void(InfernoPFProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemDusklobberFlower, void (GridItemDusklobberFlower::*)(std::string
   const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<GridItemDusklobberFlower, void
   (GridItemDusklobberFlower::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemDusklobberFlower,void(GridItemDusklobberFlower::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemDusklobberFlower,void(GridItemDusklobberFlower::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ParsnipProjectile, void (ParsnipProjectile::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<ParsnipProjectile, void
   (ParsnipProjectile::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ParsnipProjectile,void(ParsnipProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ParsnipProjectile,void(ParsnipProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<MulberryProjectile, void (MulberryProjectile::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<MulberryProjectile, void
   (MulberryProjectile::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<MulberryProjectile,void(MulberryProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,MulberryProjectile,void(MulberryProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<Effect_PopAnim, void (Effect_PopAnim::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<Effect_PopAnim, void
   (Effect_PopAnim::*)(std::string const&, float, std::string const&, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<Effect_PopAnim,void(Effect_PopAnim::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,Effect_PopAnim,void(Effect_PopAnim::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<SkyCityStage, void (SkyCityStage::*)(std::string const&, float, std::string
   const&, std::string const&)>(Sexy::CBMemberTranslatorX<SkyCityStage, void
   (SkyCityStage::*)(std::string const&, float, std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<SkyCityStage,void(SkyCityStage::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,SkyCityStage,void(SkyCityStage::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemRenaiRoller, void (GridItemRenaiRoller::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemRenaiRoller, void
   (GridItemRenaiRoller::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemRenaiRoller,void(GridItemRenaiRoller::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemRenaiRoller,void(GridItemRenaiRoller::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemRenaiStatue, void (GridItemRenaiStatue::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemRenaiStatue, void
   (GridItemRenaiStatue::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemRenaiStatue,void(GridItemRenaiStatue::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemRenaiStatue,void(GridItemRenaiStatue::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemMazeStatue, void (GridItemMazeStatue::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemMazeStatue, void
   (GridItemMazeStatue::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemMazeStatue,void(GridItemMazeStatue::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemMazeStatue,void(GridItemMazeStatue::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ThunderSubSystem, void (ThunderSubSystem::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<ThunderSubSystem, void
   (ThunderSubSystem::*)(std::string const&, float, std::string const&, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ThunderSubSystem,void(ThunderSubSystem::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ThunderSubSystem,void(ThunderSubSystem::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemSpeaker, void (GridItemSpeaker::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemSpeaker, void
   (GridItemSpeaker::*)(std::string const&, float, std::string const&, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemSpeaker,void(GridItemSpeaker::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemSpeaker,void(GridItemSpeaker::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemEgg, void (GridItemEgg::*)(std::string const&, float, std::string
   const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemEgg, void
   (GridItemEgg::*)(std::string const&, float, std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemEgg,void(GridItemEgg::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemEgg,void(GridItemEgg::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<Plant, void (Plant::*)(std::string const&, float, std::string const&,
   std::string const&)>(Sexy::CBMemberTranslatorX<Plant, void (Plant::*)(std::string const&, float,
   std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<Plant,void(Plant::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,Plant,void(Plant::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<Barbarian, void (Barbarian::*)(std::string const&, float, std::string const&,
   std::string const&)>(Sexy::CBMemberTranslatorX<Barbarian, void (Barbarian::*)(std::string const&,
   float, std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<Barbarian,void(Barbarian::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,Barbarian,void(Barbarian::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemSunSeed, void (GridItemSunSeed::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemSunSeed, void
   (GridItemSunSeed::*)(std::string const&, float, std::string const&, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemSunSeed,void(GridItemSunSeed::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemSunSeed,void(GridItemSunSeed::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemPlantCrackerFlower, void (GridItemPlantCrackerFlower::*)(std::string
   const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<GridItemPlantCrackerFlower, void
   (GridItemPlantCrackerFlower::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemPlantCrackerFlower,void(GridItemPlantCrackerFlower::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemPlantCrackerFlower,void(GridItemPlantCrackerFlower::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<MagicCard, void (MagicCard::*)(std::string const&, float, std::string const&,
   std::string const&)>(Sexy::CBMemberTranslatorX<MagicCard, void (MagicCard::*)(std::string const&,
   float, std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<MagicCard,void(MagicCard::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,MagicCard,void(MagicCard::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<EffectObject_TargetPlant, void (EffectObject_TargetPlant::*)(std::string
   const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<EffectObject_TargetPlant, void
   (EffectObject_TargetPlant::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<EffectObject_TargetPlant,void(EffectObject_TargetPlant::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,EffectObject_TargetPlant,void(EffectObject_TargetPlant::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::Delegate4
               (DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06686180;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<PlantTangleKelpTentacle, void (PlantTangleKelpTentacle::*)(std::string const&,
   float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<PlantTangleKelpTentacle, void
   (PlantTangleKelpTentacle::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<PlantTangleKelpTentacle,void(PlantTangleKelpTentacle::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,PlantTangleKelpTentacle,void(PlantTangleKelpTentacle::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GuacodileProjectile, void (GuacodileProjectile::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GuacodileProjectile, void
   (GuacodileProjectile::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GuacodileProjectile,void(GuacodileProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GuacodileProjectile,void(GuacodileProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<PlantAnthurium, void (PlantAnthurium::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<PlantAnthurium, void
   (PlantAnthurium::*)(std::string const&, float, std::string const&, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<PlantAnthurium,void(PlantAnthurium::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,PlantAnthurium,void(PlantAnthurium::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<HorsebeanPlane, void (HorsebeanPlane::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<HorsebeanPlane, void
   (HorsebeanPlane::*)(std::string const&, float, std::string const&, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<HorsebeanPlane,void(HorsebeanPlane::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,HorsebeanPlane,void(HorsebeanPlane::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<EffectObject_StrawburstPlantfood, void
   (EffectObject_StrawburstPlantfood::*)(std::string const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<EffectObject_StrawburstPlantfood, void
   (EffectObject_StrawburstPlantfood::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<EffectObject_StrawburstPlantfood,void(EffectObject_StrawburstPlantfood::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,EffectObject_StrawburstPlantfood,void(EffectObject_StrawburstPlantfood::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<EffectObject_BurrowAttack, void (EffectObject_BurrowAttack::*)(std::string
   const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<EffectObject_BurrowAttack, void
   (EffectObject_BurrowAttack::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<EffectObject_BurrowAttack,void(EffectObject_BurrowAttack::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,EffectObject_BurrowAttack,void(EffectObject_BurrowAttack::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<TristerixAphyllusBird, void (TristerixAphyllusBird::*)(std::string const&,
   float, std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<TristerixAphyllusBird,
   void (TristerixAphyllusBird::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<TristerixAphyllusBird,void(TristerixAphyllusBird::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,TristerixAphyllusBird,void(TristerixAphyllusBird::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<PneumaticSeedBank, void (PneumaticSeedBank::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<PneumaticSeedBank, void
   (PneumaticSeedBank::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<PneumaticSeedBank,void(PneumaticSeedBank::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,PneumaticSeedBank,void(PneumaticSeedBank::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<PVZ2UIPresentWidget, void (PVZ2UIPresentWidget::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<PVZ2UIPresentWidget, void
   (PVZ2UIPresentWidget::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<PVZ2UIPresentWidget,void(PVZ2UIPresentWidget::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,PVZ2UIPresentWidget,void(PVZ2UIPresentWidget::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<Zombie, void (Zombie::*)(std::string const&, float, std::string const&,
   std::string const&)>(Sexy::CBMemberTranslatorX<Zombie, void (Zombie::*)(std::string const&,
   float, std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<Zombie,void(Zombie::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,Zombie,void(Zombie::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ZombieMonkBlade, void (ZombieMonkBlade::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<ZombieMonkBlade, void
   (ZombieMonkBlade::*)(std::string const&, float, std::string const&, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ZombieMonkBlade,void(ZombieMonkBlade::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ZombieMonkBlade,void(ZombieMonkBlade::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<Creature, void (Creature::*)(std::string const&, float, std::string const&,
   std::string const&)>(Sexy::CBMemberTranslatorX<Creature, void (Creature::*)(std::string const&,
   float, std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<Creature,void(Creature::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,Creature,void(Creature::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<KiwiFruitSmallProjectile, bool (KiwiFruitSmallProjectile::*)(std::string
   const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<KiwiFruitSmallProjectile, bool
   (KiwiFruitSmallProjectile::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<KiwiFruitSmallProjectile,bool(KiwiFruitSmallProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,KiwiFruitSmallProjectile,bool(KiwiFruitSmallProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<LeaderBombProjectile, void (LeaderBombProjectile::*)(std::string const&,
   float, std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<LeaderBombProjectile,
   void (LeaderBombProjectile::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<LeaderBombProjectile,void(LeaderBombProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,LeaderBombProjectile,void(LeaderBombProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<PlantTrialViewUI, void (PlantTrialViewUI::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<PlantTrialViewUI, void
   (PlantTrialViewUI::*)(std::string const&, float, std::string const&, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<PlantTrialViewUI,void(PlantTrialViewUI::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,PlantTrialViewUI,void(PlantTrialViewUI::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<UIDangerRoomSkipLevel, void (UIDangerRoomSkipLevel::*)(std::string const&,
   float, std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<UIDangerRoomSkipLevel,
   void (UIDangerRoomSkipLevel::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<UIDangerRoomSkipLevel,void(UIDangerRoomSkipLevel::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,UIDangerRoomSkipLevel,void(UIDangerRoomSkipLevel::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<DangerRoomEndLevelWin, void (DangerRoomEndLevelWin::*)(std::string const&,
   float, std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<DangerRoomEndLevelWin,
   void (DangerRoomEndLevelWin::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<DangerRoomEndLevelWin,void(DangerRoomEndLevelWin::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,DangerRoomEndLevelWin,void(DangerRoomEndLevelWin::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ZombiePVPSkill_ZombieFood, void (ZombiePVPSkill_ZombieFood::*)(std::string
   const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<ZombiePVPSkill_ZombieFood, void
   (ZombiePVPSkill_ZombieFood::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ZombiePVPSkill_ZombieFood,void(ZombiePVPSkill_ZombieFood::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ZombiePVPSkill_ZombieFood,void(ZombiePVPSkill_ZombieFood::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ZombiePVPSkill_Rage, void (ZombiePVPSkill_Rage::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<ZombiePVPSkill_Rage, void
   (ZombiePVPSkill_Rage::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ZombiePVPSkill_Rage,void(ZombiePVPSkill_Rage::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ZombiePVPSkill_Rage,void(ZombiePVPSkill_Rage::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ActiveChristmasLotteryTab, void (ActiveChristmasLotteryTab::*)(std::string
   const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<ActiveChristmasLotteryTab, void
   (ActiveChristmasLotteryTab::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ActiveChristmasLotteryTab,void(ActiveChristmasLotteryTab::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ActiveChristmasLotteryTab,void(ActiveChristmasLotteryTab::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ChristmasLotteryReward, void (ChristmasLotteryReward::*)(std::string const&,
   float, std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<ChristmasLotteryReward,
   void (ChristmasLotteryReward::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ChristmasLotteryReward,void(ChristmasLotteryReward::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ChristmasLotteryReward,void(ChristmasLotteryReward::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemFireCracker, void (GridItemFireCracker::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemFireCracker, void
   (GridItemFireCracker::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemFireCracker,void(GridItemFireCracker::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemFireCracker,void(GridItemFireCracker::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemSummerFireworks, void (GridItemSummerFireworks::*)(std::string const&,
   float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<GridItemSummerFireworks, void
   (GridItemSummerFireworks::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemSummerFireworks,void(GridItemSummerFireworks::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemSummerFireworks,void(GridItemSummerFireworks::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemMagicMirror, void (GridItemMagicMirror::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemMagicMirror, void
   (GridItemMagicMirror::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemMagicMirror,void(GridItemMagicMirror::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemMagicMirror,void(GridItemMagicMirror::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemMagicMirror2, void (GridItemMagicMirror2::*)(std::string const&,
   float, std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemMagicMirror2,
   void (GridItemMagicMirror2::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemMagicMirror2,void(GridItemMagicMirror2::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemMagicMirror2,void(GridItemMagicMirror2::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<ArtifactBeeEntity, void (ArtifactBeeEntity::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<ArtifactBeeEntity, void
   (ArtifactBeeEntity::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,ArtifactBeeEntity,void(ArtifactBeeEntity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<TwinsAssistPerson, void (TwinsAssistPerson::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<TwinsAssistPerson, void
   (TwinsAssistPerson::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<TwinsAssistPerson,void(TwinsAssistPerson::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,TwinsAssistPerson,void(TwinsAssistPerson::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemCthulhuActiniaTentacle, void
   (GridItemCthulhuActiniaTentacle::*)(std::string const&, float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<GridItemCthulhuActiniaTentacle, void
   (GridItemCthulhuActiniaTentacle::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemCthulhuActiniaTentacle,void(GridItemCthulhuActiniaTentacle::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemCthulhuActiniaTentacle,void(GridItemCthulhuActiniaTentacle::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<DevilsParasiteEntity, void (DevilsParasiteEntity::*)(std::string const&,
   float, std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<DevilsParasiteEntity,
   void (DevilsParasiteEntity::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,DevilsParasiteEntity,void(DevilsParasiteEntity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemEntityTargeting, void (GridItemEntityTargeting::*)(std::string const&,
   float, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<GridItemEntityTargeting, void
   (GridItemEntityTargeting::*)(std::string const&, float, std::string const&, std::string const&)>
   const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemEntityTargeting,void(GridItemEntityTargeting::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemEntityTargeting,void(GridItemEntityTargeting::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemCardGameZombie, void (GridItemCardGameZombie::*)(std::string const&,
   float, std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemCardGameZombie,
   void (GridItemCardGameZombie::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemCardGameZombie,void(GridItemCardGameZombie::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemCardGameZombie,void(GridItemCardGameZombie::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<GridItemCardGameTower, void (GridItemCardGameTower::*)(std::string const&,
   float, std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<GridItemCardGameTower,
   void (GridItemCardGameTower::*)(std::string const&, float, std::string const&, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<GridItemCardGameTower,void(GridItemCardGameTower::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,GridItemCardGameTower,void(GridItemCardGameTower::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<MaybeeBee, void (MaybeeBee::*)(std::string const&, float, std::string const&,
   std::string const&)>(Sexy::CBMemberTranslatorX<MaybeeBee, void (MaybeeBee::*)(std::string const&,
   float, std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<MaybeeBee,void(MaybeeBee::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,MaybeeBee,void(MaybeeBee::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&>::Delegate4<HydraGridMirror, void (HydraGridMirror::*)(std::string const&, float,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<HydraGridMirror, void
   (HydraGridMirror::*)(std::string const&, float, std::string const&, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
Delegate4<HydraGridMirror,void(HydraGridMirror::*)(std::string_const&,float,std::string_const&,std::string_const&)>
          (Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06686180;
  *(code **)(this + 0x28) =
       CBMemberTranslator4<std::string_const&,float,std::string_const&,std::string_const&,HydraGridMirror,void(HydraGridMirror::*)(std::string_const&,float,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}

