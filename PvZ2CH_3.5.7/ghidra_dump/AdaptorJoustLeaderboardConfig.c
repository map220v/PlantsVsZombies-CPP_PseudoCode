// Class: AdaptorJoustLeaderboardConfig


/* AdaptorJoustLeaderboardConfig::~AdaptorJoustLeaderboardConfig() */

void __thiscall
AdaptorJoustLeaderboardConfig::~AdaptorJoustLeaderboardConfig(AdaptorJoustLeaderboardConfig *this)

{
  std::_Destroy<AdaptorJoustLeaderboardEntryConfig*>
            (*(AdaptorJoustLeaderboardEntryConfig **)this,
             *(AdaptorJoustLeaderboardEntryConfig **)(this + 8));
  std::
  _Vector_base<AdaptorJoustLeaderboardEntryConfig,std::allocator<AdaptorJoustLeaderboardEntryConfig>>
  ::~_Vector_base((_Vector_base<AdaptorJoustLeaderboardEntryConfig,std::allocator<AdaptorJoustLeaderboardEntryConfig>>
                   *)this);
  return;
}


/* AdaptorJoustLeaderboardConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorJoustLeaderboardConfig const&) */

AdaptorJoustLeaderboardConfig * __thiscall
AdaptorJoustLeaderboardConfig::operator=
          (AdaptorJoustLeaderboardConfig *this,AdaptorJoustLeaderboardConfig *param_1)

{
  std::vector<AdaptorJoustLeaderboardEntryConfig,std::allocator<AdaptorJoustLeaderboardEntryConfig>>
  ::operator=((vector<AdaptorJoustLeaderboardEntryConfig,std::allocator<AdaptorJoustLeaderboardEntryConfig>>
               *)this,(vector *)param_1);
  return this;
}


/* AdaptorJoustLeaderboardConfig::OrderByScore() */

void __thiscall AdaptorJoustLeaderboardConfig::OrderByScore(AdaptorJoustLeaderboardConfig *this)

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
  FUN_03860df0(uVar1,uVar2);
  uVar1 = *(undefined8 *)this;
  lVar3 = FUN_0385ebe0(uVar1,*(undefined8 *)(this + 8));
  lVar5 = 0;
  while( true ) {
    if (lVar5 + 1 == lVar3 + 1) break;
    lVar4 = FUN_0385ebf4(uVar1,lVar5);
    *(int *)(lVar4 + 4) = (int)lVar5;
    lVar5 = lVar5 + 1;
  }
  return;
}

