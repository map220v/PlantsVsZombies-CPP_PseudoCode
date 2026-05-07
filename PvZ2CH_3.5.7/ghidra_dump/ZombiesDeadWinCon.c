// Class: ZombiesDeadWinCon


/* ZombiesDeadWinCon::StaticGetClass() */

long * ZombiesDeadWinCon::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiesDeadWinCon",uVar2,StaticNew);
  return sClass;
}


/* ZombiesDeadWinCon::ZombiesDeadWinCon() */

void __thiscall ZombiesDeadWinCon::ZombiesDeadWinCon(ZombiesDeadWinCon *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068b42e0;
  return;
}


/* ZombiesDeadWinCon::StaticNew() */

ZombiesDeadWinCon * ZombiesDeadWinCon::StaticNew(void)

{
  ZombiesDeadWinCon *this;
  
  this = ::operator_new(0x18);
  ZombiesDeadWinCon(this);
  return this;
}


/* ZombiesDeadWinCon::~ZombiesDeadWinCon() */

void __thiscall ZombiesDeadWinCon::~ZombiesDeadWinCon(ZombiesDeadWinCon *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068b42e0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ZombiesDeadWinCon::~ZombiesDeadWinCon() */

void __thiscall ZombiesDeadWinCon::~ZombiesDeadWinCon(ZombiesDeadWinCon *this)

{
  ~ZombiesDeadWinCon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesDeadWinCon::checkWin() */

void ZombiesDeadWinCon::checkWin(void)

{
  bool bVar1;
  char cVar2;
  vector *pvVar3;
  undefined8 *puVar4;
  string *psVar5;
  undefined8 uVar6;
  ResourceInfo *pRVar7;
  long lVar8;
  int extraout_w1;
  Zombie *this;
  undefined1 uVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 uStack_48;
  vector<Zombie*,std::allocator<Zombie*>> avStack_40 [24];
  undefined8 auStack_28 [4];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pvVar3 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Zombie*,std::allocator<Zombie*>>::vector(avStack_40,pvVar3);
  uStack_48 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_40);
  auStack_28[0] =
       std::
       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)avStack_40);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_48,(__normal_iterator *)auStack_28), bVar1)
  {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_48);
    this = (Zombie *)*puVar4;
    cVar2 = RealObject::IsOnTeam(this,2);
    if (cVar2 != '\0') {
      psVar5 = (string *)Zombie::GetTypeName(this);
      bVar1 = std::operator==(psVar5,"renai_toxicwater");
      if ((((!bVar1) && (cVar2 = Zombie::HasCondition(this,0x65), cVar2 == '\0')) &&
          (cVar2 = Zombie::HasCondition(this,0x81), cVar2 == '\0')) &&
         (((cVar2 = Zombie::IsControlled(this), uVar9 = 0, cVar2 == '\0' ||
           (fVar10 = (float)FUN_046d2890(*(undefined4 *)(this + 0x280)), 0.0 < fVar10)) ||
          (lVar8 = std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this), -300.0 <= *(float *)(lVar8 + 4))))) goto LAB_046d3930;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_48);
  }
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)auStack_28,uVar6,0x2f);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)auStack_28);
    if (!bVar1) {
      uVar9 = 1;
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)auStack_28);
LAB_046d3930:
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_40);
      if (lStack_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
    Sexy::RtDbTable::Iterator::operator*((Iterator *)auStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&uStack_48);
    Sexy::RtId::~RtId((RtId *)&uStack_48);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
    if ((pRVar7 != (ResourceInfo *)0x0) &&
       (cVar2 = (**(code **)(*(long *)pRVar7 + 0x220))(), cVar2 != '\0')) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)auStack_28);
      uVar9 = 0;
      goto LAB_046d3930;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)auStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesDeadWinCon::registerForEvents() */

void __thiscall ZombiesDeadWinCon::registerForEvents(ZombiesDeadWinCon *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<ZombiesDeadWinCon,bool(ZombiesDeadWinCon::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterWinCondition(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

