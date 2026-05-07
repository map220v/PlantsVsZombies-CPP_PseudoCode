// Class: AutoTestHelp


/* AutoTestHelp::GetStartMainLineItem(MapEventItem const*) */

undefined8 AutoTestHelp::GetStartMainLineItem(MapEventItem *param_1)

{
  LawnApp::GetWorldMapList(gLawnApp);
  return 0;
}


/* AutoTestHelp::GetNextMainLineItem(MapEventItem const*) */

MapEventItem * AutoTestHelp::GetNextMainLineItem(MapEventItem *param_1)

{
  int iVar1;
  MapEventItem *pMVar2;
  
  do {
    pMVar2 = (MapEventItem *)GetNextItem(param_1);
    if (pMVar2 == (MapEventItem *)0x0) {
      pMVar2 = (MapEventItem *)GetNextStarGate(param_1);
      return pMVar2;
    }
    iVar1 = FUN_043e18bc(*(undefined4 *)(pMVar2 + 0x14));
    param_1 = pMVar2;
  } while (iVar1 != 1);
  return pMVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestHelp::GetAllWorldLevels() */

void __thiscall AutoTestHelp::GetAllWorldLevels(AutoTestHelp *this)

{
  int iVar1;
  WorldDataManager *this_00;
  long lVar2;
  MapEventItem *this_01;
  vector<std::string,std::allocator<std::string>> *this_02;
  string *psVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::push_back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
               *)in_x8,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar2 = LawnApp::GetWorldMapList(gLawnApp);
  lVar2 = FUN_043e1968(*(undefined8 *)(lVar2 + 8));
  this_01 = (MapEventItem *)WorldDataManager::FindEvent(this_00,(string *)(lVar2 + 0x10));
  do {
    iVar1 = FUN_043e18bc(*(undefined4 *)(this_01 + 0x14));
    while (iVar1 == 7) {
      this_01 = (MapEventItem *)GetStartMainLineItem(this_01);
      if (this_01 == (MapEventItem *)0x0) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      std::
      vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
      ::push_back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                   *)in_x8,(vector *)avStack_20);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)avStack_20);
      iVar1 = FUN_043e18bc(*(undefined4 *)(this_01 + 0x14));
    }
    this_02 = (vector<std::string,std::allocator<std::string>> *)
              std::
              vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
              ::back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                      *)in_x8);
    psVar3 = (string *)
             Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this_01);
    std::vector<std::string,std::allocator<std::string>>::push_back(this_02,psVar3);
    this_01 = (MapEventItem *)GetNextMainLineItem(this_01);
  } while( true );
}

