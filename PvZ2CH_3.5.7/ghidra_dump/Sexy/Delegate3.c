// Class: Sexy::Delegate3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int>


/* Sexy::Delegate3<std::vector<PlantInfo, std::allocator<PlantInfo> >&, int,
   int>::TEMPNAMEPLACEHOLDERVALUE(std::vector<PlantInfo, std::allocator<PlantInfo> >&, int, int)
   const */

void Sexy::Delegate3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int>::operator()
               (vector *param_1,int param_2,int param_3)

{
  (**(code **)(param_1 + 0x28))(param_1,param_2,param_3);
  return;
}


/* Sexy::Delegate3<std::string const&, int, int>::Delegate3<LawnApp, void (LawnApp::*)(std::string
   const&, int, int)>(Sexy::CBMemberTranslatorX<LawnApp, void (LawnApp::*)(std::string const&, int,
   int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,int,int>::
Delegate3<LawnApp,void(LawnApp::*)(std::string_const&,int,int)>
          (Delegate3<std::string_const&,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c20;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,int,int,LawnApp,void(LawnApp::*)(std::string_const&,int,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<std::string const&, int, int>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<std::string_const&,int,int>::Invoke
          (Delegate3<std::string_const&,int,int> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,psVar3,iVar1,iVar2);
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


/* Sexy::Delegate3<Sexy::Point const&, int, float>::Delegate3(Sexy::Delegate3<Sexy::Point const&,
   int, float>&&) */

void __thiscall
Sexy::Delegate3<Sexy::Point_const&,int,float>::Delegate3
          (Delegate3<Sexy::Point_const&,int,float> *this,Delegate3 *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)this,(DelegateBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_066117a0;
  return;
}


/* Sexy::Delegate3<int, int, std::string const&>::Delegate3<Board, void (Board::*)(int, int,
   std::string const&)>(Sexy::CBMemberTranslatorX<Board, void (Board::*)(int, int, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate3<int,int,std::string_const&>::
Delegate3<Board,void(Board::*)(int,int,std::string_const&)>
          (Delegate3<int,int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611840;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,std::string_const&,Board,void(Board::*)(int,int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, WaveType::WaveType, bool>::Delegate3<Board, void (Board::*)(int,
   WaveType::WaveType, bool)>(Sexy::CBMemberTranslatorX<Board, void (Board::*)(int,
   WaveType::WaveType, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,WaveType::WaveType,bool>::
Delegate3<Board,void(Board::*)(int,WaveType::WaveType,bool)>
          (Delegate3<int,WaveType::WaveType,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611880;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,WaveType::WaveType,bool,Board,void(Board::*)(int,WaveType::WaveType,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<Board, void (Board::*)(Sexy::Point const&,
   PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<Board, void (Board::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<Board,void(Board::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Board,void(Board::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::Invoke(Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
         *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  Point *pPVar1;
  PlantType *pPVar2;
  vector *pvVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<Sexy::Point_const&>(param_2);
  pPVar2 = RtInvokeVariant::Get<PlantType_const*>(param_2 + 0x10);
  pvVar3 = RtInvokeVariant::Get<std::vector<PlantingReason,std::allocator<PlantingReason>>*>
                     (param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pPVar1,pPVar2,pvVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, WaveType::WaveType, bool>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<int,WaveType::WaveType,bool>::Invoke
          (Delegate3<int,WaveType::WaveType,bool> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = RtInvokeVariant::Get<int>(param_2);
  uVar3 = RtInvokeVariant::Get<WaveType::WaveType>(param_2 + 0x10);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar2,uVar3,bVar1);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, int, std::string const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<int,int,std::string_const&>::Invoke
          (Delegate3<int,int,std::string_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar1,iVar2,psVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<Sexy::Point const&, int, float>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<Sexy::Point_const&,int,float>::Invoke
          (Delegate3<Sexy::Point_const&,int,float> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  Point *pPVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = RtInvokeVariant::Get<Sexy::Point_const&>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  RtInvokeVariant::Get<float>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pPVar2,iVar1);
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


/* Sexy::Delegate3<std::string const&, std::string const&,
   int>::Delegate3(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06619910;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombieBumperCar, void
   (ZombieBumperCar::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombieBumperCar, void (ZombieBumperCar::*)(std::string const&,
   std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieBumperCar,void(ZombieBumperCar::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieBumperCar,void(ZombieBumperCar::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<std::string const&, std::string const&, int>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::Invoke
          (Delegate3<std::string_const&,std::string_const&,int> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  string *psVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2);
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,psVar2,psVar3,iVar1);
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


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<NewPVPGameSubsystem, void
   (NewPVPGameSubsystem::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<NewPVPGameSubsystem, void
   (NewPVPGameSubsystem::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<NewPVPStage, void (NewPVPStage::*)(Sexy::Point
   const&, PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<NewPVPStage, void (NewPVPStage::*)(Sexy::Point const&, PlantType
   const*, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<NewPVPStage,void(NewPVPStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,NewPVPStage,void(NewPVPStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<bool, int, bool>::Delegate3<HotUIWidgetTrainingPacket, void
   (HotUIWidgetTrainingPacket::*)(bool, int,
   bool)>(Sexy::CBMemberTranslatorX<HotUIWidgetTrainingPacket, void
   (HotUIWidgetTrainingPacket::*)(bool, int, bool)> const&) */

