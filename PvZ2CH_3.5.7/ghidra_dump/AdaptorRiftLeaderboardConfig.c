// Class: AdaptorRiftLeaderboardConfig


/* AdaptorRiftLeaderboardConfig::~AdaptorRiftLeaderboardConfig() */

void __thiscall
AdaptorRiftLeaderboardConfig::~AdaptorRiftLeaderboardConfig(AdaptorRiftLeaderboardConfig *this)

{
  std::_Destroy<AdaptorRiftLeaderboardEntryConfig*>
            (*(AdaptorRiftLeaderboardEntryConfig **)this,
             *(AdaptorRiftLeaderboardEntryConfig **)(this + 8));
  std::
  _Vector_base<AdaptorRiftLeaderboardEntryConfig,std::allocator<AdaptorRiftLeaderboardEntryConfig>>
  ::~_Vector_base((_Vector_base<AdaptorRiftLeaderboardEntryConfig,std::allocator<AdaptorRiftLeaderboardEntryConfig>>
                   *)this);
  return;
}


/* AdaptorRiftLeaderboardConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorRiftLeaderboardConfig const&) */

AdaptorRiftLeaderboardConfig * __thiscall
AdaptorRiftLeaderboardConfig::operator=
          (AdaptorRiftLeaderboardConfig *this,AdaptorRiftLeaderboardConfig *param_1)

{
  std::vector<AdaptorRiftLeaderboardEntryConfig,std::allocator<AdaptorRiftLeaderboardEntryConfig>>::
  operator=((vector<AdaptorRiftLeaderboardEntryConfig,std::allocator<AdaptorRiftLeaderboardEntryConfig>>
             *)this,(vector *)param_1);
  return this;
}


/* AdaptorRiftLeaderboardConfig::OrderByScore() */

void __thiscall AdaptorRiftLeaderboardConfig::OrderByScore(AdaptorRiftLeaderboardConfig *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  FUN_036733bc(uVar1,uVar2);
  uVar1 = *(undefined8 *)this;
  lVar3 = FUN_03671198(uVar1,*(undefined8 *)(this + 8));
  lVar5 = 0;
  while( true ) {
    if (lVar5 + 1 == lVar3 + 1) break;
    lVar4 = FUN_036711ac(uVar1,lVar5);
    *(int *)(lVar4 + 4) = (int)lVar5;
    lVar5 = lVar5 + 1;
  }
  return;
}

