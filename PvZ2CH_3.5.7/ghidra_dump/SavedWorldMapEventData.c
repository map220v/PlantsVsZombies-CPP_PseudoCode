// Class: SavedWorldMapEventData


/* SavedWorldMapEventData::SavedWorldMapEventData() */

void __thiscall SavedWorldMapEventData::SavedWorldMapEventData(SavedWorldMapEventData *this)

{
  *this = (SavedWorldMapEventData)0x0;
  *(undefined2 *)(this + 2) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  Set8BytesTo0(this + 0x18);
  return;
}


/* SavedWorldMapEventData::TEMPNAMEPLACEHOLDERVALUE(SavedWorldMapEventData&) */

bool __thiscall
SavedWorldMapEventData::operator==(SavedWorldMapEventData *this,SavedWorldMapEventData *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((*(uint *)this & 0xffff00ff) == (*(uint *)param_1 & 0xffff00ff)) &&
      (*(int *)(param_1 + 4) == *(int *)(this + 4))) &&
     (*(long *)(param_1 + 8) == *(long *)(this + 8))) {
    bVar1 = *(int *)(param_1 + 0x10) == *(int *)(this + 0x10);
  }
  return bVar1;
}


/* SavedWorldMapEventData::GetName() */

SavedWorldMapEventData * __thiscall SavedWorldMapEventData::GetName(SavedWorldMapEventData *this)

{
  SavedWorldMapEventData *pSVar1;
  char cVar2;
  FilesystemSaveGameContext *this_00;
  undefined8 uVar3;
  long lVar4;
  
  pSVar1 = this + 0x18;
  cVar2 = FUN_0547419c(pSVar1);
  if ((cVar2 != '\0') &&
     (this_00 = (FilesystemSaveGameContext *)
                WorldMapUtils::GetWorldMapEventByIds((uchar)*this,*(ushort *)(this + 2)),
     this_00 != (FilesystemSaveGameContext *)0x0)) {
    uVar3 = Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
    lVar4 = FUN_05474178();
    if (lVar4 == 0) {
      uVar3 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
      thunk_FUN_05475e00(pSVar1,uVar3);
      return pSVar1;
    }
    thunk_FUN_05475e00(pSVar1,uVar3);
    return pSVar1;
  }
  return pSVar1;
}


/* SavedWorldMapEventData::SavedWorldMapEventData(SavedWorldMapEventData const&) */

void __thiscall
SavedWorldMapEventData::SavedWorldMapEventData
          (SavedWorldMapEventData *this,SavedWorldMapEventData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  
  *this = *param_1;
  uVar4 = *(undefined2 *)(param_1 + 2);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)(this + 2) = uVar4;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}


/* SavedWorldMapEventData::TEMPNAMEPLACEHOLDERVALUE(SavedWorldMapEventData&&) */

SavedWorldMapEventData * __thiscall
SavedWorldMapEventData::operator=(SavedWorldMapEventData *this,SavedWorldMapEventData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  
  *this = *param_1;
  uVar4 = *(undefined2 *)(param_1 + 2);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)(this + 2) = uVar4;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  FUN_05474278(this + 0x18,param_1 + 0x18);
  return this;
}


/* SavedWorldMapEventData::SavedWorldMapEventData(SavedWorldMapEventData&&) */

void __thiscall
SavedWorldMapEventData::SavedWorldMapEventData
          (SavedWorldMapEventData *this,SavedWorldMapEventData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  
  *this = *param_1;
  uVar4 = *(undefined2 *)(param_1 + 2);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)(this + 2) = uVar4;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}


/* SavedWorldMapEventData::TEMPNAMEPLACEHOLDERVALUE(SavedWorldMapEventData const&) */

SavedWorldMapEventData * __thiscall
SavedWorldMapEventData::operator=(SavedWorldMapEventData *this,SavedWorldMapEventData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  
  *this = *param_1;
  uVar4 = *(undefined2 *)(param_1 + 2);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)(this + 2) = uVar4;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  return this;
}

