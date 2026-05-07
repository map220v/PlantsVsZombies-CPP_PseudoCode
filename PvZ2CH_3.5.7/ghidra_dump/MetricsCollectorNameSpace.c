// Class: MetricsCollectorNameSpace


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetCurrentWorld() */

void __thiscall MetricsCollectorNameSpace::GetCurrentWorld(MetricsCollectorNameSpace *this)

{
  LawnApp *pLVar1;
  long lVar2;
  long lVar3;
  WorldDataManager *this_00;
  string *psVar4;
  string *in_x8;
  
  lVar2 = ___stack_chk_guard;
  pLVar1 = gLawnApp;
  lVar3 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar3 == 0) || (lVar3 = FUN_03eaad94(*(undefined8 *)(lVar3 + 0x2f0)), lVar3 == 0)) {
    if (*(long *)(pLVar1 + 0x9f0) != 0) {
      this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      psVar4 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      lVar3 = WorldDataManager::FindWorldDataByLevelName(this_00,psVar4);
      if (lVar3 != 0) goto LAB_03ead228;
    }
    std::string::string(in_x8,"");
    nop();
  }
  else {
LAB_03ead228:
    FUN_05475d88();
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetCurrentLevel() */

void __thiscall MetricsCollectorNameSpace::GetCurrentLevel(MetricsCollectorNameSpace *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    FUN_05475d88();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MetricsCollectorNameSpace::TranslateEndOfGame(BoardResult) */

undefined4 MetricsCollectorNameSpace::TranslateEndOfGame(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 - 1U < 6) {
    uVar1 = *(undefined4 *)(&DAT_05752a30 + (ulong)(param_1 - 1U) * 4);
  }
  return uVar1;
}


/* MetricsCollectorNameSpace::GetFestivalLevelDifficutly(int) */

undefined4 MetricsCollectorNameSpace::GetFestivalLevelDifficutly(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((param_1 != 1) && (uVar1 = 3, param_1 != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}


/* MetricsCollectorNameSpace::GetPlantName(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetPlantName(MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  undefined8 uVar1;
  DString *in_x8;
  
  DString::DString(in_x8);
  uVar1 = FUN_0547429c(this);
  DString::format((char *)in_x8,"Plant_%s_%02d",uVar1,(ulong)param_1 & 0xffffffff);
  return;
}


/* MetricsCollectorNameSpace::GetPlantName2(std::string const&) */

void __thiscall
MetricsCollectorNameSpace::GetPlantName2(MetricsCollectorNameSpace *this,string *param_1)

{
  undefined8 uVar1;
  DString *in_x8;
  
  DString::DString(in_x8);
  uVar1 = FUN_0547429c(this);
  DString::format((char *)in_x8,"plant_%s",uVar1);
  return;
}


/* MetricsCollectorNameSpace::GetMetricsPlantNameForPlantType(std::string const&) */

char * MetricsCollectorNameSpace::GetMetricsPlantNameForPlantType(string *param_1)

{
  bool bVar1;
  char *pcVar2;
  
  bVar1 = std::operator==(param_1,"repeater");
  if (bVar1) {
    pcVar2 = "Repeater";
  }
  else {
    bVar1 = std::operator==(param_1,"peashooter");
    if (bVar1) {
      return "Peashooter";
    }
    bVar1 = std::operator==(param_1,"threepeater");
    if (bVar1) {
      pcVar2 = "Threepeater";
    }
    else {
      bVar1 = std::operator==(param_1,"wallnut");
      if (bVar1) {
        pcVar2 = "Wallnut";
      }
      else {
        bVar1 = std::operator==(param_1,"sunflower");
        if (bVar1) {
          pcVar2 = "Sunflower";
        }
        else {
          bVar1 = std::operator==(param_1,"potatomine");
          if (bVar1) {
            pcVar2 = "PotatoMine";
          }
          else {
            bVar1 = std::operator==(param_1,"cabbagepult");
            if (bVar1) {
              pcVar2 = "Cabbagepult";
            }
            else {
              bVar1 = std::operator==(param_1,"bloomerang");
              if (bVar1) {
                pcVar2 = "Bloomerang";
              }
              else {
                bVar1 = std::operator==(param_1,"iceburg");
                if (bVar1) {
                  pcVar2 = "IcebergLettuce";
                }
                else {
                  bVar1 = std::operator==(param_1,"bonkchoy");
                  if (bVar1) {
                    pcVar2 = "BonkChoy";
                  }
                  else {
                    bVar1 = std::operator==(param_1,"gravebuster");
                    if (bVar1) {
                      pcVar2 = "Gravebuster";
                    }
                    else {
                      bVar1 = std::operator==(param_1,"twinsunflower");
                      if (bVar1) {
                        pcVar2 = "TwinSunflowers";
                      }
                      else {
                        bVar1 = std::operator==(param_1,"kernelpult");
                        if (bVar1) {
                          pcVar2 = "Kernelpult";
                        }
                        else {
                          bVar1 = std::operator==(param_1,"snapdragon");
                          if (bVar1) {
                            pcVar2 = "Snapdragon";
                          }
                          else {
                            bVar1 = std::operator==(param_1,"coconutcannon");
                            if (bVar1) {
                              pcVar2 = "CoconutCannon";
                            }
                            else {
                              bVar1 = std::operator==(param_1,"springbean");
                              if (bVar1) {
                                pcVar2 = "SpringBean";
                              }
                              else {
                                bVar1 = std::operator==(param_1,"cherry_bomb");
                                if (bVar1) {
                                  pcVar2 = "CherryBomb";
                                }
                                else {
                                  bVar1 = std::operator==(param_1,"spikerock");
                                  if (bVar1) {
                                    pcVar2 = "Spikerock";
                                  }
                                  else {
                                    bVar1 = std::operator==(param_1,"splitpea");
                                    if (bVar1) {
                                      pcVar2 = "Splitpea";
                                    }
                                    else {
                                      bVar1 = std::operator==(param_1,"chilibean");
                                      if (bVar1) {
                                        pcVar2 = "Chilibean";
                                      }
                                      else {
                                        bVar1 = std::operator==(param_1,"lightningreed");
                                        if (bVar1) {
                                          pcVar2 = "LightningReed";
                                        }
                                        else {
                                          bVar1 = std::operator==(param_1,"peapod");
                                          if (bVar1) {
                                            pcVar2 = "PeaPod";
                                          }
                                          else {
                                            bVar1 = std::operator==(param_1,"melonpult");
                                            if (bVar1) {
                                              pcVar2 = "MelonPult";
                                            }
                                            else {
                                              bVar1 = std::operator==(param_1,"torchwood");
                                              if (bVar1) {
                                                pcVar2 = "Torchwood";
                                              }
                                              else {
                                                bVar1 = std::operator==(param_1,"wintermelon");
                                                if (bVar1) {
                                                  pcVar2 = "WinterMelon";
                                                }
                                                else {
                                                  bVar1 = std::operator==(param_1,"jalapeno");
                                                  if (bVar1) {
                                                    pcVar2 = "Jalepeno";
                                                  }
                                                  else {
                                                    bVar1 = std::operator==(param_1,"powerlily");
                                                    if (bVar1) {
                                                      pcVar2 = "PowerLily";
                                                    }
                                                    else {
                                                      bVar1 = std::operator==(param_1,"imitater");
                                                      if (bVar1) {
                                                        pcVar2 = "Imitater";
                                                      }
                                                      else {
                                                        bVar1 = std::operator==(param_1,"snowpea");
                                                        if (bVar1) {
                                                          pcVar2 = "SnowPea";
                                                        }
                                                        else {
                                                          bVar1 = std::operator==(param_1,"squash");
                                                          if (bVar1) {
                                                            pcVar2 = "Squash";
                                                          }
                                                          else {
                                                            bVar1 = std::operator==(param_1,
                                                  "tallnut");
                                                  if (bVar1) {
                                                    pcVar2 = "TallNut";
                                                  }
                                                  else {
                                                    bVar1 = std::operator==(param_1,"spikeweed");
                                                    if (!bVar1) {
                                                      pcVar2 = (char *)FUN_0547429c(param_1);
                                                      return pcVar2;
                                                    }
                                                    pcVar2 = "Spikeweed";
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return pcVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetFestivalLevelName(int, int) */

void __thiscall
MetricsCollectorNameSpace::GetFestivalLevelName
          (MetricsCollectorNameSpace *this,int param_1,int param_2)

{
  char *pcVar1;
  DString *in_x8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((uint)this < 4) {
    switch((ulong)this & 0xffffffff) {
    case 0:
      Sexy::StrFormat("_%02d",asStack_18,(ulong)(param_1 + 1));
      pcVar1 = "Crazyyeti";
      break;
    case 1:
      Sexy::StrFormat("_%02d",asStack_18,(ulong)(param_1 + 1));
      pcVar1 = "Gargantuarcrisis";
      break;
    case 2:
      Sexy::StrFormat("_%02d",asStack_18,(ulong)(param_1 + 1));
      pcVar1 = "Devilinvade";
      break;
    case 3:
      Sexy::StrFormat("_%02d",asStack_18,(ulong)(param_1 + 1));
      pcVar1 = "Wealthgod";
    }
    std::operator+(pcVar1,asStack_18);
    DString::DString(in_x8,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  else {
    DString::DString(in_x8,"");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetBeforeStarNum(int) */

void __thiscall
MetricsCollectorNameSpace::GetBeforeStarNum(MetricsCollectorNameSpace *this,int param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  string *psVar3;
  long lVar4;
  string *psVar5;
  DString *in_x8;
  int iVar6;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar3 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  lVar4 = LawnApp::GetWorldMapList(gLawnApp);
  if ((lVar4 == 0) || (psVar3 == (string *)0x0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    std::string::string(asStack_20,"egypt");
    nop();
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 8));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar4 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      bVar1 = std::operator==(psVar5,"tutorial");
      if (!bVar1) {
        iVar2 = PlayerInfo::GetStarsCompletedInWorld(psVar3,SUB81(psVar5,0));
        iVar6 = iVar6 + iVar2;
      }
      eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
                ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_18);
    }
    std::string::~string(asStack_20);
  }
  DString::operator=(in_x8,iVar6 - (int)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetPlantPiece(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetPlantPiece
          (MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DString *in_x8;
  DString *pDVar2;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetPlantPieceCount(this_01,(string *)this,false);
    pDVar2 = (DString *)&local_8;
    FUN_031f5e7c(asStack_68,"Plantfragment_",this);
    DString::DString(aDStack_48,asStack_68);
    DString::DString(aDStack_38,(int)param_1);
    DString::DString(aDStack_28,iVar1 + (int)param_1);
    DString::DString(local_18,iVar1);
    std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_70);
    DString::join(in_x8,(vector *)avStack_60,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
    do {
      pDVar2 = pDVar2 + -0x10;
      (*(code *)**(undefined8 **)pDVar2)(pDVar2);
    } while (pDVar2 != aDStack_48);
    std::string::~string(asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetPlantPiece2(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetPlantPiece2
          (MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  ProfileMgr *this_00;
  long lVar1;
  DString *in_x8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 != 0) {
    FUN_031f5e7c(asStack_48,"plant_piece_",this);
    DString::DString((DString *)local_28,asStack_48);
    DString::DString((DString *)local_18,(int)param_1);
    std::vector<DString,std::allocator<DString>>::vector
              (avStack_40,(DString *)local_28,2,auStack_50);
    DString::join(in_x8,(vector *)avStack_40,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
    (*(code *)*local_18[0])((DString *)local_18);
    (*(code *)*local_28[0])((DString *)local_28);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetAvatarPiece2(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetAvatarPiece2
          (MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  ProfileMgr *this_00;
  long lVar1;
  DString *in_x8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 != 0) {
    FUN_031f5e7c(asStack_48,"avatar_piece_",this);
    DString::DString((DString *)local_28,asStack_48);
    DString::DString((DString *)local_18,(int)param_1);
    std::vector<DString,std::allocator<DString>>::vector
              (avStack_40,(DString *)local_28,2,auStack_50);
    DString::join(in_x8,(vector *)avStack_40,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
    (*(code *)*local_18[0])((DString *)local_18);
    (*(code *)*local_28[0])((DString *)local_28);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetAvatarPiece(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetAvatarPiece
          (MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  DString *in_x8;
  DString *pDVar3;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar2 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetAvatarPiecesCount(pPVar2,this,0,0);
    pDVar3 = (DString *)&local_8;
    FUN_031f5e7c(asStack_68,"Costumefragment_",this);
    DString::DString(aDStack_48,asStack_68);
    DString::DString(aDStack_38,(int)param_1);
    DString::DString(aDStack_28,iVar1 + (int)param_1);
    DString::DString(local_18,iVar1);
    std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_70);
    DString::join(in_x8,(vector *)avStack_60,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
    do {
      pDVar3 = pDVar3 + -0x10;
      (*(code *)**(undefined8 **)pDVar3)(pDVar3);
    } while (pDVar3 != aDStack_48);
    std::string::~string(asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetNewAvatarPiece2(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetNewAvatarPiece2
          (MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  ProfileMgr *this_00;
  long lVar1;
  DString *in_x8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 != 0) {
    FUN_031f5e7c(asStack_48,"new_avatar_piece_",this);
    DString::DString((DString *)local_28,asStack_48);
    DString::DString((DString *)local_18,(int)param_1);
    std::vector<DString,std::allocator<DString>>::vector
              (avStack_40,(DString *)local_28,2,auStack_50);
    DString::join(in_x8,(vector *)avStack_40,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
    (*(code *)*local_18[0])((DString *)local_18);
    (*(code *)*local_28[0])((DString *)local_28);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetNewAvatarPiece(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetNewAvatarPiece
          (MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  DString *in_x8;
  DString *pDVar2;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    this_02 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    iVar1 = NameMapperBase::GetIdForName(this_02,(string *)this);
    pDVar2 = (DString *)&local_8;
    iVar1 = PlayerInfo::GetNewAvatarPiecesCount(this_01,iVar1);
    FUN_031f5e7c(asStack_68,"Costumefragment_",this);
    DString::DString(aDStack_48,asStack_68);
    DString::DString(aDStack_38,(int)param_1);
    DString::DString(aDStack_28,iVar1 + (int)param_1);
    DString::DString(local_18,iVar1);
    std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_70);
    DString::join(in_x8,(vector *)avStack_60,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
    do {
      pDVar2 = pDVar2 + -0x10;
      (*(code *)**(undefined8 **)pDVar2)(pDVar2);
    } while (pDVar2 != aDStack_48);
    std::string::~string(asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetAvatar2(std::string const&, int) */

void MetricsCollectorNameSpace::GetAvatar2(string *param_1,int param_2)

{
  ProfileMgr *this;
  long lVar1;
  DString *in_x8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this);
  if (lVar1 != 0) {
    FUN_031f5e7c(asStack_48,"avatar_",param_1);
    DString::DString((DString *)local_28,asStack_48);
    DString::DString((DString *)local_18,1);
    std::vector<DString,std::allocator<DString>>::vector
              (avStack_40,(DString *)local_28,2,auStack_50);
    DString::join(in_x8,(vector *)avStack_40,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
    (*(code *)*local_18[0])((DString *)local_18);
    (*(code *)*local_28[0])((DString *)local_28);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetNewAvatar2(std::string const&, int) */

void MetricsCollectorNameSpace::GetNewAvatar2(string *param_1,int param_2)

{
  ProfileMgr *this;
  long lVar1;
  DString *in_x8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this);
  if (lVar1 != 0) {
    FUN_031f5e7c(asStack_48,"new_avatar_",param_1);
    DString::DString((DString *)local_28,asStack_48);
    DString::DString((DString *)local_18,1);
    std::vector<DString,std::allocator<DString>>::vector
              (avStack_40,(DString *)local_28,2,auStack_50);
    DString::join(in_x8,(vector *)avStack_40,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
    (*(code *)*local_18[0])((DString *)local_18);
    (*(code *)*local_28[0])((DString *)local_28);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetNewAvatar(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetNewAvatar(MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  ProfileMgr *this_00;
  long lVar1;
  DString *in_x8;
  DString *pDVar2;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 != 0) {
    pDVar2 = (DString *)&local_8;
    FUN_031f5e7c(asStack_68,"CostumeNewAvatar_",this);
    DString::DString(aDStack_48,asStack_68);
    DString::DString(aDStack_38,(int)param_1);
    DString::DString(aDStack_28,(int)param_1);
    DString::DString(local_18,0);
    std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_70);
    DString::join(in_x8,(vector *)avStack_60,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
    do {
      pDVar2 = pDVar2 + -0x10;
      (*(code *)**(undefined8 **)pDVar2)(pDVar2);
    } while (pDVar2 != aDStack_48);
    std::string::~string(asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetAccessoryPiece(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetAccessoryPiece
          (MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DString *in_x8;
  DString *pDVar2;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetAccessoryPieceCount(this_01,(string *)this,false);
    pDVar2 = (DString *)&local_8;
    FUN_031f5e7c(asStack_68,"Equipmentfragment_",this);
    DString::DString(aDStack_48,asStack_68);
    DString::DString(aDStack_38,(int)param_1);
    DString::DString(aDStack_28,iVar1 + (int)param_1);
    DString::DString(local_18,iVar1);
    std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_70);
    DString::join(in_x8,(vector *)avStack_60,",");
    std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
    do {
      pDVar2 = pDVar2 + -0x10;
      (*(code *)**(undefined8 **)pDVar2)(pDVar2);
    } while (pDVar2 != aDStack_48);
    std::string::~string(asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::AvatarNum(std::string const&) */

void __thiscall
MetricsCollectorNameSpace::AvatarNum(MetricsCollectorNameSpace *this,string *param_1)

{
  DString *in_x8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031f5e7c(asStack_48,"Costume_",this);
  DString::DString(in_x8);
  DString::DString((DString *)local_28,asStack_48);
  DString::DString((DString *)local_18,1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_40,(DString *)local_28,2,auStack_50);
  DString::join(in_x8,(vector *)avStack_40,",");
  std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
  (*(code *)*local_18[0])((DString *)local_18);
  (*(code *)*local_28[0])((DString *)local_28);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::AccessoryNum(std::string const&) */

void __thiscall
MetricsCollectorNameSpace::AccessoryNum(MetricsCollectorNameSpace *this,string *param_1)

{
  DString *in_x8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  FUN_031f5e7c(asStack_48,"Equipment_",this);
  DString::DString((DString *)local_28,asStack_48);
  DString::DString((DString *)local_18,1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_40,(DString *)local_28,2,auStack_50);
  DString::join(in_x8,(vector *)avStack_40,",");
  std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
  (*(code *)*local_18[0])((DString *)local_18);
  (*(code *)*local_28[0])((DString *)local_28);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::PlantPieceNum(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::PlantPieceNum
          (MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  DString *in_x8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031f5e7c(asStack_48,"Plantfragment_",this);
  DString::DString(in_x8);
  DString::DString((DString *)local_28,asStack_48);
  DString::DString((DString *)local_18,(int)param_1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_40,(DString *)local_28,2,auStack_50);
  DString::join(in_x8,(vector *)avStack_40,",");
  std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
  (*(code *)*local_18[0])((DString *)local_18);
  (*(code *)*local_28[0])((DString *)local_28);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::AvatarPieceNum(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::AvatarPieceNum
          (MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  DString *in_x8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031f5e7c(asStack_48,"Costumefragment_",this);
  DString::DString(in_x8);
  DString::DString((DString *)local_28,asStack_48);
  DString::DString((DString *)local_18,(int)param_1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_40,(DString *)local_28,2,auStack_50);
  DString::join(in_x8,(vector *)avStack_40,",");
  std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
  (*(code *)*local_18[0])((DString *)local_18);
  (*(code *)*local_28[0])((DString *)local_28);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::AccessoryPieceNum(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::AccessoryPieceNum
          (MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  DString *in_x8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  FUN_031f5e7c(asStack_48,"Equipmentfragment_",this);
  DString::DString((DString *)local_28,asStack_48);
  DString::DString((DString *)local_18,(int)param_1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_40,(DString *)local_28,2,auStack_50);
  DString::join(in_x8,(vector *)avStack_40,",");
  std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
  (*(code *)*local_18[0])((DString *)local_18);
  (*(code *)*local_28[0])((DString *)local_28);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetUseFreeCuke(int) */

void __thiscall
MetricsCollectorNameSpace::GetUseFreeCuke(MetricsCollectorNameSpace *this,int param_1)

{
  uint uVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DString *pDVar3;
  DString *in_x8;
  DString *pDVar4;
  int iVar5;
  undefined1 auStack_78 [8];
  DString aDStack_70 [16];
  string asStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  uVar1 = (int)(uint)this >> 0x1f;
  iVar5 = ((uint)this ^ uVar1) - uVar1;
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = 0;
  if (this_01 != (PlayerInfo *)0x0) {
    std::string::string(asStack_60,"poweruptacticalcuke");
    iVar2 = PlayerInfo::GetPowerupUsesLeft(this_01,asStack_60);
    std::string::~string(asStack_60);
    nop();
  }
  pDVar4 = (DString *)&local_8;
  DString::DString(aDStack_48,"FreePowerupTacticalCuke");
  DString::DString(aDStack_38,-iVar5);
  DString::DString(aDStack_28,iVar2);
  DString::DString(local_18,iVar2 + iVar5);
  std::vector<DString,std::allocator<DString>>::vector
            ((vector<DString,std::allocator<DString>> *)asStack_60,aDStack_48,4,auStack_78);
  pDVar3 = (DString *)DString::join(aDStack_70,(vector *)asStack_60,",");
  DString::DString(in_x8,pDVar3);
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)asStack_60);
  do {
    pDVar4 = pDVar4 + -0x10;
    (*(code *)**(undefined8 **)pDVar4)(pDVar4);
  } while (pDVar4 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetUseFreeGem(int) */

void __thiscall
MetricsCollectorNameSpace::GetUseFreeGem(MetricsCollectorNameSpace *this,int param_1)

{
  uint uVar1;
  int iVar2;
  ProfileMgr *this_00;
  NewPVPMgr *this_01;
  DString *pDVar3;
  DString *in_x8;
  DString *pDVar4;
  int iVar5;
  undefined1 auStack_78 [8];
  DString aDStack_70 [16];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  uVar1 = (int)(uint)this >> 0x1f;
  iVar5 = ((uint)this ^ uVar1) - uVar1;
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = 0;
  if (this_01 != (NewPVPMgr *)0x0) {
    iVar2 = NewPVPMgr::GetSeasonEndTime(this_01);
  }
  pDVar4 = (DString *)&local_8;
  DString::DString(aDStack_48,"FreeGem");
  DString::DString(aDStack_38,-iVar5);
  DString::DString(aDStack_28,iVar2);
  DString::DString(local_18,iVar2 + iVar5);
  std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_78);
  pDVar3 = (DString *)DString::join(aDStack_70,(vector *)avStack_60,",");
  DString::DString(in_x8,pDVar3);
  std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
  do {
    pDVar4 = pDVar4 + -0x10;
    (*(code *)**(undefined8 **)pDVar4)(pDVar4);
  } while (pDVar4 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetUsePaidGem(int) */

void __thiscall
MetricsCollectorNameSpace::GetUsePaidGem(MetricsCollectorNameSpace *this,int param_1)

{
  uint uVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DString *pDVar3;
  DString *in_x8;
  DString *pDVar4;
  int iVar5;
  undefined1 auStack_78 [8];
  DString aDStack_70 [16];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  uVar1 = (int)(uint)this >> 0x1f;
  iVar5 = ((uint)this ^ uVar1) - uVar1;
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = 0;
  if (this_01 != (PlayerInfo *)0x0) {
    iVar2 = PlayerInfo::GetRechargeGems(this_01);
  }
  pDVar4 = (DString *)&local_8;
  DString::DString(aDStack_48,"PaidGem");
  DString::DString(aDStack_38,-iVar5);
  DString::DString(aDStack_28,iVar2);
  DString::DString(local_18,iVar2 + iVar5);
  std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_78);
  pDVar3 = (DString *)DString::join(aDStack_70,(vector *)avStack_60,",");
  DString::DString(in_x8,pDVar3);
  std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
  do {
    pDVar4 = pDVar4 + -0x10;
    (*(code *)**(undefined8 **)pDVar4)(pDVar4);
  } while (pDVar4 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetUseCoin(int) */

void __thiscall MetricsCollectorNameSpace::GetUseCoin(MetricsCollectorNameSpace *this,int param_1)

{
  uint uVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DString *pDVar3;
  DString *in_x8;
  DString *pDVar4;
  int iVar5;
  undefined1 auStack_78 [8];
  DString aDStack_70 [16];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  uVar1 = (int)(uint)this >> 0x1f;
  iVar5 = ((uint)this ^ uVar1) - uVar1;
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = 0;
  if (this_01 != (PlayerInfo *)0x0) {
    iVar2 = PlayerInfo::GetNumCoins(this_01,false);
  }
  pDVar4 = (DString *)&local_8;
  DString::DString(aDStack_48,"Coin");
  DString::DString(aDStack_38,-iVar5);
  DString::DString(aDStack_28,iVar2);
  DString::DString(local_18,iVar2 + iVar5);
  std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_78);
  pDVar3 = (DString *)DString::join(aDStack_70,(vector *)avStack_60,",");
  DString::DString(in_x8,pDVar3);
  std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
  do {
    pDVar4 = pDVar4 + -0x10;
    (*(code *)**(undefined8 **)pDVar4)(pDVar4);
  } while (pDVar4 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetUseStar(int) */

void __thiscall MetricsCollectorNameSpace::GetUseStar(MetricsCollectorNameSpace *this,int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  string *psVar4;
  long lVar5;
  DString *pDVar6;
  string *psVar7;
  DString *in_x8;
  DString *pDVar8;
  int iVar9;
  int iVar10;
  string asStack_80 [8];
  undefined8 local_78;
  DString aDStack_70 [16];
  undefined8 local_60 [3];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  uVar1 = (int)(uint)this >> 0x1f;
  iVar9 = ((uint)this ^ uVar1) - uVar1;
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar4 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  lVar5 = LawnApp::GetWorldMapList(gLawnApp);
  if ((lVar5 == 0) || (psVar4 == (string *)0x0)) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    std::string::string(asStack_80,"egypt");
    nop();
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar5 + 8));
    local_60[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar5 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)local_60), bVar2)
    {
      psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      bVar2 = std::operator==(psVar7,"tutorial");
      if (!bVar2) {
        iVar3 = PlayerInfo::GetStarsCompletedInWorld(psVar4,SUB81(psVar7,0));
        iVar10 = iVar10 + iVar3;
      }
      eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
                ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_78);
    }
    std::string::~string(asStack_80);
  }
  pDVar8 = (DString *)&local_8;
  DString::DString(aDStack_48,"Star");
  DString::DString(aDStack_38,-iVar9);
  DString::DString(aDStack_28,iVar10);
  DString::DString(local_18,iVar10 + iVar9);
  std::vector<DString,std::allocator<DString>>::vector
            ((vector<DString,std::allocator<DString>> *)local_60,aDStack_48,4,&local_78);
  pDVar6 = (DString *)DString::join(aDStack_70,(vector *)local_60,",");
  DString::DString(in_x8,pDVar6);
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)local_60);
  do {
    pDVar8 = pDVar8 + -0x10;
    (*(code *)**(undefined8 **)pDVar8)(pDVar8);
  } while (pDVar8 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetFreeGem(int) */

void __thiscall MetricsCollectorNameSpace::GetFreeGem(MetricsCollectorNameSpace *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  NewPVPMgr *this_01;
  DString *pDVar2;
  DString *in_x8;
  DString *pDVar3;
  undefined1 auStack_78 [8];
  DString aDStack_70 [16];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = 0;
  if (this_01 != (NewPVPMgr *)0x0) {
    iVar1 = NewPVPMgr::GetSeasonEndTime(this_01);
  }
  pDVar3 = (DString *)&local_8;
  DString::DString(aDStack_48,"FreeGem");
  DString::DString(aDStack_38,(int)this);
  DString::DString(aDStack_28,iVar1 + (int)this);
  DString::DString(local_18,iVar1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_78);
  pDVar2 = (DString *)DString::join(aDStack_70,(vector *)avStack_60,",");
  DString::DString(in_x8,pDVar2);
  std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
  do {
    pDVar3 = pDVar3 + -0x10;
    (*(code *)**(undefined8 **)pDVar3)(pDVar3);
  } while (pDVar3 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetPaidGem(int) */

void __thiscall MetricsCollectorNameSpace::GetPaidGem(MetricsCollectorNameSpace *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DString *pDVar2;
  DString *in_x8;
  DString *pDVar3;
  undefined1 auStack_78 [8];
  DString aDStack_70 [16];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = 0;
  if (this_01 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetRechargeGems(this_01);
  }
  pDVar3 = (DString *)&local_8;
  DString::DString(aDStack_48,"PaidGem");
  DString::DString(aDStack_38,(int)this);
  DString::DString(aDStack_28,iVar1 + (int)this);
  DString::DString(local_18,iVar1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_78);
  pDVar2 = (DString *)DString::join(aDStack_70,(vector *)avStack_60,",");
  DString::DString(in_x8,pDVar2);
  std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
  do {
    pDVar3 = pDVar3 + -0x10;
    (*(code *)**(undefined8 **)pDVar3)(pDVar3);
  } while (pDVar3 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetCoin(int) */

void __thiscall MetricsCollectorNameSpace::GetCoin(MetricsCollectorNameSpace *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DString *pDVar2;
  DString *in_x8;
  DString *pDVar3;
  undefined1 auStack_78 [8];
  DString aDStack_70 [16];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = 0;
  if (this_01 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetNumCoins(this_01,false);
  }
  pDVar3 = (DString *)&local_8;
  DString::DString(aDStack_48,"Coin");
  DString::DString(aDStack_38,(int)this);
  DString::DString(aDStack_28,iVar1 + (int)this);
  DString::DString(local_18,iVar1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_78);
  pDVar2 = (DString *)DString::join(aDStack_70,(vector *)avStack_60,",");
  DString::DString(in_x8,pDVar2);
  std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
  do {
    pDVar3 = pDVar3 + -0x10;
    (*(code *)**(undefined8 **)pDVar3)(pDVar3);
  } while (pDVar3 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetMaterial(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetMaterial(MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DString *pDVar2;
  DString *in_x8;
  DString *pDVar3;
  undefined1 auStack_78 [8];
  DString aDStack_70 [16];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = 0;
  if (this_01 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetMaterialNum(this_01,(string *)this);
  }
  pDVar3 = (DString *)&local_8;
  DString::DString(aDStack_48,(string *)this);
  DString::DString(aDStack_38,(int)param_1);
  DString::DString(aDStack_28,iVar1 + (int)param_1);
  DString::DString(local_18,iVar1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_78);
  pDVar2 = (DString *)DString::join(aDStack_70,(vector *)avStack_60,",");
  DString::DString(in_x8,pDVar2);
  std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
  do {
    pDVar3 = pDVar3 + -0x10;
    (*(code *)**(undefined8 **)pDVar3)(pDVar3);
  } while (pDVar3 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetKey(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetKey(MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DString *pDVar2;
  DString *in_x8;
  DString *pDVar3;
  undefined1 auStack_78 [8];
  DString aDStack_70 [16];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = 0;
  if (this_01 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetNumKeys(this_01,(string *)this,false);
  }
  pDVar3 = (DString *)&local_8;
  DString::DString(aDStack_48,(string *)this);
  DString::DString(aDStack_38,(int)param_1);
  DString::DString(aDStack_28,iVar1 + (int)param_1);
  DString::DString(local_18,iVar1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_78);
  pDVar2 = (DString *)DString::join(aDStack_70,(vector *)avStack_60,",");
  DString::DString(in_x8,pDVar2);
  std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
  do {
    pDVar3 = pDVar3 + -0x10;
    (*(code *)**(undefined8 **)pDVar3)(pDVar3);
  } while (pDVar3 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetStar(int) */

void __thiscall MetricsCollectorNameSpace::GetStar(MetricsCollectorNameSpace *this,int param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  string *psVar3;
  long lVar4;
  DString *pDVar5;
  string *psVar6;
  DString *in_x8;
  DString *pDVar7;
  int iVar8;
  string asStack_80 [8];
  undefined8 local_78;
  DString aDStack_70 [16];
  undefined8 local_60 [3];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar3 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  lVar4 = LawnApp::GetWorldMapList(gLawnApp);
  if ((lVar4 == 0) || (psVar3 == (string *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    std::string::string(asStack_80,"egypt");
    nop();
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 8));
    local_60[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar4 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)local_60), bVar1)
    {
      psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      bVar1 = std::operator==(psVar6,"tutorial");
      if (!bVar1) {
        iVar2 = PlayerInfo::GetStarsCompletedInWorld(psVar3,SUB81(psVar6,0));
        iVar8 = iVar8 + iVar2;
      }
      eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
                ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_78);
    }
    std::string::~string(asStack_80);
  }
  pDVar7 = (DString *)&local_8;
  DString::DString(aDStack_48,"Star");
  DString::DString(aDStack_38,(int)this);
  DString::DString(aDStack_28,iVar8 + (int)this);
  DString::DString(local_18,iVar8);
  std::vector<DString,std::allocator<DString>>::vector
            ((vector<DString,std::allocator<DString>> *)local_60,aDStack_48,4,&local_78);
  pDVar5 = (DString *)DString::join(aDStack_70,(vector *)local_60,",");
  DString::DString(in_x8,pDVar5);
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)local_60);
  do {
    pDVar7 = pDVar7 + -0x10;
    (*(code *)**(undefined8 **)pDVar7)(pDVar7);
  } while (pDVar7 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetBeforeStar(int) */

void __thiscall
MetricsCollectorNameSpace::GetBeforeStar(MetricsCollectorNameSpace *this,int param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  string *psVar3;
  long lVar4;
  DString *pDVar5;
  string *psVar6;
  DString *in_x8;
  DString *pDVar7;
  int iVar8;
  string asStack_80 [8];
  undefined8 local_78;
  DString aDStack_70 [16];
  undefined8 local_60 [3];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar3 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  lVar4 = LawnApp::GetWorldMapList(gLawnApp);
  if ((lVar4 == 0) || (psVar3 == (string *)0x0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    std::string::string(asStack_80,"egypt");
    nop();
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 8));
    local_60[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar4 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)local_60), bVar1)
    {
      psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      bVar1 = std::operator==(psVar6,"tutorial");
      if (!bVar1) {
        iVar2 = PlayerInfo::GetStarsCompletedInWorld(psVar3,SUB81(psVar6,0));
        iVar8 = iVar8 + iVar2;
      }
      eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
                ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_78);
    }
    std::string::~string(asStack_80);
  }
  pDVar7 = (DString *)&local_8;
  DString::DString(aDStack_48,"Star");
  DString::DString(aDStack_38,(int)this);
  DString::DString(aDStack_28,iVar8);
  DString::DString(local_18,iVar8 - (int)this);
  std::vector<DString,std::allocator<DString>>::vector
            ((vector<DString,std::allocator<DString>> *)local_60,aDStack_48,4,&local_78);
  pDVar5 = (DString *)DString::join(aDStack_70,(vector *)local_60,",");
  DString::DString(in_x8,pDVar5);
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)local_60);
  do {
    pDVar7 = pDVar7 + -0x10;
    (*(code *)**(undefined8 **)pDVar7)(pDVar7);
  } while (pDVar7 != aDStack_48);
  DString::~DString(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetActivityMissionName(std::string const&) */

void __thiscall
MetricsCollectorNameSpace::GetActivityMissionName(MetricsCollectorNameSpace *this,string *param_1)

{
  long lVar1;
  ulong uVar2;
  DString *in_x8;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8,(string *)this);
  lVar1 = DString::findString(in_x8,"festival_lv2");
  if (lVar1 == -1) {
    lVar1 = DString::findString(in_x8,"festival_lv1");
    if (lVar1 == -1) {
      lVar1 = DString::findString(in_x8,"festival_lv3");
      if (lVar1 == -1) {
        lVar1 = DString::findString(in_x8,"festival_wealthgod");
        if (lVar1 == -1) {
          lVar1 = DString::findString(in_x8,"Birthdayz");
          if (lVar1 == -1) {
            DString::findString(in_x8,"vacation_boss");
          }
          else {
            lVar1 = DString::findNumber(in_x8,-1);
            if (lVar1 != -1) {
              DString::subString((long)in_x8);
              uVar2 = DString::toInt(aDStack_18);
              DString::format((char *)in_x8,"Childrensday_%02d",uVar2 & 0xffffffff);
              DString::~DString(aDStack_18);
            }
          }
        }
        else {
          lVar1 = DString::findString(in_x8,"easy");
          if (lVar1 == -1) {
            lVar1 = DString::findString(in_x8,"normal");
            if (lVar1 == -1) {
              lVar1 = DString::findString(in_x8,"hard");
              if (lVar1 != -1) {
                DString::operator=(in_x8,"Wealthgod_03");
              }
            }
            else {
              DString::operator=(in_x8,"Wealthgod_02");
            }
          }
          else {
            DString::operator=(in_x8,"Wealthgod_01");
          }
        }
      }
      else {
        lVar1 = DString::findString(in_x8,"easy");
        if (lVar1 == -1) {
          lVar1 = DString::findString(in_x8,"normal");
          if (lVar1 == -1) {
            lVar1 = DString::findString(in_x8,"hard");
            if (lVar1 != -1) {
              DString::operator=(in_x8,"Devilinvade_03");
            }
          }
          else {
            DString::operator=(in_x8,"Devilinvade_02");
          }
        }
        else {
          DString::operator=(in_x8,"Devilinvade_01");
        }
      }
    }
    else {
      lVar1 = DString::findString(in_x8,"easy");
      if (lVar1 == -1) {
        lVar1 = DString::findString(in_x8,"normal");
        if (lVar1 == -1) {
          lVar1 = DString::findString(in_x8,"hard");
          if (lVar1 != -1) {
            DString::operator=(in_x8,"Gargantuarcrisis_03");
          }
        }
        else {
          DString::operator=(in_x8,"Gargantuarcrisis_02");
        }
      }
      else {
        DString::operator=(in_x8,"Gargantuarcrisis_01");
      }
    }
  }
  else {
    lVar1 = DString::findString(in_x8,"easy");
    if (lVar1 == -1) {
      lVar1 = DString::findString(in_x8,"normal");
      if (lVar1 == -1) {
        lVar1 = DString::findString(in_x8,"hard");
        if (lVar1 != -1) {
          DString::operator=(in_x8,"Crazyyeti_03");
        }
      }
      else {
        DString::operator=(in_x8,"Crazyyeti_02");
      }
    }
    else {
      DString::operator=(in_x8,"Crazyyeti_01");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetMissionName(std::string const&) */

void __thiscall
MetricsCollectorNameSpace::GetMissionName(MetricsCollectorNameSpace *this,string *param_1)

{
  int iVar1;
  long lVar2;
  DangerRoomManager *this_00;
  undefined8 uVar3;
  ulong uVar4;
  DString *in_x8;
  DString aDStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8,(string *)this);
  lVar2 = DString::findString(in_x8,"dangerroom");
  if (lVar2 == -1) {
    lVar2 = DString::findString(in_x8,"challenge");
    if ((lVar2 == -1) && (lVar2 = DString::findNumber(in_x8,-1), lVar2 != -1)) {
      DString::subString((long)in_x8,0);
      DString::subString((long)in_x8);
      uVar3 = DString::c_str(aDStack_28);
      uVar4 = DString::toInt(aDStack_18);
      DString::format((char *)in_x8,"%s_%02d",uVar3,uVar4 & 0xffffffff);
      DString::~DString(aDStack_18);
      DString::~DString(aDStack_28);
    }
  }
  else {
    DString::operator+=(in_x8,"_");
    this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    iVar1 = DangerRoomManager::GetNextLevel(this_00);
    DString::operator+=(in_x8,iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetPiece() */

void __thiscall MetricsCollectorNameSpace::GetPiece(MetricsCollectorNameSpace *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *psVar4;
  DString *in_x8;
  DString *pDVar5;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  string asStack_a0 [8];
  DString aDStack_98 [16];
  DString aDStack_88 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_78 [24];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_98);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_78);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(*(long *)(gLawnApp + 0x9f0) + 0x168);
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (bVar2) {
      do {
        psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
        iVar1 = *(int *)(psVar4 + 8);
        if (iVar1 == 1) {
          iVar3 = PlayerInfo::GetAvatarPiecesCount(this_02,psVar4,*(undefined4 *)(psVar4 + 0xc),0);
          iVar1 = *(int *)(psVar4 + 0x10);
          pDVar5 = (DString *)&local_8;
          FUN_031f5e7c(asStack_a0,"Costumefragment_",psVar4);
          DString::DString(aDStack_88);
          DString::DString(aDStack_48,asStack_a0);
          DString::DString(aDStack_38,iVar1);
          DString::DString(aDStack_28,iVar3 + iVar1);
          DString::DString(local_18,iVar3);
          std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_b8);
          DString::join(aDStack_88,(vector *)avStack_60,",");
          std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
          do {
            pDVar5 = pDVar5 + -0x10;
            (*(code *)**(undefined8 **)pDVar5)(pDVar5);
          } while (pDVar5 != aDStack_48);
LAB_03ecccc4:
          std::vector<DString,std::allocator<DString>>::push_back
                    ((vector<DString,std::allocator<DString>> *)avStack_78,aDStack_88);
          DString::~DString(aDStack_88);
          std::string::~string(asStack_a0);
        }
        else {
          if (iVar1 == 0) {
            iVar3 = PlayerInfo::GetPlantPieceCount(this_02,psVar4,false);
            iVar1 = *(int *)(psVar4 + 0x10);
            pDVar5 = (DString *)&local_8;
            FUN_031f5e7c(asStack_a0,"Plantfragment_",psVar4);
            DString::DString(aDStack_88);
            DString::DString(aDStack_48,asStack_a0);
            DString::DString(aDStack_38,iVar1);
            DString::DString(aDStack_28,iVar3 + iVar1);
            DString::DString(local_18,iVar3);
            std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_b8)
            ;
            DString::join(aDStack_88,(vector *)avStack_60,",");
            std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
            do {
              pDVar5 = pDVar5 + -0x10;
              (*(code *)**(undefined8 **)pDVar5)(pDVar5);
            } while (pDVar5 != aDStack_48);
            goto LAB_03ecccc4;
          }
          if (iVar1 == 2) {
            iVar3 = PlayerInfo::GetAccessoryPieceCount(this_02,psVar4,false);
            iVar1 = *(int *)(psVar4 + 0x10);
            pDVar5 = (DString *)&local_8;
            FUN_031f5e7c(asStack_a0,"Equipmentfragment_",psVar4);
            DString::DString(aDStack_88);
            DString::DString(aDStack_48,asStack_a0);
            DString::DString(aDStack_38,iVar1);
            DString::DString(aDStack_28,iVar3 + iVar1);
            DString::DString(local_18,iVar3);
            std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_b8)
            ;
            DString::join(aDStack_88,(vector *)avStack_60,",");
            std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
            do {
              pDVar5 = pDVar5 + -0x10;
              (*(code *)**(undefined8 **)pDVar5)(pDVar5);
            } while (pDVar5 != aDStack_48);
            goto LAB_03ecccc4;
          }
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_b0);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8)
        ;
      } while (bVar2);
    }
  }
  pDVar5 = (DString *)DString::join(aDStack_98,(vector *)avStack_78,";");
  DString::DString(in_x8,pDVar5);
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)avStack_78);
  DString::~DString(aDStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetPlant(std::string const&, int, int) */

void __thiscall
MetricsCollectorNameSpace::GetPlant
          (MetricsCollectorNameSpace *this,string *param_1,int param_2,int param_3)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar2;
  int iVar3;
  long lVar4;
  DString *in_x8;
  DString *pDVar5;
  undefined1 auStack_78 [8];
  DString aDStack_70 [16];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = ___stack_chk_guard;
  DString::DString(in_x8);
  iVar3 = (int)lVar4;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    if (param_2 < 1) {
      GetPlantName(this,(string *)((ulong)param_1 & 0xffffffff),iVar3);
      pDVar5 = (DString *)&local_8;
      pcVar2 = (char *)DString::c_str(aDStack_70);
      DString::DString(aDStack_48,pcVar2);
      DString::DString(aDStack_38,param_2);
      DString::DString(aDStack_28,param_2 + 1);
      DString::DString(local_18,1);
      std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_78);
      DString::join(in_x8,(vector *)avStack_60,",");
      std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
      do {
        pDVar5 = pDVar5 + -0x10;
        (*(code *)**(undefined8 **)pDVar5)(pDVar5);
      } while (pDVar5 != aDStack_48);
      DString::~DString(aDStack_70);
    }
    else {
      cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)this);
      if (cVar1 == '\0') {
        GetPlantPiece(this,(string *)0xa,iVar3);
        DString::operator=(in_x8,(DString *)avStack_60);
        DString::~DString((DString *)avStack_60);
      }
      else {
        GetPlantName(this,(string *)((ulong)param_1 & 0xffffffff),iVar3);
        pDVar5 = (DString *)&local_8;
        pcVar2 = (char *)DString::c_str(aDStack_70);
        DString::DString(aDStack_48,pcVar2);
        DString::DString(aDStack_38,param_2);
        DString::DString(aDStack_28,param_2);
        DString::DString(local_18,0);
        std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_78);
        DString::join(in_x8,(vector *)avStack_60,",");
        std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
        do {
          pDVar5 = pDVar5 + -0x10;
          (*(code *)**(undefined8 **)pDVar5)(pDVar5);
        } while (pDVar5 != aDStack_48);
        DString::~DString(aDStack_70);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetPlant2(std::string const&, int, int) */

void __thiscall
MetricsCollectorNameSpace::GetPlant2
          (MetricsCollectorNameSpace *this,string *param_1,int param_2,int param_3)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar2;
  int iVar3;
  DString *in_x8;
  undefined1 auStack_58 [8];
  DString aDStack_50 [16];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = param_2;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    if ((param_2 < 1) ||
       (cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)this), cVar1 != '\0')) {
      GetPlantName2(this,(string *)aDStack_50);
      pcVar2 = (char *)DString::c_str(aDStack_50);
      DString::DString((DString *)local_28,pcVar2);
      DString::DString((DString *)local_18,param_2);
      std::vector<DString,std::allocator<DString>>::vector
                (avStack_40,(DString *)local_28,2,auStack_58);
      DString::join(in_x8,(vector *)avStack_40,",");
      std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
      (*(code *)*local_18[0])((DString *)local_18);
      (*(code *)*local_28[0])((DString *)local_28);
      DString::~DString(aDStack_50);
    }
    else {
      GetPlantPiece2(this,(string *)0xa,iVar3);
      DString::operator=(in_x8,(DString *)avStack_40);
      DString::~DString((DString *)avStack_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetAvatar(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetAvatar(MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  int iVar3;
  DString *in_x8;
  DString *pDVar4;
  int iVar5;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar2 != (PlayerInfo *)0x0) {
    iVar5 = (int)param_1;
    if (iVar5 < 1) {
      pDVar4 = (DString *)&local_8;
      FUN_031f5e7c(asStack_68,"Costume_",this);
      DString::DString(aDStack_48,asStack_68);
      DString::DString(aDStack_38,iVar5);
      DString::DString(aDStack_28,iVar5 + 1);
      DString::DString(local_18,1);
      std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_70);
      DString::join(in_x8,(vector *)avStack_60,",");
      std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
      do {
        pDVar4 = pDVar4 + -0x10;
        (*(code *)**(undefined8 **)pDVar4)(pDVar4);
      } while (pDVar4 != aDStack_48);
      std::string::~string(asStack_68);
    }
    else {
      iVar3 = 0;
      cVar1 = PlayerInfo::IsPlantAvatarUnLocked(pPVar2,this,0,0);
      if (cVar1 == '\0') {
        GetAvatarPiece(this,(string *)0xa,iVar3);
        DString::operator=(in_x8,(DString *)avStack_60);
        DString::~DString((DString *)avStack_60);
      }
      else {
        pDVar4 = (DString *)&local_8;
        FUN_031f5e7c(asStack_68,"Costume_",this);
        DString::DString(aDStack_48,asStack_68);
        DString::DString(aDStack_38,iVar5);
        DString::DString(aDStack_28,iVar5);
        DString::DString(local_18,0);
        std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_70);
        DString::join(in_x8,(vector *)avStack_60,",");
        std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
        do {
          pDVar4 = pDVar4 + -0x10;
          (*(code *)**(undefined8 **)pDVar4)(pDVar4);
        } while (pDVar4 != aDStack_48);
        std::string::~string(asStack_68);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::GetAccessory(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::GetAccessory(MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  int iVar3;
  DString *in_x8;
  DString *pDVar4;
  int iVar5;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  vector<DString,std::allocator<DString>> avStack_60 [24];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ___stack_chk_guard;
  DString::DString(in_x8);
  iVar3 = (int)lVar2;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar2 != 0) {
    iVar5 = (int)param_1;
    if (iVar5 < 1) {
      pDVar4 = (DString *)&local_8;
      FUN_031f5e7c(asStack_68,"Equipment_",this);
      DString::DString(aDStack_48,asStack_68);
      DString::DString(aDStack_38,iVar5);
      DString::DString(aDStack_28,iVar5 + 1);
      DString::DString(local_18,1);
      std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_70);
      DString::join(in_x8,(vector *)avStack_60,",");
      std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
      do {
        pDVar4 = pDVar4 + -0x10;
        (*(code *)**(undefined8 **)pDVar4)(pDVar4);
      } while (pDVar4 != aDStack_48);
      std::string::~string(asStack_68);
    }
    else {
      Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      cVar1 = PlantAccessoryMgr::CanExchangeAccessory();
      if (cVar1 == '\0') {
        GetAccessoryPiece(this,(string *)0xa,iVar3);
        DString::operator=(in_x8,(DString *)avStack_60);
        DString::~DString((DString *)avStack_60);
      }
      else {
        pDVar4 = (DString *)&local_8;
        FUN_031f5e7c(asStack_68,"Equipment_",this);
        DString::DString(aDStack_48,asStack_68);
        DString::DString(aDStack_38,iVar5);
        DString::DString(aDStack_28,iVar5);
        DString::DString(local_18,0);
        std::vector<DString,std::allocator<DString>>::vector(avStack_60,aDStack_48,4,auStack_70);
        DString::join(in_x8,(vector *)avStack_60,",");
        std::vector<DString,std::allocator<DString>>::~vector(avStack_60);
        do {
          pDVar4 = pDVar4 + -0x10;
          (*(code *)**(undefined8 **)pDVar4)(pDVar4);
        } while (pDVar4 != aDStack_48);
        std::string::~string(asStack_68);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsCollectorNameSpace::PlantNum(std::string const&, int) */

void __thiscall
MetricsCollectorNameSpace::PlantNum(MetricsCollectorNameSpace *this,string *param_1,int param_2)

{
  char *pcVar1;
  DString *in_x8;
  undefined1 auStack_58 [8];
  DString aDStack_50 [16];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetPlantName(this,param_1,(int)___stack_chk_guard);
  DString::DString(in_x8);
  pcVar1 = (char *)DString::c_str(aDStack_50);
  DString::DString((DString *)local_28,pcVar1);
  DString::DString((DString *)local_18,1);
  std::vector<DString,std::allocator<DString>>::vector(avStack_40,(DString *)local_28,2,auStack_58);
  DString::join(in_x8,(vector *)avStack_40,",");
  std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
  (*(code *)*local_18[0])((DString *)local_18);
  (*(code *)*local_28[0])((DString *)local_28);
  DString::~DString(aDStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

