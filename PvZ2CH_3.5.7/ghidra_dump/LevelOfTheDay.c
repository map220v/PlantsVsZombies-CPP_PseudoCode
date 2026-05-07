// Class: LevelOfTheDay


/* LevelOfTheDay::GetSystem() */

long LevelOfTheDay::GetSystem(void)

{
  LevelOfTheDaySystem *this;
  
  if (Sexy::LazySingleton<LevelOfTheDaySystem>::m_instance != 0) {
    return Sexy::LazySingleton<LevelOfTheDaySystem>::m_instance;
  }
  this = ::operator_new(0x20);
  LevelOfTheDaySystem::LevelOfTheDaySystem(this);
  return Sexy::LazySingleton<LevelOfTheDaySystem>::m_instance;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay::GetProperties() */

void LevelOfTheDay::GetProperties(void)

{
  undefined8 uVar1;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"LevelOfTheDayProps");
  PVZDB::GetIdByAlias(aRStack_20,uVar1,4,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtId::~RtId(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