void __thiscall
Sexy::Delegate3<bool,int,bool>::
Delegate3<HotUIWidgetTrainingPacket,void(HotUIWidgetTrainingPacket::*)(bool,int,bool)>
          (Delegate3<bool,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0664d510;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<bool,int,bool,HotUIWidgetTrainingPacket,void(HotUIWidgetTrainingPacket::*)(bool,int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<bool, int, bool>::Delegate3<AdaptorNewPVPTrainingEntry, void
   (AdaptorNewPVPTrainingEntry::*)(bool, int,
   bool)>(Sexy::CBMemberTranslatorX<AdaptorNewPVPTrainingEntry, void
   (AdaptorNewPVPTrainingEntry::*)(bool, int, bool)> const&) */

void __thiscall
Sexy::Delegate3<bool,int,bool>::
Delegate3<AdaptorNewPVPTrainingEntry,void(AdaptorNewPVPTrainingEntry::*)(bool,int,bool)>
          (Delegate3<bool,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0664d510;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<bool,int,bool,AdaptorNewPVPTrainingEntry,void(AdaptorNewPVPTrainingEntry::*)(bool,int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<bool, int, bool>::Delegate3<AdaptorNewPVPTrainingScreen, void
   (AdaptorNewPVPTrainingScreen::*)(bool, int,
   bool)>(Sexy::CBMemberTranslatorX<AdaptorNewPVPTrainingScreen, void
   (AdaptorNewPVPTrainingScreen::*)(bool, int, bool)> const&) */

void __thiscall
Sexy::Delegate3<bool,int,bool>::
Delegate3<AdaptorNewPVPTrainingScreen,void(AdaptorNewPVPTrainingScreen::*)(bool,int,bool)>
          (Delegate3<bool,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0664d510;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<bool,int,bool,AdaptorNewPVPTrainingScreen,void(AdaptorNewPVPTrainingScreen::*)(bool,int,bool)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<bool, int, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate3<bool,int,bool>::Invoke
          (Delegate3<bool,int,bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  iVar3 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  bVar2 = RtInvokeVariant::Get<bool>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,bVar1,iVar3,bVar2);
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


/* Sexy::Delegate3<std::string const&, std::string const&,
   int>::Delegate3(Sexy::Delegate3<std::string const&, std::string const&, int> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3
          (Delegate3<std::string_const&,std::string_const&,int> *this,Delegate3 *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)this,(DelegateBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_06619910;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&,
   int>::Delegate3<AdaptorRiftTourneyResultsScreen, void
   (AdaptorRiftTourneyResultsScreen::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<AdaptorRiftTourneyResultsScreen, void
   (AdaptorRiftTourneyResultsScreen::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<AdaptorRiftTourneyResultsScreen,void(AdaptorRiftTourneyResultsScreen::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,AdaptorRiftTourneyResultsScreen,void(AdaptorRiftTourneyResultsScreen::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Zombie*, int, float>::Delegate3<ApplyZombieConditionsChallenge, void
   (ApplyZombieConditionsChallenge::*)(Zombie*, int,
   float)>(Sexy::CBMemberTranslatorX<ApplyZombieConditionsChallenge, void
   (ApplyZombieConditionsChallenge::*)(Zombie*, int, float)> const&) */

void __thiscall
Sexy::Delegate3<Zombie*,int,float>::
Delegate3<ApplyZombieConditionsChallenge,void(ApplyZombieConditionsChallenge::*)(Zombie*,int,float)>
          (Delegate3<Zombie*,int,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0667acd0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Zombie*,int,float,ApplyZombieConditionsChallenge,void(ApplyZombieConditionsChallenge::*)(Zombie*,int,float)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<Zombie*, int, float>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate3<Zombie*,int,float>::Invoke
          (Delegate3<Zombie*,int,float> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  Zombie *pZVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = RtInvokeVariant::Get<Zombie*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  RtInvokeVariant::Get<float>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pZVar2,iVar1);
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


/* Sexy::Delegate3<int, bool, int>::Delegate3<FuelBank, void (FuelBank::*)(int, bool,
   int)>(Sexy::CBMemberTranslatorX<FuelBank, void (FuelBank::*)(int, bool, int)> const&) */

void __thiscall
Sexy::Delegate3<int,bool,int>::Delegate3<FuelBank,void(FuelBank::*)(int,bool,int)>
          (Delegate3<int,bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0667cdb0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,bool,int,FuelBank,void(FuelBank::*)(int,bool,int)>::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, bool, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate3<int,bool,int>::Invoke
          (Delegate3<int,bool,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = RtInvokeVariant::Get<int>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  iVar3 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar2,bVar1,iVar3);
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


/* Sexy::Delegate3<int, WaveType::WaveType, bool>::Delegate3<PennyPerkSunBreak, void
   (PennyPerkSunBreak::*)(int, WaveType::WaveType,
   bool)>(Sexy::CBMemberTranslatorX<PennyPerkSunBreak, void (PennyPerkSunBreak::*)(int,
   WaveType::WaveType, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,WaveType::WaveType,bool>::
Delegate3<PennyPerkSunBreak,void(PennyPerkSunBreak::*)(int,WaveType::WaveType,bool)>
          (Delegate3<int,WaveType::WaveType,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611880;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,WaveType::WaveType,bool,PennyPerkSunBreak,void(PennyPerkSunBreak::*)(int,WaveType::WaveType,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, WaveType::WaveType, bool>::Delegate3<WaveDistributorModule, void
   (WaveDistributorModule::*)(int, WaveType::WaveType,
   bool)>(Sexy::CBMemberTranslatorX<WaveDistributorModule, void (WaveDistributorModule::*)(int,
   WaveType::WaveType, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,WaveType::WaveType,bool>::
Delegate3<WaveDistributorModule,void(WaveDistributorModule::*)(int,WaveType::WaveType,bool)>
          (Delegate3<int,WaveType::WaveType,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611880;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,WaveType::WaveType,bool,WaveDistributorModule,void(WaveDistributorModule::*)(int,WaveType::WaveType,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string&, bool, Sexy::Point&>::Delegate3<AdaptorPerkSelectionDialog, void
   (AdaptorPerkSelectionDialog::*)(std::string, bool,
   Sexy::Point&)>(Sexy::CBMemberTranslatorX<AdaptorPerkSelectionDialog, void
   (AdaptorPerkSelectionDialog::*)(std::string, bool, Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate3<std::string&,bool,Sexy::Point&>::
Delegate3<AdaptorPerkSelectionDialog,void(AdaptorPerkSelectionDialog::*)(std::string,bool,Sexy::Point&)>
          (Delegate3<std::string&,bool,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06684840;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string&,bool,Sexy::Point&,AdaptorPerkSelectionDialog,void(AdaptorPerkSelectionDialog::*)(std::string,bool,Sexy::Point&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<std::string&, bool, Sexy::Point&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<std::string&,bool,Sexy::Point&>::Invoke
          (Delegate3<std::string&,bool,Sexy::Point&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  string *psVar2;
  Point *pPVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = RtInvokeVariant::Get<std::string&>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  pPVar3 = RtInvokeVariant::Get<Sexy::Point&>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,psVar2,bVar1,pPVar3);
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


/* Sexy::Delegate3<std::string&, bool, Sexy::Point&>::Delegate3<AdaptorPerkInfoWidget, void
   (AdaptorPerkInfoWidget::*)(std::string&, bool,
   Sexy::Point&)>(Sexy::CBMemberTranslatorX<AdaptorPerkInfoWidget, void
   (AdaptorPerkInfoWidget::*)(std::string&, bool, Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate3<std::string&,bool,Sexy::Point&>::
Delegate3<AdaptorPerkInfoWidget,void(AdaptorPerkInfoWidget::*)(std::string&,bool,Sexy::Point&)>
          (Delegate3<std::string&,bool,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06684840;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string&,bool,Sexy::Point&,AdaptorPerkInfoWidget,void(AdaptorPerkInfoWidget::*)(std::string&,bool,Sexy::Point&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string&, bool, Sexy::Point&>::Delegate3<AdaptorSelectedPerksWidget, void
   (AdaptorSelectedPerksWidget::*)(std::string&, bool,
   Sexy::Point&)>(Sexy::CBMemberTranslatorX<AdaptorSelectedPerksWidget, void
   (AdaptorSelectedPerksWidget::*)(std::string&, bool, Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate3<std::string&,bool,Sexy::Point&>::
Delegate3<AdaptorSelectedPerksWidget,void(AdaptorSelectedPerksWidget::*)(std::string&,bool,Sexy::Point&)>
          (Delegate3<std::string&,bool,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06684840;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string&,bool,Sexy::Point&,AdaptorSelectedPerksWidget,void(AdaptorSelectedPerksWidget::*)(std::string&,bool,Sexy::Point&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Zombie*, int*, float*>::Delegate3<RiftThemeFireReduce, void
   (RiftThemeFireReduce::*)(Zombie*, int*, float*)>(Sexy::CBMemberTranslatorX<RiftThemeFireReduce,
   void (RiftThemeFireReduce::*)(Zombie*, int*, float*)> const&) */

void __thiscall
Sexy::Delegate3<Zombie*,int*,float*>::
Delegate3<RiftThemeFireReduce,void(RiftThemeFireReduce::*)(Zombie*,int*,float*)>
          (Delegate3<Zombie*,int*,float*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689830;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Zombie*,int*,float*,RiftThemeFireReduce,void(RiftThemeFireReduce::*)(Zombie*,int*,float*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Zombie*, int*, float*>::Delegate3<RiftThemeLightingReduce, void
   (RiftThemeLightingReduce::*)(Zombie*, int*,
   float*)>(Sexy::CBMemberTranslatorX<RiftThemeLightingReduce, void
   (RiftThemeLightingReduce::*)(Zombie*, int*, float*)> const&) */

void __thiscall
Sexy::Delegate3<Zombie*,int*,float*>::
Delegate3<RiftThemeLightingReduce,void(RiftThemeLightingReduce::*)(Zombie*,int*,float*)>
          (Delegate3<Zombie*,int*,float*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689830;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Zombie*,int*,float*,RiftThemeLightingReduce,void(RiftThemeLightingReduce::*)(Zombie*,int*,float*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Zombie*, int*, float*>::Delegate3<RiftThemeColdReduce, void
   (RiftThemeColdReduce::*)(Zombie*, int*, float*)>(Sexy::CBMemberTranslatorX<RiftThemeColdReduce,
   void (RiftThemeColdReduce::*)(Zombie*, int*, float*)> const&) */

void __thiscall
Sexy::Delegate3<Zombie*,int*,float*>::
Delegate3<RiftThemeColdReduce,void(RiftThemeColdReduce::*)(Zombie*,int*,float*)>
          (Delegate3<Zombie*,int*,float*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689830;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Zombie*,int*,float*,RiftThemeColdReduce,void(RiftThemeColdReduce::*)(Zombie*,int*,float*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<Zombie*, int*, float*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate3<Zombie*,int*,float*>::Invoke
          (Delegate3<Zombie*,int*,float*> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  Zombie *pZVar1;
  int *piVar2;
  float *pfVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = RtInvokeVariant::Get<Zombie*>(param_2);
  piVar2 = RtInvokeVariant::Get<int*>(param_2 + 0x10);
  pfVar3 = RtInvokeVariant::Get<float*>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pZVar1,piVar2,pfVar3);
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


/* Sexy::Delegate3<std::string const&, int, int>::Delegate3<RiftValidateMgr, void
   (RiftValidateMgr::*)(std::string const&, int, int)>(Sexy::CBMemberTranslatorX<RiftValidateMgr,
   void (RiftValidateMgr::*)(std::string const&, int, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,int,int>::
Delegate3<RiftValidateMgr,void(RiftValidateMgr::*)(std::string_const&,int,int)>
          (Delegate3<std::string_const&,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c20;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,int,int,RiftValidateMgr,void(RiftValidateMgr::*)(std::string_const&,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, bool>::Delegate3<GridItemAcid, void (GridItemAcid::*)(int, int,
   bool)>(Sexy::CBMemberTranslatorX<GridItemAcid, void (GridItemAcid::*)(int, int, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,int,bool>::Delegate3<GridItemAcid,void(GridItemAcid::*)(int,int,bool)>
          (Delegate3<int,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695d80;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,bool,GridItemAcid,void(GridItemAcid::*)(int,int,bool)>::thunk;
  return;
}


/* Sexy::Delegate3<int, int, bool>::Delegate3<ArtifactAcid, void (ArtifactAcid::*)(int, int,
   bool)>(Sexy::CBMemberTranslatorX<ArtifactAcid, void (ArtifactAcid::*)(int, int, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,int,bool>::Delegate3<ArtifactAcid,void(ArtifactAcid::*)(int,int,bool)>
          (Delegate3<int,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695d80;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,bool,ArtifactAcid,void(ArtifactAcid::*)(int,int,bool)>::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<ArtifactGuitar, void
   (ArtifactGuitar::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<ArtifactGuitar, void
   (ArtifactGuitar::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<ArtifactGuitar,void(ArtifactGuitar::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ArtifactGuitar,void(ArtifactGuitar::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, int, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate3<int,int,bool>::Invoke
          (Delegate3<int,int,bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = RtInvokeVariant::Get<int>(param_2);
  iVar3 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar2,iVar3,bVar1);
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


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<EffectObject_DinoTread_For_Artifact_Dinosaur_horn,
   void (EffectObject_DinoTread_For_Artifact_Dinosaur_horn::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<EffectObject_DinoTread_For_Artifact_Dinosaur_horn, void
   (EffectObject_DinoTread_For_Artifact_Dinosaur_horn::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<EffectObject_DinoTread_For_Artifact_Dinosaur_horn,void(EffectObject_DinoTread_For_Artifact_Dinosaur_horn::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,EffectObject_DinoTread_For_Artifact_Dinosaur_horn,void(EffectObject_DinoTread_For_Artifact_Dinosaur_horn::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&,
   int>::Delegate3<AdaptorJoustTourneyResultsScreen, void
   (AdaptorJoustTourneyResultsScreen::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<AdaptorJoustTourneyResultsScreen, void
   (AdaptorJoustTourneyResultsScreen::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, std::string const&, float>::Delegate3<StarChallengeTargetScore, void
   (StarChallengeTargetScore::*)(int, std::string const&,
   float)>(Sexy::CBMemberTranslatorX<StarChallengeTargetScore, void
   (StarChallengeTargetScore::*)(int, std::string const&, float)> const&) */

void __thiscall
Sexy::Delegate3<int,std::string_const&,float>::
Delegate3<StarChallengeTargetScore,void(StarChallengeTargetScore::*)(int,std::string_const&,float)>
          (Delegate3<int,std::string_const&,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066add30;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,std::string_const&,float,StarChallengeTargetScore,void(StarChallengeTargetScore::*)(int,std::string_const&,float)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, std::string const&, float>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<int,std::string_const&,float>::Invoke
          (Delegate3<int,std::string_const&,float> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  string *psVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  RtInvokeVariant::Get<float>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar1,psVar2);
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


/* Sexy::Delegate3<bool, bool, int>::Delegate3<NewPVPPassLevelListener, void
   (NewPVPPassLevelListener::*)(bool, bool, int)>(Sexy::CBMemberTranslatorX<NewPVPPassLevelListener,
   void (NewPVPPassLevelListener::*)(bool, bool, int)> const&) */

void __thiscall
Sexy::Delegate3<bool,bool,int>::
Delegate3<NewPVPPassLevelListener,void(NewPVPPassLevelListener::*)(bool,bool,int)>
          (Delegate3<bool,bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711810;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<bool,bool,int,NewPVPPassLevelListener,void(NewPVPPassLevelListener::*)(bool,bool,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<bool, bool, int>::Delegate3<GeneralTaskPassEndlessOrPvPLevelListener, void
   (GeneralTaskPassEndlessOrPvPLevelListener::*)(bool, bool,
   int)>(Sexy::CBMemberTranslatorX<GeneralTaskPassEndlessOrPvPLevelListener, void
   (GeneralTaskPassEndlessOrPvPLevelListener::*)(bool, bool, int)> const&) */

void __thiscall
Sexy::Delegate3<bool,bool,int>::
Delegate3<GeneralTaskPassEndlessOrPvPLevelListener,void(GeneralTaskPassEndlessOrPvPLevelListener::*)(bool,bool,int)>
          (Delegate3<bool,bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711810;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<bool,bool,int,GeneralTaskPassEndlessOrPvPLevelListener,void(GeneralTaskPassEndlessOrPvPLevelListener::*)(bool,bool,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<bool, bool, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate3<bool,bool,int>::Invoke
          (Delegate3<bool,bool,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  bVar2 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  iVar3 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,bVar1,bVar2,iVar3);
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


/* Sexy::Delegate3<bool, std::string const&, std::string const&>::Delegate3<IdentifierMgr, void
   (IdentifierMgr::*)(bool, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<IdentifierMgr, void (IdentifierMgr::*)(bool, std::string
   const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate3<bool,std::string_const&,std::string_const&>::
Delegate3<IdentifierMgr,void(IdentifierMgr::*)(bool,std::string_const&,std::string_const&)>
          (Delegate3<bool,std::string_const&,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06733ea0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<bool,std::string_const&,std::string_const&,IdentifierMgr,void(IdentifierMgr::*)(bool,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<bool, std::string const&, std::string const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<bool,std::string_const&,std::string_const&>::Invoke
          (Delegate3<bool,std::string_const&,std::string_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  string *psVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,bVar1,psVar2,psVar3);
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


/* Sexy::Delegate3<Sexy::Point const&, Sexy::Point const&, bool>::Delegate3<PlantAlarmSagittifolia,
   void (PlantAlarmSagittifolia::*)(Sexy::Point const&, Sexy::Point const&,
   bool)>(Sexy::CBMemberTranslatorX<PlantAlarmSagittifolia, void
   (PlantAlarmSagittifolia::*)(Sexy::Point const&, Sexy::Point const&, bool)> const&) */

void __thiscall
Sexy::Delegate3<Sexy::Point_const&,Sexy::Point_const&,bool>::
Delegate3<PlantAlarmSagittifolia,void(PlantAlarmSagittifolia::*)(Sexy::Point_const&,Sexy::Point_const&,bool)>
          (Delegate3<Sexy::Point_const&,Sexy::Point_const&,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06749a80;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,Sexy::Point_const&,bool,PlantAlarmSagittifolia,void(PlantAlarmSagittifolia::*)(Sexy::Point_const&,Sexy::Point_const&,bool)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<Sexy::Point const&, Sexy::Point const&, bool>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<Sexy::Point_const&,Sexy::Point_const&,bool>::Invoke
          (Delegate3<Sexy::Point_const&,Sexy::Point_const&,bool> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  Point *pPVar2;
  Point *pPVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = RtInvokeVariant::Get<Sexy::Point_const&>(param_2);
  pPVar3 = RtInvokeVariant::Get<Sexy::Point_const&>(param_2 + 0x10);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pPVar2,pPVar3,bVar1);
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


/* Sexy::Delegate3<bool, int, int>::Delegate3<DangerRoomModule, void (DangerRoomModule::*)(bool,
   int, int)>(Sexy::CBMemberTranslatorX<DangerRoomModule, void (DangerRoomModule::*)(bool, int,
   int)> const&) */

void __thiscall
Sexy::Delegate3<bool,int,int>::Delegate3<DangerRoomModule,void(DangerRoomModule::*)(bool,int,int)>
          (Delegate3<bool,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675bb20;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<bool,int,int,DangerRoomModule,void(DangerRoomModule::*)(bool,int,int)>::
       thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<bool, int, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate3<bool,int,int>::Invoke
          (Delegate3<bool,int,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  iVar3 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,bVar1,iVar2,iVar3);
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


/* Sexy::Delegate3<std::string const&, std::string const&,
   int>::Delegate3<EffectAnimRig_JalapenoFireSquare, void
   (EffectAnimRig_JalapenoFireSquare::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<EffectAnimRig_JalapenoFireSquare, void
   (EffectAnimRig_JalapenoFireSquare::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<EffectAnimRig_JalapenoFireSquare,void(EffectAnimRig_JalapenoFireSquare::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,EffectAnimRig_JalapenoFireSquare,void(EffectAnimRig_JalapenoFireSquare::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<EffectObject_DinoTread, void
   (EffectObject_DinoTread::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<EffectObject_DinoTread, void
   (EffectObject_DinoTread::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<EffectObject_DinoTread,void(EffectObject_DinoTread::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,EffectObject_DinoTread,void(EffectObject_DinoTread::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<FutureStage, void (FutureStage::*)(Sexy::Point
   const&, PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<FutureStage, void (FutureStage::*)(Sexy::Point const&, PlantType
   const*, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<FutureStage,void(FutureStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,FutureStage,void(FutureStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<PowerTileSubsystem, void
   (PowerTileSubsystem::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<PowerTileSubsystem, void
   (PowerTileSubsystem::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<PowerTileSubsystem,void(PowerTileSubsystem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,PowerTileSubsystem,void(PowerTileSubsystem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<GridItem, void (GridItem::*)(Sexy::Point const&,
   PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<GridItem, void (GridItem::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<GridItem,void(GridItem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,GridItem,void(GridItem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<GridSquareCoveringFlame, void
   (GridSquareCoveringFlame::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<GridSquareCoveringFlame, void
   (GridSquareCoveringFlame::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<GridSquareCoveringFlame,void(GridSquareCoveringFlame::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,GridSquareCoveringFlame,void(GridSquareCoveringFlame::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<MechanismPlankModule, void
   (MechanismPlankModule::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<MechanismPlankModule, void
   (MechanismPlankModule::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<MechanismPlankModule,void(MechanismPlankModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,MechanismPlankModule,void(MechanismPlankModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, int, int>::Delegate3<MetricsCollector, void
   (MetricsCollector::*)(std::string const&, int, int)>(Sexy::CBMemberTranslatorX<MetricsCollector,
   void (MetricsCollector::*)(std::string const&, int, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,int,int>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int,int)>
          (Delegate3<std::string_const&,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c20;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,int,int,MetricsCollector,void(MetricsCollector::*)(std::string_const&,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<BasePowerup*, int, int>::Delegate3<MetricsCollector, void
   (MetricsCollector::*)(BasePowerup*, int, int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(BasePowerup*, int, int)> const&) */

void __thiscall
Sexy::Delegate3<BasePowerup*,int,int>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(BasePowerup*,int,int)>
          (Delegate3<BasePowerup*,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792790;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<BasePowerup*,int,int,MetricsCollector,void(MetricsCollector::*)(BasePowerup*,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<MapEventItem const*, std::string&, int>::Delegate3<MetricsCollector, void
   (MetricsCollector::*)(MapEventItem const*, std::string&,
   int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(MapEventItem const*,
   std::string&, int)> const&) */

void __thiscall
Sexy::Delegate3<MapEventItem_const*,std::string&,int>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(MapEventItem_const*,std::string&,int)>
          (Delegate3<MapEventItem_const*,std::string&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067927f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<MapEventItem_const*,std::string&,int,MetricsCollector,void(MetricsCollector::*)(MapEventItem_const*,std::string&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps> const&, bool,
   int>::Delegate3<MetricsCollector, void (MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>
   const&, bool, int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps> const&, bool, int)> const&) */

void __thiscall
Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int)>
          (Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792830;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int,MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<MapEventItem const*, std::string const&, int>::Delegate3<MetricsCollector, void
   (MetricsCollector::*)(MapEventItem const*, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(MapEventItem const*,
   std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<MapEventItem_const*,std::string_const&,int>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(MapEventItem_const*,std::string_const&,int)>
          (Delegate3<MapEventItem_const*,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792850;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<MapEventItem_const*,std::string_const&,int,MetricsCollector,void(MetricsCollector::*)(MapEventItem_const*,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, std::string const&, int>::Delegate3<MetricsCollector, void
   (MetricsCollector::*)(int, std::string const&, int)>(Sexy::CBMemberTranslatorX<MetricsCollector,
   void (MetricsCollector::*)(int, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<int,std::string_const&,int>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(int,std::string_const&,int)>
          (Delegate3<int,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792870;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,std::string_const&,int,MetricsCollector,void(MetricsCollector::*)(int,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const,
   int> > > const&>::Delegate3<MetricsCollector, void (MetricsCollector::*)(int, int, std::map<int,
   int, std::less<int>, std::allocator<std::pair<int const, int> > >
   const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(int, int,
   std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&)> const&)
    */

void __thiscall
Sexy::
Delegate3<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&)>
          (Delegate3<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067928b0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,MetricsCollector,void(MetricsCollector::*)(int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, int, std::string const&>::Delegate3<MetricsCollector, void
   (MetricsCollector::*)(std::string const&, int, std::string
   const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(std::string
   const&, int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,int,std::string_const&>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int,std::string_const&)>
          (Delegate3<std::string_const&,int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067928d0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,int,std::string_const&,MetricsCollector,void(MetricsCollector::*)(std::string_const&,int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<MetricsCollector, void
   (MetricsCollector::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(std::string const&,
   std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps> const&, int,
   int>::Delegate3<MetricsCollector, void (MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>
   const&, int, int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps> const&, int, int)> const&) */

void __thiscall
Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int,int)>
          (Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int,MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::vector<PlantInfo, std::allocator<PlantInfo> >&, int,
   int>::Delegate3<MetricsCollector, void (MetricsCollector::*)(std::vector<PlantInfo,
   std::allocator<PlantInfo> >&, int, int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(std::vector<PlantInfo, std::allocator<PlantInfo> >&, int, int)> const&) */

void __thiscall
Sexy::Delegate3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int)>
          (Delegate3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792950;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int,MetricsCollector,void(MetricsCollector::*)(std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, std::vector<PlantInfo, std::allocator<PlantInfo>
   >&>::Delegate3<MetricsCollector, void (MetricsCollector::*)(int, int, std::vector<PlantInfo,
   std::allocator<PlantInfo> >&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(int, int, std::vector<PlantInfo, std::allocator<PlantInfo> >&)> const&) */

void __thiscall
Sexy::Delegate3<int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&)>
          (Delegate3<int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792970;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&,MetricsCollector,void(MetricsCollector::*)(int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, std::string
   const&>::Delegate3<MetricsCollector, void (MetricsCollector::*)(std::string const&, std::string
   const&, std::string const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(std::string const&, std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,std::string_const&>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&,std::string_const&)>
          (Delegate3<std::string_const&,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792990;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,std::string_const&,MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<bool, int, int>::Delegate3<MetricsCollector, void (MetricsCollector::*)(bool,
   int, int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(bool, int,
   int)> const&) */

void __thiscall
Sexy::Delegate3<bool,int,int>::Delegate3<MetricsCollector,void(MetricsCollector::*)(bool,int,int)>
          (Delegate3<bool,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675bb20;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<bool,int,int,MetricsCollector,void(MetricsCollector::*)(bool,int,int)>::
       thunk;
  return;
}


/* Sexy::Delegate3<int, int, int>::Delegate3<MetricsCollector, void (MetricsCollector::*)(int, int,
   int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(int, int, int)>
   const&) */

void __thiscall
Sexy::Delegate3<int,int,int>::Delegate3<MetricsCollector,void(MetricsCollector::*)(int,int,int)>
          (Delegate3<int,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067929d0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,int,MetricsCollector,void(MetricsCollector::*)(int,int,int)>::
       thunk;
  return;
}


/* Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps> const&, std::string const&,
   int>::Delegate3<MetricsCollector, void (MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>
   const&, std::string const&, int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps> const&, std::string const&, int)>
   const&) */

void __thiscall
Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int)>
          (Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067929f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, std::string const&>::Delegate3<MetricsCollector, void
   (MetricsCollector::*)(int, int, std::string const&)>(Sexy::CBMemberTranslatorX<MetricsCollector,
   void (MetricsCollector::*)(int, int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate3<int,int,std::string_const&>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(int,int,std::string_const&)>
          (Delegate3<int,int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611840;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,std::string_const&,MetricsCollector,void(MetricsCollector::*)(int,int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, std::vector<S2C_CodeRewardPlantNum,
   std::allocator<S2C_CodeRewardPlantNum> > const&>::Delegate3<MetricsCollector, void
   (MetricsCollector::*)(std::string const&, std::string const&, std::vector<S2C_CodeRewardPlantNum,
   std::allocator<S2C_CodeRewardPlantNum> > const&)>(Sexy::CBMemberTranslatorX<MetricsCollector,
   void (MetricsCollector::*)(std::string const&, std::string const&,
   std::vector<S2C_CodeRewardPlantNum, std::allocator<S2C_CodeRewardPlantNum> > const&)> const&) */

void __thiscall
Sexy::
Delegate3<std::string_const&,std::string_const&,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&>
::
Delegate3<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&)>
          (Delegate3<std::string_const&,std::string_const&,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792a50;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&,MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&, std::vector<int, std::allocator<int> >
   const&>::Delegate3<MetricsCollector, void (MetricsCollector::*)(std::vector<int,
   std::allocator<int> > const&, std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&, std::vector<int, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::
Delegate3<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>
::
Delegate3<MetricsCollector,void(MetricsCollector::*)(std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&)>
          (Delegate3<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792af0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,MetricsCollector,void(MetricsCollector::*)(std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> >&>::Delegate3<MetricsCollector, void (MetricsCollector::*)(int,
   std::vector<int, std::allocator<int> > const&, std::vector<int, std::allocator<int>
   >&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(int, std::vector<int,
   std::allocator<int> > const&, std::vector<int, std::allocator<int> >&)> const&) */

void __thiscall
Sexy::
Delegate3<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>&>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>&)>
          (Delegate3<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792b30;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>&,MetricsCollector,void(MetricsCollector::*)(int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&>::Delegate3<MetricsCollector, void (MetricsCollector::*)(int,
   std::vector<int, std::allocator<int> > const&, std::vector<int, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(int,
   std::vector<int, std::allocator<int> > const&, std::vector<int, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::
Delegate3<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>
::
Delegate3<MetricsCollector,void(MetricsCollector::*)(int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&)>
          (Delegate3<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792b50;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,MetricsCollector,void(MetricsCollector::*)(int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, TrackInfo const&, bool>::Delegate3<MetricsCollector, void
   (MetricsCollector::*)(int, TrackInfo const&, bool)>(Sexy::CBMemberTranslatorX<MetricsCollector,
   void (MetricsCollector::*)(int, TrackInfo const&, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,TrackInfo_const&,bool>::
Delegate3<MetricsCollector,void(MetricsCollector::*)(int,TrackInfo_const&,bool)>
          (Delegate3<int,TrackInfo_const&,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,TrackInfo_const&,bool,MetricsCollector,void(MetricsCollector::*)(int,TrackInfo_const&,bool)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, int, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate3<int,int,int>::Invoke
          (Delegate3<int,int,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  iVar3 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar1,iVar2,iVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, TrackInfo const&, bool>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<int,TrackInfo_const&,bool>::Invoke
          (Delegate3<int,TrackInfo_const&,bool> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  int iVar2;
  TrackInfo *pTVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = RtInvokeVariant::Get<int>(param_2);
  pTVar3 = RtInvokeVariant::Get<TrackInfo_const&>(param_2 + 0x10);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar2,pTVar3,bVar1);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::
Delegate3<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>
::Invoke(Delegate3<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>
         *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  vector *pvVar2;
  vector *pvVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pvVar2 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(param_2 + 0x10);
  pvVar3 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar1,pvVar2,pvVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&, std::vector<int, std::allocator<int> >
   const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::
Delegate3<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>
::Invoke(Delegate3<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>
         *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  vector *pvVar1;
  vector *pvVar2;
  vector *pvVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(param_2);
  pvVar2 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(param_2 + 0x10);
  pvVar3 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pvVar1,pvVar2,pvVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> >&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::
Delegate3<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>&>::
Invoke(Delegate3<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>&>
       *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  vector *pvVar2;
  vector *pvVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pvVar2 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(param_2 + 0x10);
  pvVar3 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>&>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar1,pvVar2,pvVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<std::string const&, std::string const&, std::string
   const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,std::string_const&>::Invoke
          (Delegate3<std::string_const&,std::string_const&,std::string_const&> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  string *psVar1;
  string *psVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = RtInvokeVariant::Get<std::string_const&>(param_2);
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,psVar1,psVar2,psVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<std::string const&, int, std::string const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<std::string_const&,int,std::string_const&>::Invoke
          (Delegate3<std::string_const&,int,std::string_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  string *psVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,psVar2,iVar1,psVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, std::string const&, int>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<int,std::string_const&,int>::Invoke
          (Delegate3<int,std::string_const&,int> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar1,psVar3,iVar2);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const,
   int> > > const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::
Delegate3<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>::
Invoke(Delegate3<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>
       *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  map *pmVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  pmVar3 = RtInvokeVariant::
           Get<std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>
                     (param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar1,iVar2,pmVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<std::string const&, std::string const&, std::vector<S2C_CodeRewardPlantNum,
   std::allocator<S2C_CodeRewardPlantNum> > const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::
Delegate3<std::string_const&,std::string_const&,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&>
::Invoke(Delegate3<std::string_const&,std::string_const&,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&>
         *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  string *psVar1;
  string *psVar2;
  vector *pvVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = RtInvokeVariant::Get<std::string_const&>(param_2);
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  pvVar3 = RtInvokeVariant::
           Get<std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&>
                     (param_2 + 0x20);
  (**(code **)(this + 0x28))(this,psVar1,psVar2,pvVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps> const&, std::string const&,
   int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int>::Invoke
          (Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  RtWeakPtr *pRVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = RtInvokeVariant::Get<Sexy::RtWeakPtr<MagentoProductProps>const&>(param_2);
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pRVar2,psVar3,iVar1);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps> const&, int,
   int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int>::Invoke
          (Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  RtWeakPtr *pRVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = RtInvokeVariant::Get<Sexy::RtWeakPtr<MagentoProductProps>const&>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pRVar3,iVar1,iVar2);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps> const&, bool,
   int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int>::Invoke
          (Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  int iVar2;
  RtWeakPtr *pRVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = RtInvokeVariant::Get<Sexy::RtWeakPtr<MagentoProductProps>const&>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pRVar3,bVar1,iVar2);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, int, std::vector<PlantInfo, std::allocator<PlantInfo>
   >&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&>::Invoke
          (Delegate3<int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  vector *pvVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  pvVar3 = RtInvokeVariant::Get<std::vector<PlantInfo,std::allocator<PlantInfo>>&>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar1,iVar2,pvVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<std::vector<PlantInfo, std::allocator<PlantInfo> >&, int,
   int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int>::Invoke
          (Delegate3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  vector *pvVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar3 = RtInvokeVariant::Get<std::vector<PlantInfo,std::allocator<PlantInfo>>&>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pvVar3,iVar1,iVar2);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<MapEventItem const*, std::string const&, int>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<MapEventItem_const*,std::string_const&,int>::Invoke
          (Delegate3<MapEventItem_const*,std::string_const&,int> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  MapEventItem *pMVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pMVar2 = RtInvokeVariant::Get<MapEventItem_const*>(param_2);
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pMVar2,psVar3,iVar1);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<MapEventItem const*, std::string&, int>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<MapEventItem_const*,std::string&,int>::Invoke
          (Delegate3<MapEventItem_const*,std::string&,int> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  MapEventItem *pMVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pMVar2 = RtInvokeVariant::Get<MapEventItem_const*>(param_2);
  psVar3 = RtInvokeVariant::Get<std::string&>(param_2 + 0x10);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pMVar2,psVar3,iVar1);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<BasePowerup*, int, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate3<BasePowerup*,int,int>::Invoke
          (Delegate3<BasePowerup*,int,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  BasePowerup *pBVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar3 = RtInvokeVariant::Get<BasePowerup*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pBVar3,iVar1,iVar2);
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


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<PirateStage, void (PirateStage::*)(Sexy::Point
   const&, PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<PirateStage, void (PirateStage::*)(Sexy::Point const&, PlantType
   const*, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<PirateStage,void(PirateStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,PirateStage,void(PirateStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<PoolDaylightStage, void
   (PoolDaylightStage::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<PoolDaylightStage, void
   (PoolDaylightStage::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<PoolDaylightStage,void(PoolDaylightStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,PoolDaylightStage,void(PoolDaylightStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<PlantGroupSubsystem, void
   (PlantGroupSubsystem::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<PlantGroupSubsystem, void
   (PlantGroupSubsystem::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Plant*, int, int>::Delegate3<PlantGroupSubsystem, void
   (PlantGroupSubsystem::*)(Plant*, int, int)>(Sexy::CBMemberTranslatorX<PlantGroupSubsystem, void
   (PlantGroupSubsystem::*)(Plant*, int, int)> const&) */

void __thiscall
Sexy::Delegate3<Plant*,int,int>::
Delegate3<PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Plant*,int,int)>
          (Delegate3<Plant*,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a70;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Plant*,int,int,PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Plant*,int,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<Plant*, int, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate3<Plant*,int,int>::Invoke
          (Delegate3<Plant*,int,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  Plant *pPVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = RtInvokeVariant::Get<Plant*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pPVar3,iVar1,iVar2);
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


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<PlantAquaVine, void (PlantAquaVine::*)(Sexy::Point
   const&, PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<PlantAquaVine, void (PlantAquaVine::*)(Sexy::Point const&,
   PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<PlantAquaVine,void(PlantAquaVine::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,PlantAquaVine,void(PlantAquaVine::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<PlantMagicbeans, void
   (PlantMagicbeans::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<PlantMagicbeans, void
   (PlantMagicbeans::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<PlantMagicbeans,void(PlantMagicbeans::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,PlantMagicbeans,void(PlantMagicbeans::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<PlantSquash, void (PlantSquash::*)(Sexy::Point
   const&, PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<PlantSquash, void (PlantSquash::*)(Sexy::Point const&, PlantType
   const*, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<PlantSquash,void(PlantSquash::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,PlantSquash,void(PlantSquash::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&,
   int>::Delegate3<EffectAnimRig_FirePeashooterFireSquare, void
   (EffectAnimRig_FirePeashooterFireSquare::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<EffectAnimRig_FirePeashooterFireSquare, void
   (EffectAnimRig_FirePeashooterFireSquare::*)(std::string const&, std::string const&, int)> const&)
    */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<EffectAnimRig_FirePeashooterFireSquare,void(EffectAnimRig_FirePeashooterFireSquare::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,EffectAnimRig_FirePeashooterFireSquare,void(EffectAnimRig_FirePeashooterFireSquare::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&,
   int>::Delegate3<EffectAnimRig_LavaGuavaCrackSquare, void
   (EffectAnimRig_LavaGuavaCrackSquare::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<EffectAnimRig_LavaGuavaCrackSquare, void
   (EffectAnimRig_LavaGuavaCrackSquare::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<EffectAnimRig_LavaGuavaCrackSquare,void(EffectAnimRig_LavaGuavaCrackSquare::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,EffectAnimRig_LavaGuavaCrackSquare,void(EffectAnimRig_LavaGuavaCrackSquare::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<Effect_AngerFlame, void
   (Effect_AngerFlame::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<Effect_AngerFlame, void (Effect_AngerFlame::*)(std::string
   const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<Effect_AngerFlame,void(Effect_AngerFlame::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,Effect_AngerFlame,void(Effect_AngerFlame::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, bool, bool>::Delegate3<PlantAdventureUI, void (PlantAdventureUI::*)(int,
   bool, bool)>(Sexy::CBMemberTranslatorX<PlantAdventureUI, void (PlantAdventureUI::*)(int, bool,
   bool)> const&) */

void __thiscall
Sexy::Delegate3<int,bool,bool>::Delegate3<PlantAdventureUI,void(PlantAdventureUI::*)(int,bool,bool)>
          (Delegate3<int,bool,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06830040;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,bool,bool,PlantAdventureUI,void(PlantAdventureUI::*)(int,bool,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, bool>::Delegate3<PlantAdventureUI, void (PlantAdventureUI::*)(int, int,
   bool)>(Sexy::CBMemberTranslatorX<PlantAdventureUI, void (PlantAdventureUI::*)(int, int, bool)>
   const&) */

void __thiscall
Sexy::Delegate3<int,int,bool>::Delegate3<PlantAdventureUI,void(PlantAdventureUI::*)(int,int,bool)>
          (Delegate3<int,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695d80;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,bool,PlantAdventureUI,void(PlantAdventureUI::*)(int,int,bool)>::
       thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, bool, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate3<int,bool,bool>::Invoke
          (Delegate3<int,bool,bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = RtInvokeVariant::Get<int>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  bVar2 = RtInvokeVariant::Get<bool>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar3,bVar1,bVar2);
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


/* Sexy::Delegate3<MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*>::Delegate3<PowerupManager, void (PowerupManager::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*)>(Sexy::CBMemberTranslatorX<PowerupManager, void (PowerupManager::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo const*)> const&) */

void __thiscall
Sexy::Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*>::
Delegate3<PowerupManager,void(PowerupManager::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
          (Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*> *this
          ,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06832190;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,PowerupManager,void(PowerupManager::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*>::Invoke
          (Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*> *this
          ,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  MsgResultInfo *pMVar1;
  S2C_ICloud_GetConsumeGemInfo *pSVar2;
  S2C_PlayerInfo *pSVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pMVar1 = RtInvokeVariant::Get<MsgResultInfo*>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_ICloud_GetConsumeGemInfo_const*>(param_2 + 0x10);
  pSVar3 = RtInvokeVariant::Get<S2C_PlayerInfo_const*>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pMVar1,pSVar2,pSVar3);
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


/* Sexy::Delegate3<Sexy::Point const&, int, float>::Delegate3<PowerupPinchZombie, void
   (PowerupPinchZombie::*)(Sexy::Point, int, float)>(Sexy::CBMemberTranslatorX<PowerupPinchZombie,
   void (PowerupPinchZombie::*)(Sexy::Point, int, float)> const&) */

void __thiscall
Sexy::Delegate3<Sexy::Point_const&,int,float>::
Delegate3<PowerupPinchZombie,void(PowerupPinchZombie::*)(Sexy::Point,int,float)>
          (Delegate3<Sexy::Point_const&,int,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,int,float,PowerupPinchZombie,void(PowerupPinchZombie::*)(Sexy::Point,int,float)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, WaveType::WaveType, bool>::Delegate3<PowerupCukeTutorialIntro, void
   (PowerupCukeTutorialIntro::*)(int, WaveType::WaveType,
   bool)>(Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro, void
   (PowerupCukeTutorialIntro::*)(int, WaveType::WaveType, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,WaveType::WaveType,bool>::
Delegate3<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(int,WaveType::WaveType,bool)>
          (Delegate3<int,WaveType::WaveType,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611880;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,WaveType::WaveType,bool,PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(int,WaveType::WaveType,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, std::string const&, std::string const&>::Delegate3<PurchaseMgr, void
   (PurchaseMgr::*)(int, std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<PurchaseMgr, void (PurchaseMgr::*)(int, std::string const&,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate3<int,std::string_const&,std::string_const&>::
Delegate3<PurchaseMgr,void(PurchaseMgr::*)(int,std::string_const&,std::string_const&)>
          (Delegate3<int,std::string_const&,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06833b10;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,std::string_const&,std::string_const&,PurchaseMgr,void(PurchaseMgr::*)(int,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, std::string const&, int>::Delegate3<PurchaseMgr, void (PurchaseMgr::*)(int,
   std::string const&, int)>(Sexy::CBMemberTranslatorX<PurchaseMgr, void (PurchaseMgr::*)(int,
   std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<int,std::string_const&,int>::
Delegate3<PurchaseMgr,void(PurchaseMgr::*)(int,std::string_const&,int)>
          (Delegate3<int,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792870;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,std::string_const&,int,PurchaseMgr,void(PurchaseMgr::*)(int,std::string_const&,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, std::string const&, std::string const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<int,std::string_const&,std::string_const&>::Invoke
          (Delegate3<int,std::string_const&,std::string_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  string *psVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  psVar3 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar1,psVar2,psVar3);
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


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<ProtectThePlantChallengeModule, void
   (ProtectThePlantChallengeModule::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<ProtectThePlantChallengeModule, void
   (ProtectThePlantChallengeModule::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ProtectThePlantChallengeModule,void(ProtectThePlantChallengeModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<RailcartModule, void
   (RailcartModule::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<RailcartModule, void
   (RailcartModule::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<RailcartModule,void(RailcartModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,RailcartModule,void(RailcartModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, bool>::Delegate3<SeedPacketUtils, void (SeedPacketUtils::*)(int, int,
   bool)>(Sexy::CBMemberTranslatorX<SeedPacketUtils, void (SeedPacketUtils::*)(int, int, bool)>
   const&) */

void __thiscall
Sexy::Delegate3<int,int,bool>::Delegate3<SeedPacketUtils,void(SeedPacketUtils::*)(int,int,bool)>
          (Delegate3<int,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695d80;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,bool,SeedPacketUtils,void(SeedPacketUtils::*)(int,int,bool)>::
       thunk;
  return;
}


/* Sexy::Delegate3<int, WaveType::WaveType, bool>::Delegate3<StageModule, void (StageModule::*)(int,
   WaveType::WaveType, bool)>(Sexy::CBMemberTranslatorX<StageModule, void (StageModule::*)(int,
   WaveType::WaveType, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,WaveType::WaveType,bool>::
Delegate3<StageModule,void(StageModule::*)(int,WaveType::WaveType,bool)>
          (Delegate3<int,WaveType::WaveType,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611880;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,WaveType::WaveType,bool,StageModule,void(StageModule::*)(int,WaveType::WaveType,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<StarChallengePlantBeforeLine, void
   (StarChallengePlantBeforeLine::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<StarChallengePlantBeforeLine, void
   (StarChallengePlantBeforeLine::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<StarChallengeSimultaneousPlants, void
   (StarChallengeSimultaneousPlants::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<StarChallengeSimultaneousPlants, void
   (StarChallengeSimultaneousPlants::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<StarChallengeSimultaneousPlants,void(StarChallengeSimultaneousPlants::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,StarChallengeSimultaneousPlants,void(StarChallengeSimultaneousPlants::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Zombie*, int, float>::Delegate3<StarChallengeBufferTileZombieKill, void
   (StarChallengeBufferTileZombieKill::*)(Zombie*, int,
   float)>(Sexy::CBMemberTranslatorX<StarChallengeBufferTileZombieKill, void
   (StarChallengeBufferTileZombieKill::*)(Zombie*, int, float)> const&) */

void __thiscall
Sexy::Delegate3<Zombie*,int,float>::
Delegate3<StarChallengeBufferTileZombieKill,void(StarChallengeBufferTileZombieKill::*)(Zombie*,int,float)>
          (Delegate3<Zombie*,int,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0667acd0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Zombie*,int,float,StarChallengeBufferTileZombieKill,void(StarChallengeBufferTileZombieKill::*)(Zombie*,int,float)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Zombie*, int, float>::Delegate3<StarChallengePotionZombieKill, void
   (StarChallengePotionZombieKill::*)(Zombie*, int,
   float)>(Sexy::CBMemberTranslatorX<StarChallengePotionZombieKill, void
   (StarChallengePotionZombieKill::*)(Zombie*, int, float)> const&) */

void __thiscall
Sexy::Delegate3<Zombie*,int,float>::
Delegate3<StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)(Zombie*,int,float)>
          (Delegate3<Zombie*,int,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0667acd0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Zombie*,int,float,StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)(Zombie*,int,float)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<MoldColonyChallenge, void
   (MoldColonyChallenge::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<MoldColonyChallenge, void
   (MoldColonyChallenge::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<MoldColonyChallenge,void(MoldColonyChallenge::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,MoldColonyChallenge,void(MoldColonyChallenge::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, WaveType::WaveType, bool>::Delegate3<WaveProgressMeter, void
   (WaveProgressMeter::*)(int, WaveType::WaveType,
   bool)>(Sexy::CBMemberTranslatorX<WaveProgressMeter, void (WaveProgressMeter::*)(int,
   WaveType::WaveType, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,WaveType::WaveType,bool>::
Delegate3<WaveProgressMeter,void(WaveProgressMeter::*)(int,WaveType::WaveType,bool)>
          (Delegate3<int,WaveType::WaveType,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611880;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,WaveType::WaveType,bool,WaveProgressMeter,void(WaveProgressMeter::*)(int,WaveType::WaveType,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombieAnimRig_DiscoMech,
   void (ZombieAnimRig_DiscoMech::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombieAnimRig_DiscoMech, void
   (ZombieAnimRig_DiscoMech::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieAnimRig_DiscoMech,void(ZombieAnimRig_DiscoMech::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieAnimRig_DiscoMech,void(ZombieAnimRig_DiscoMech::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&,
   int>::Delegate3<ZombieWithPushingActionAnimRig, void
   (ZombieWithPushingActionAnimRig::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombieWithPushingActionAnimRig, void
   (ZombieWithPushingActionAnimRig::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieWithPushingActionAnimRig,void(ZombieWithPushingActionAnimRig::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieWithPushingActionAnimRig,void(ZombieWithPushingActionAnimRig::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<ZombieBeachFisherman, void
   (ZombieBeachFisherman::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<ZombieBeachFisherman, void
   (ZombieBeachFisherman::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ZombieBeachFisherman,void(ZombieBeachFisherman::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<ZombieDarkKing, void
   (ZombieDarkKing::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<ZombieDarkKing, void
   (ZombieDarkKing::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<ZombieDarkKing,void(ZombieDarkKing::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ZombieDarkKing,void(ZombieDarkKing::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombieCavalry, void
   (ZombieCavalry::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombieCavalry, void (ZombieCavalry::*)(std::string const&,
   std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieCavalry,void(ZombieCavalry::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieCavalry,void(ZombieCavalry::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombieBull, void
   (ZombieBull::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombieBull, void (ZombieBull::*)(std::string const&, std::string
   const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieBull,void(ZombieBull::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieBull,void(ZombieBull::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombieTreasureYeti, void
   (ZombieTreasureYeti::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombieTreasureYeti, void (ZombieTreasureYeti::*)(std::string
   const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieTreasureYeti,void(ZombieTreasureYeti::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieTreasureYeti,void(ZombieTreasureYeti::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<ZombieZombossMech, void
   (ZombieZombossMech::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<ZombieZombossMech, void
   (ZombieZombossMech::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<ZombieZombossMech,void(ZombieZombossMech::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ZombieZombossMech,void(ZombieZombossMech::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombieMonkDrink, void
   (ZombieMonkDrink::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombieMonkDrink, void (ZombieMonkDrink::*)(std::string const&,
   std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieMonkDrink,void(ZombieMonkDrink::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieMonkDrink,void(ZombieMonkDrink::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<ZombossBattleModule, void
   (ZombossBattleModule::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<ZombossBattleModule, void
   (ZombossBattleModule::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<ZombossBattleModule,void(ZombossBattleModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ZombossBattleModule,void(ZombossBattleModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<ZombossLastStandMinigameModule, void
   (ZombossLastStandMinigameModule::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<ZombossLastStandMinigameModule, void
   (ZombossLastStandMinigameModule::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ZombossLastStandMinigameModule,void(ZombossLastStandMinigameModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombieAnimRig_Troglobite,
   void (ZombieWithPushingActionAnimRig::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombieAnimRig_Troglobite, void
   (ZombieWithPushingActionAnimRig::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieAnimRig_Troglobite,void(ZombieWithPushingActionAnimRig::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieAnimRig_Troglobite,void(ZombieWithPushingActionAnimRig::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<Effect_WalrusEarthTile, void
   (Effect_WalrusEarthTile::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<Effect_WalrusEarthTile, void
   (Effect_WalrusEarthTile::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<Effect_WalrusEarthTile,void(Effect_WalrusEarthTile::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Effect_WalrusEarthTile,void(Effect_WalrusEarthTile::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombieAnimRig_PushEgg,
   void (ZombieWithPushingActionAnimRig::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombieAnimRig_PushEgg, void
   (ZombieWithPushingActionAnimRig::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieAnimRig_PushEgg,void(ZombieWithPushingActionAnimRig::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieAnimRig_PushEgg,void(ZombieWithPushingActionAnimRig::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<Creature, void
   (Creature::*)(std::string const&, std::string const&, int)>(Sexy::CBMemberTranslatorX<Creature,
   void (Creature::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<Creature,void(Creature::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,Creature,void(Creature::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<DinosaurPterodactyl, void
   (DinosaurPterodactyl::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<DinosaurPterodactyl, void (DinosaurPterodactyl::*)(std::string
   const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<DinosaurPterodactyl,void(DinosaurPterodactyl::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,DinosaurPterodactyl,void(DinosaurPterodactyl::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<DinosaurAnkylosaurus,
   void (DinosaurAnkylosaurus::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<DinosaurAnkylosaurus, void (DinosaurAnkylosaurus::*)(std::string
   const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<DinosaurStegosaurus, void
   (DinosaurStegosaurus::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<DinosaurStegosaurus, void (DinosaurStegosaurus::*)(std::string
   const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,DinosaurStegosaurus,void(DinosaurStegosaurus::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<DinosaurTyrannosaurus,
   void (DinosaurTyrannosaurus::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<DinosaurTyrannosaurus, void
   (DinosaurTyrannosaurus::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,DinosaurTyrannosaurus,void(DinosaurTyrannosaurus::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<SharkMinion, void (SharkMinion::*)(Sexy::Point
   const&, PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<SharkMinion, void (SharkMinion::*)(Sexy::Point const&, PlantType
   const*, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<SharkMinion,void(SharkMinion::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,SharkMinion,void(SharkMinion::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<GuideEndDoor, void (GuideEndDoor::*)(Sexy::Point
   const&, PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<GuideEndDoor, void (GuideEndDoor::*)(Sexy::Point const&, PlantType
   const*, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<GuideEndDoor,void(GuideEndDoor::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,GuideEndDoor,void(GuideEndDoor::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<GuideStartDoor, void
   (GuideStartDoor::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<GuideStartDoor, void
   (GuideStartDoor::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<GuideStartDoor,void(GuideStartDoor::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,GuideStartDoor,void(GuideStartDoor::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, int>::Delegate3<EliminateModule, void (EliminateModule::*)(int, int,
   int)>(Sexy::CBMemberTranslatorX<EliminateModule, void (EliminateModule::*)(int, int, int)>
   const&) */

void __thiscall
Sexy::Delegate3<int,int,int>::Delegate3<EliminateModule,void(EliminateModule::*)(int,int,int)>
          (Delegate3<int,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067929d0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,int,EliminateModule,void(EliminateModule::*)(int,int,int)>::thunk
  ;
  return;
}


/* Sexy::Delegate3<MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*>::Delegate3<DangerRoomManager, void (DangerRoomManager::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*)>(Sexy::CBMemberTranslatorX<DangerRoomManager, void (DangerRoomManager::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo const*)> const&) */

void __thiscall
Sexy::Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*>::
Delegate3<DangerRoomManager,void(DangerRoomManager::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
          (Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*> *this
          ,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06832190;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,DangerRoomManager,void(DangerRoomManager::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, S2C_DangerRoomSkipLevel const*, S2C_PlayerInfo
   const*>::Delegate3<DangerRoomManager, void (DangerRoomManager::*)(int, S2C_DangerRoomSkipLevel
   const*, S2C_PlayerInfo const*)>(Sexy::CBMemberTranslatorX<DangerRoomManager, void
   (DangerRoomManager::*)(int, S2C_DangerRoomSkipLevel const*, S2C_PlayerInfo const*)> const&) */

void __thiscall
Sexy::Delegate3<int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*>::
Delegate3<DangerRoomManager,void(DangerRoomManager::*)(int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*)>
          (Delegate3<int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0693f3b0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*,DangerRoomManager,void(DangerRoomManager::*)(int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<int, S2C_DangerRoomSkipLevel const*, S2C_PlayerInfo
   const*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate3<int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*>::Invoke
          (Delegate3<int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  S2C_DangerRoomSkipLevel *pSVar2;
  S2C_PlayerInfo *pSVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_DangerRoomSkipLevel_const*>(param_2 + 0x10);
  pSVar3 = RtInvokeVariant::Get<S2C_PlayerInfo_const*>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,iVar1,pSVar2,pSVar3);
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


/* Sexy::Delegate3<int, S2C_DangerRoomSkipLevel const*, S2C_PlayerInfo
   const*>::Delegate3<UIDangerRoomSkipLevel, void (UIDangerRoomSkipLevel::*)(int,
   S2C_DangerRoomSkipLevel const*, S2C_PlayerInfo
   const*)>(Sexy::CBMemberTranslatorX<UIDangerRoomSkipLevel, void (UIDangerRoomSkipLevel::*)(int,
   S2C_DangerRoomSkipLevel const*, S2C_PlayerInfo const*)> const&) */

void __thiscall
Sexy::Delegate3<int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*>::
Delegate3<UIDangerRoomSkipLevel,void(UIDangerRoomSkipLevel::*)(int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*)>
          (Delegate3<int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0693f3b0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*,UIDangerRoomSkipLevel,void(UIDangerRoomSkipLevel::*)(int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, int>::Delegate3<PVPCompensationNoticeDlgCaller, void
   (PVPCompensationNoticeDlgCaller::*)(int, int,
   int)>(Sexy::CBMemberTranslatorX<PVPCompensationNoticeDlgCaller, void
   (PVPCompensationNoticeDlgCaller::*)(int, int, int)> const&) */

void __thiscall
Sexy::Delegate3<int,int,int>::
Delegate3<PVPCompensationNoticeDlgCaller,void(PVPCompensationNoticeDlgCaller::*)(int,int,int)>
          (Delegate3<int,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067929d0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,int,PVPCompensationNoticeDlgCaller,void(PVPCompensationNoticeDlgCaller::*)(int,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Plant*, int, int>::Delegate3<ArenaPlantModule, void (ArenaPlantModule::*)(Plant*,
   int, int)>(Sexy::CBMemberTranslatorX<ArenaPlantModule, void (ArenaPlantModule::*)(Plant*, int,
   int)> const&) */

void __thiscall
Sexy::Delegate3<Plant*,int,int>::
Delegate3<ArenaPlantModule,void(ArenaPlantModule::*)(Plant*,int,int)>
          (Delegate3<Plant*,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a70;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Plant*,int,int,ArenaPlantModule,void(ArenaPlantModule::*)(Plant*,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*>::Delegate3<ActiveSummery, void (ActiveSummery::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*)>(Sexy::CBMemberTranslatorX<ActiveSummery, void (ActiveSummery::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo const*)> const&) */

void __thiscall
Sexy::Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*>::
Delegate3<ActiveSummery,void(ActiveSummery::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
          (Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*> *this
          ,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06832190;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,ActiveSummery,void(ActiveSummery::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*>::Delegate3<ActivityManager, void (ActivityManager::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*)>(Sexy::CBMemberTranslatorX<ActivityManager, void (ActivityManager::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo const*)> const&) */

void __thiscall
Sexy::Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*>::
Delegate3<ActivityManager,void(ActivityManager::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
          (Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*> *this
          ,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06832190;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,ActivityManager,void(ActivityManager::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, int>::Delegate3<ActivityLevelsChoose, void
   (ActivityLevelsChoose::*)(int, int, int)>(Sexy::CBMemberTranslatorX<ActivityLevelsChoose, void
   (ActivityLevelsChoose::*)(int, int, int)> const&) */

void __thiscall
Sexy::Delegate3<int,int,int>::
Delegate3<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(int,int,int)>
          (Delegate3<int,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067929d0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,int,ActivityLevelsChoose,void(ActivityLevelsChoose::*)(int,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*>::Delegate3<BossChallenge, void (BossChallenge::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*)>(Sexy::CBMemberTranslatorX<BossChallenge, void (BossChallenge::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo const*)> const&) */

void __thiscall
Sexy::Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*>::
Delegate3<BossChallenge,void(BossChallenge::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
          (Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*> *this
          ,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06832190;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,BossChallenge,void(BossChallenge::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*>::Delegate3<UIBossMedalLottery, void (UIBossMedalLottery::*)(MsgResultInfo*,
   S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*)>(Sexy::CBMemberTranslatorX<UIBossMedalLottery, void
   (UIBossMedalLottery::*)(MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*, S2C_PlayerInfo
   const*)> const&) */

void __thiscall
Sexy::Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*>::
Delegate3<UIBossMedalLottery,void(UIBossMedalLottery::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
          (Delegate3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*> *this
          ,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06832190;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,UIBossMedalLottery,void(UIBossMedalLottery::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<bool, int, int>::Delegate3<ActiveChristmasLotteryTab, void
   (ActiveChristmasLotteryTab::*)(bool, int,
   int)>(Sexy::CBMemberTranslatorX<ActiveChristmasLotteryTab, void
   (ActiveChristmasLotteryTab::*)(bool, int, int)> const&) */

void __thiscall
Sexy::Delegate3<bool,int,int>::
Delegate3<ActiveChristmasLotteryTab,void(ActiveChristmasLotteryTab::*)(bool,int,int)>
          (Delegate3<bool,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675bb20;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<bool,int,int,ActiveChristmasLotteryTab,void(ActiveChristmasLotteryTab::*)(bool,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&,
   int>::Delegate3<EffectAnimRig_JackOLanternFireSquare, void
   (EffectAnimRig_JackOLanternFireSquare::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<EffectAnimRig_JackOLanternFireSquare, void
   (EffectAnimRig_JackOLanternFireSquare::*)(std::string const&, std::string const&, int)> const&)
    */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<EffectAnimRig_JackOLanternFireSquare,void(EffectAnimRig_JackOLanternFireSquare::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,EffectAnimRig_JackOLanternFireSquare,void(EffectAnimRig_JackOLanternFireSquare::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Plant*, bool, bool>::Delegate3<PlantDevilsFlower, void
   (PlantDevilsFlower::*)(Plant*, bool, bool)>(Sexy::CBMemberTranslatorX<PlantDevilsFlower, void
   (PlantDevilsFlower::*)(Plant*, bool, bool)> const&) */

void __thiscall
Sexy::Delegate3<Plant*,bool,bool>::
Delegate3<PlantDevilsFlower,void(PlantDevilsFlower::*)(Plant*,bool,bool)>
          (Delegate3<Plant*,bool,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069b5fc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Plant*,bool,bool,PlantDevilsFlower,void(PlantDevilsFlower::*)(Plant*,bool,bool)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate3<Plant*, bool, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate3<Plant*,bool,bool>::Invoke
          (Delegate3<Plant*,bool,bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  bool bVar2;
  Plant *pPVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = RtInvokeVariant::Get<Plant*>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  bVar2 = RtInvokeVariant::Get<bool>(param_2 + 0x20);
  (**(code **)(this + 0x28))(this,pPVar3,bVar1,bVar2);
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


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<UIBag, void
   (UIBag::*)(std::string const&, std::string const&, int)>(Sexy::CBMemberTranslatorX<UIBag, void
   (UIBag::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<UIBag,void(UIBag::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,UIBag,void(UIBag::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, bool>::Delegate3<PVZ2UnchartedModeSelectLevelAnniversary, void
   (PVZ2UnchartedModeSelectLevelAnniversary::*)(int, int,
   bool)>(Sexy::CBMemberTranslatorX<PVZ2UnchartedModeSelectLevelAnniversary, void
   (PVZ2UnchartedModeSelectLevelAnniversary::*)(int, int, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,int,bool>::
Delegate3<PVZ2UnchartedModeSelectLevelAnniversary,void(PVZ2UnchartedModeSelectLevelAnniversary::*)(int,int,bool)>
          (Delegate3<int,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695d80;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,bool,PVZ2UnchartedModeSelectLevelAnniversary,void(PVZ2UnchartedModeSelectLevelAnniversary::*)(int,int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<PVZ1SeeingStarsModule, void
   (PVZ1SeeingStarsModule::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<PVZ1SeeingStarsModule, void
   (PVZ1SeeingStarsModule::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<PVZ1SeeingStarsModule,void(PVZ1SeeingStarsModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,PVZ1SeeingStarsModule,void(PVZ1SeeingStarsModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Zombie*, int*, float*>::Delegate3<GridItemThorns, void
   (GridItemThorns::*)(Zombie*, int*, float*)>(Sexy::CBMemberTranslatorX<GridItemThorns, void
   (GridItemThorns::*)(Zombie*, int*, float*)> const&) */

void __thiscall
Sexy::Delegate3<Zombie*,int*,float*>::
Delegate3<GridItemThorns,void(GridItemThorns::*)(Zombie*,int*,float*)>
          (Delegate3<Zombie*,int*,float*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689830;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Zombie*,int*,float*,GridItemThorns,void(GridItemThorns::*)(Zombie*,int*,float*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<DChestAnimNode, void
   (DChestAnimNode::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<DChestAnimNode, void (DChestAnimNode::*)(std::string const&,
   std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<DChestAnimNode,void(DChestAnimNode::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,DChestAnimNode,void(DChestAnimNode::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, int>::Delegate3<AutumnHarvestLotteryPanel, void
   (AutumnHarvestLotteryPanel::*)(int, int,
   int)>(Sexy::CBMemberTranslatorX<AutumnHarvestLotteryPanel, void
   (AutumnHarvestLotteryPanel::*)(int, int, int)> const&) */

void __thiscall
Sexy::Delegate3<int,int,int>::
Delegate3<AutumnHarvestLotteryPanel,void(AutumnHarvestLotteryPanel::*)(int,int,int)>
          (Delegate3<int,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067929d0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,int,AutumnHarvestLotteryPanel,void(AutumnHarvestLotteryPanel::*)(int,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombieFairyTaleImp, void
   (ZombieFairyTaleImp::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombieFairyTaleImp, void (ZombieFairyTaleImp::*)(std::string
   const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieFairyTaleImp,void(ZombieFairyTaleImp::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieFairyTaleImp,void(ZombieFairyTaleImp::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, bool>::Delegate3<GridItemPoisonMist, void (GridItemPoisonMist::*)(int,
   int, bool)>(Sexy::CBMemberTranslatorX<GridItemPoisonMist, void (GridItemPoisonMist::*)(int, int,
   bool)> const&) */

void __thiscall
Sexy::Delegate3<int,int,bool>::
Delegate3<GridItemPoisonMist,void(GridItemPoisonMist::*)(int,int,bool)>
          (Delegate3<int,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695d80;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,bool,GridItemPoisonMist,void(GridItemPoisonMist::*)(int,int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, bool>::Delegate3<ToxicWaterGridItemPoisonMist, void
   (ToxicWaterGridItemPoisonMist::*)(int, int,
   bool)>(Sexy::CBMemberTranslatorX<ToxicWaterGridItemPoisonMist, void
   (ToxicWaterGridItemPoisonMist::*)(int, int, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,int,bool>::
Delegate3<ToxicWaterGridItemPoisonMist,void(ToxicWaterGridItemPoisonMist::*)(int,int,bool)>
          (Delegate3<int,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695d80;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,bool,ToxicWaterGridItemPoisonMist,void(ToxicWaterGridItemPoisonMist::*)(int,int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, bool>::Delegate3<GridItemZombieMirrorQueenPoisonApplePuree, void
   (GridItemZombieMirrorQueenPoisonApplePuree::*)(int, int,
   bool)>(Sexy::CBMemberTranslatorX<GridItemZombieMirrorQueenPoisonApplePuree, void
   (GridItemZombieMirrorQueenPoisonApplePuree::*)(int, int, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,int,bool>::
Delegate3<GridItemZombieMirrorQueenPoisonApplePuree,void(GridItemZombieMirrorQueenPoisonApplePuree::*)(int,int,bool)>
          (Delegate3<int,int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695d80;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,bool,GridItemZombieMirrorQueenPoisonApplePuree,void(GridItemZombieMirrorQueenPoisonApplePuree::*)(int,int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&,
   int>::Delegate3<ZombossRobotBaseZombieActionHandler, void
   (ZombossRobotBaseZombieActionHandler::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombossRobotBaseZombieActionHandler, void
   (ZombossRobotBaseZombieActionHandler::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombossRobotBaseZombieActionHandler,void(ZombossRobotBaseZombieActionHandler::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombossRobotBaseZombieActionHandler,void(ZombossRobotBaseZombieActionHandler::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombiePumpkinKnight, void
   (ZombiePumpkinKnight::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<ZombiePumpkinKnight, void (ZombiePumpkinKnight::*)(std::string
   const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<EffectPumpkinKnightBullRunning, void
   (EffectPumpkinKnightBullRunning::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<EffectPumpkinKnightBullRunning, void
   (EffectPumpkinKnightBullRunning::*)(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<EffectPumpkinKnightBullRunning,void(EffectPumpkinKnightBullRunning::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,EffectPumpkinKnightBullRunning,void(EffectPumpkinKnightBullRunning::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<ZombieVan, void
   (ZombieVan::*)(std::string const&, std::string const&, int)>(Sexy::CBMemberTranslatorX<ZombieVan,
   void (ZombieVan::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<ZombieVan,void(ZombieVan::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,ZombieVan,void(ZombieVan::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<ZombieVan, void (ZombieVan::*)(Sexy::Point const&,
   PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<ZombieVan, void (ZombieVan::*)(Sexy::Point const&, PlantType
   const*, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<ZombieVan,void(ZombieVan::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ZombieVan,void(ZombieVan::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<DAnimNode, void
   (DAnimNode::*)(std::string const&, std::string const&, int)>(Sexy::CBMemberTranslatorX<DAnimNode,
   void (DAnimNode::*)(std::string const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<DAnimNode,void(DAnimNode::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,DAnimNode,void(DAnimNode::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, int>::Delegate3<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(int, int, int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(int, int, int)> const&) */

void __thiscall
Sexy::Delegate3<int,int,int>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,int,int)>
          (Delegate3<int,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067929d0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<MapEventItem const*, std::string&, int>::Delegate3<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(MapEventItem const*, std::string&,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(MapEventItem
   const*, std::string&, int)> const&) */

void __thiscall
Sexy::Delegate3<MapEventItem_const*,std::string&,int>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(MapEventItem_const*,std::string&,int)>
          (Delegate3<MapEventItem_const*,std::string&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067927f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<MapEventItem_const*,std::string&,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(MapEventItem_const*,std::string&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<MapEventItem const*, std::string const&, int>::Delegate3<Lua::LMMessageRouter,
   void (Lua::LMMessageRouter::*)(MapEventItem const*, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(MapEventItem
   const*, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<MapEventItem_const*,std::string_const&,int>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(MapEventItem_const*,std::string_const&,int)>
          (Delegate3<MapEventItem_const*,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792850;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<MapEventItem_const*,std::string_const&,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(MapEventItem_const*,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, int>::Delegate3<Lua::LMMessageRouter,
   void (Lua::LMMessageRouter::*)(std::string const&, std::string const&,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(std::string
   const&, std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,int>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,std::string_const&,int)>
          (Delegate3<std::string_const&,std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06619910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, int, int>::Delegate3<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(std::string const&, int,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(std::string
   const&, int, int)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,int,int>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,int,int)>
          (Delegate3<std::string_const&,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c20;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,int,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::string const&, std::string const&, std::string
   const&>::Delegate3<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(std::string const&,
   std::string const&, std::string const&)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(std::string const&, std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate3<std::string_const&,std::string_const&,std::string_const&>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,std::string_const&,std::string_const&)>
          (Delegate3<std::string_const&,std::string_const&,std::string_const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792990;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::string_const&,std::string_const&,std::string_const&,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Plant*, int, int>::Delegate3<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Plant*, int, int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Plant*, int, int)> const&) */

void __thiscall
Sexy::Delegate3<Plant*,int,int>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Plant*,int,int)>
          (Delegate3<Plant*,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a70;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Plant*,int,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Plant*,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<BasePowerup*, int, int>::Delegate3<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(BasePowerup*, int,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(BasePowerup*, int, int)> const&) */

void __thiscall
Sexy::Delegate3<BasePowerup*,int,int>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(BasePowerup*,int,int)>
          (Delegate3<BasePowerup*,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792790;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<BasePowerup*,int,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(BasePowerup*,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, std::string const&>::Delegate3<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(int, int, std::string
   const&)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(int, int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate3<int,int,std::string_const&>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,int,std::string_const&)>
          (Delegate3<int,int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611840;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,std::string_const&,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*>::Delegate3<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::Point const&, PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::
Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066118a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps> const&, bool,
   int>::Delegate3<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps> const&, bool,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps> const&, bool, int)> const&) */

void __thiscall
Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int)>
          (Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792830;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps> const&, int,
   int>::Delegate3<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps> const&, int,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps> const&, int, int)> const&) */

void __thiscall
Sexy::Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int,int)>
          (Delegate3<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792910;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<std::vector<PlantInfo, std::allocator<PlantInfo> >&, int,
   int>::Delegate3<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(std::vector<PlantInfo,
   std::allocator<PlantInfo> >&, int, int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(std::vector<PlantInfo, std::allocator<PlantInfo> >&, int, int)> const&)
    */

void __thiscall
Sexy::Delegate3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int)>
          (Delegate3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792950;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, int, std::vector<PlantInfo, std::allocator<PlantInfo>
   >&>::Delegate3<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(int, int,
   std::vector<PlantInfo, std::allocator<PlantInfo>
   >&)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(int, int,
   std::vector<PlantInfo, std::allocator<PlantInfo> >&)> const&) */

void __thiscall
Sexy::Delegate3<int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&)>
          (Delegate3<int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792970;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,int,std::vector<PlantInfo,std::allocator<PlantInfo>>&)>
       ::thunk;
  return;
}


/* Sexy::Delegate3<int, WaveType::WaveType, bool>::Delegate3<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(int, WaveType::WaveType,
   bool)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(int,
   WaveType::WaveType, bool)> const&) */

void __thiscall
Sexy::Delegate3<int,WaveType::WaveType,bool>::
Delegate3<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,WaveType::WaveType,bool)>
          (Delegate3<int,WaveType::WaveType,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611880;
  *(code **)(this + 0x28) =
       CBMemberTranslator3<int,WaveType::WaveType,bool,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,WaveType::WaveType,bool)>
       ::thunk;
  return;
}

