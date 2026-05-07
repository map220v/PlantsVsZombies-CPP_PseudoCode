// Class: Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ExecuteNode(Sexy::RtSerial::JsonParser*,FEAST


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ExecuteNode(Sexy::RtSerial::JsonParser*,
   FEAST::IPrsNode*) */

void Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ExecuteNode(Sexy::RtSerial::
     JsonParser*,FEAST::IPrsNode__(long param_1,long *param_2)

{
  vector<bool,std::allocator<bool>> *pvVar1;
  vector<bool,std::allocator<bool>> *this;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined4 *puVar11;
  char *pcVar12;
  TGABagData *pTVar13;
  string *extraout_x1;
  _func_void *extraout_x1_00;
  undefined8 uVar14;
  _func_void *extraout_x1_01;
  RtSerialRtonWriter *pRVar15;
  double dVar16;
  int local_50 [2];
  undefined1 local_48 [16];
  undefined1 local_38 [3] [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (long *)0x0) goto switchD_051cf30c_default;
  lVar8 = (**(code **)(*param_2 + 8))(param_2);
  auVar4._8_8_ = local_48._8_8_;
  auVar4._0_8_ = local_48._0_8_;
  auVar3._8_8_ = local_38[0]._8_8_;
  auVar3._0_8_ = local_38[0]._0_8_;
  if (0xd < lVar8 - 1U) goto switchD_051cf30c_default;
  local_38[0] = auVar3;
  local_48 = auVar4;
  switch(lVar8 - 1U & 0xffffffff) {
  case 0:
    lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_051c69e8((string *)local_50,lVar8 + 8,lVar8 + 0x10);
    lVar8 = FUN_05474184((string *)local_50);
    FUN_05475ffc((string *)local_38,(string *)local_50,1,lVar8 + -2);
    FUN_05474278((string *)local_50,(string *)local_38);
    std::string::~string((string *)local_38);
    cVar5 = RtId::IsRtIdString((string *)local_50);
    if (cVar5 == '\0') {
      cVar5 = IsJsonStringWide(std::string_const__((string *)local_50);
      if (cVar5 == '\0') {
        Set8BytesTo0((string *)local_48);
        ProcessJsonString(std::string&,std::string_const__((string *)local_48,(string *)local_50);
        local_38[0] = std::vector<bool,std::allocator<bool>>::back();
        bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
        if (bVar6) {
          pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
          RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
        }
        else {
          pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
          pTVar13 = (TGABagData *)
                    std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(param_1 + 0x38));
          TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
        }
        RtSerialRtonWriter::WriteString(pRVar15,(RtSerialRtonKey *)local_38,(string *)local_48,true)
        ;
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
        std::string::~string((string *)local_48);
      }
      else {
        FUN_05476574((string *)local_48);
        ProcessJsonStringW(std::wstring&,std::string_const__((string *)local_48,(string *)local_50);
        local_38[0] = std::vector<bool,std::allocator<bool>>::back();
        bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
        if (bVar6) {
          pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
          RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
        }
        else {
          pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
          pTVar13 = (TGABagData *)
                    std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(param_1 + 0x38));
          TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
        }
        RtSerialRtonWriter::WriteUTF8String
                  (pRVar15,(RtSerialRtonKey *)local_38,(wstring *)local_48,true);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
        FUN_05476c50((string *)local_48);
      }
    }
    else {
      RtId::OfflineId::StaticParse((OfflineId *)local_50,extraout_x1);
      local_48 = std::vector<bool,std::allocator<bool>>::back();
      bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
      if (bVar6) {
        pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
        RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_48,(char *)0x0);
      }
      else {
        pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
        pTVar13 = (TGABagData *)
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_1 + 0x38));
        TGABagData::TGABagData((TGABagData *)local_48,pTVar13);
      }
      RtSerialRtonWriter::WriteRtId(pRVar15,(RtSerialRtonKey *)local_48,(OfflineId *)local_38);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_48);
      RtId::OfflineId::~OfflineId((OfflineId *)local_38);
    }
    std::string::~string((string *)local_50);
    break;
  case 1:
    lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_051c69e8(local_48,lVar8 + 8,lVar8 + 0x10);
    pcVar12 = (char *)FUN_0547429c(local_48);
    dVar16 = atof(pcVar12);
    if ((double)(float)dVar16 == dVar16) {
      local_38[0] = std::vector<bool,std::allocator<bool>>::back();
      bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
      if (bVar6) {
        pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
        RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
      }
      else {
        pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
        pTVar13 = (TGABagData *)
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_1 + 0x38));
        TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
      }
      RtSerialRtonWriter::WriteFloat(pRVar15,(RtSerialRtonKey *)local_38,(float)dVar16);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    }
    else {
      local_38[0] = std::vector<bool,std::allocator<bool>>::back();
      bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
      if (bVar6) {
        pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
        RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
      }
      else {
        pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
        pTVar13 = (TGABagData *)
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_1 + 0x38));
        TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
      }
      RtSerialRtonWriter::WriteDouble(pRVar15,(RtSerialRtonKey *)local_38,dVar16);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    }
    goto LAB_051cf934;
  case 2:
    lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_051c69e8(local_48,lVar8 + 8,lVar8 + 0x10);
    pcVar12 = (char *)FUN_0547429c(local_48);
    iVar7 = atoi(pcVar12);
    local_38[0] = std::vector<bool,std::allocator<bool>>::back();
    bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    if (bVar6) {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
    }
    else {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      pTVar13 = (TGABagData *)
                std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x38));
      TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
    }
    RtSerialRtonWriter::WriteInt32(pRVar15,(RtSerialRtonKey *)local_38,iVar7);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    goto LAB_051cf934;
  case 3:
    lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_051c69e8((string *)local_48,lVar8 + 8,lVar8 + 0x10);
    StringToInt((string *)local_48,local_50);
    local_38[0] = std::vector<bool,std::allocator<bool>>::back();
    bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    if (bVar6) {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
    }
    else {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      pTVar13 = (TGABagData *)
                std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x38));
      TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
    }
    RtSerialRtonWriter::WriteInt32(pRVar15,(RtSerialRtonKey *)local_38,local_50[0]);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
LAB_051cf934:
    std::string::~string((string *)local_48);
    break;
  case 4:
    uVar14 = (**(code **)(*param_2 + 0x28))(param_2,0);
    IPrsNode__(param_1,uVar14);
    lVar8 = *param_2;
    uVar14 = 1;
    goto LAB_051cf780;
  case 5:
    cVar5 = std::vector<bool,std::allocator<bool>>::empty
                      ((vector<bool,std::allocator<bool>> *)(param_1 + 0x10));
    if (cVar5 == '\0') {
      local_38[0] = std::vector<bool,std::allocator<bool>>::back();
      bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
      if (bVar6) {
        pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
        RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
      }
      else {
        pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
        pTVar13 = (TGABagData *)
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_1 + 0x38));
        TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
      }
      RtSerialRtonWriter::BeginObject(pRVar15,(RtSerialRtonKey *)local_38);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    }
    else {
      RtSerialRtonWriter::BeginDocumentObject(*(RtSerialRtonWriter **)(param_1 + 8));
    }
    cVar5 = std::vector<bool,std::allocator<bool>>::empty
                      ((vector<bool,std::allocator<bool>> *)(param_1 + 0x10));
    goto joined_r0x051cf6c8;
  case 6:
    pvVar1 = (vector<bool,std::allocator<bool>> *)(param_1 + 0x10);
    cVar5 = std::vector<bool,std::allocator<bool>>::empty(pvVar1);
    if (cVar5 == '\0') {
      local_38[0] = std::vector<bool,std::allocator<bool>>::back();
      bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
      if (bVar6) {
        pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
        RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
      }
      else {
        pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
        pTVar13 = (TGABagData *)
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_1 + 0x38));
        TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
      }
      RtSerialRtonWriter::BeginObject(pRVar15,(RtSerialRtonKey *)local_38);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    }
    else {
      RtSerialRtonWriter::BeginDocumentObject(*(RtSerialRtonWriter **)(param_1 + 8));
    }
    std::vector<bool,std::allocator<bool>>::push_back(pvVar1,false);
    uVar14 = (**(code **)(*param_2 + 0x28))(param_2,0);
    ExecuteListNode(Sexy::RtSerial::JsonParser*,FEAST::IPrsNode__(param_1,uVar14);
    std::vector<bool,std::allocator<bool>>::pop_back(pvVar1);
    cVar5 = std::vector<bool,std::allocator<bool>>::empty(pvVar1);
joined_r0x051cf6c8:
    if (cVar5 == '\0') {
      RtSerialRtonWriter::EndObject(*(RtSerialRtonWriter **)(param_1 + 8));
    }
    else {
      RtSerialRtonWriter::EndDocumentObject(*(RtSerialRtonWriter **)(param_1 + 8));
    }
    break;
  case 7:
    local_38[0] = std::vector<bool,std::allocator<bool>>::back();
    bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    if (bVar6) {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
      RtSerialRtonWriter::BeginArray(pRVar15,(_Bit_reference *)local_38,0,0xfd);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    }
    else {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      pTVar13 = (TGABagData *)
                std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x38));
      TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
      RtSerialRtonWriter::BeginArray(pRVar15,(_Bit_reference *)local_38,0,0xfd);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    }
    goto LAB_051cf5c0;
  case 8:
    pvVar1 = (vector<bool,std::allocator<bool>> *)(param_1 + 0x50);
    this = (vector<bool,std::allocator<bool>> *)(param_1 + 0x10);
    std::vector<bool,std::allocator<bool>>::push_back(pvVar1,true);
    local_38[0]._0_8_ = local_38[0]._0_8_ & 0xffffffff00000000;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(param_1 + 0x78),(int *)local_38);
    std::vector<bool,std::allocator<bool>>::push_back(this,true);
    uVar14 = (**(code **)(*param_2 + 0x28))(param_2,0);
    ExecuteListNode(Sexy::RtSerial::JsonParser*,FEAST::IPrsNode__(param_1,uVar14);
    std::vector<bool,std::allocator<bool>>::pop_back(this);
    puVar11 = (undefined4 *)
              std::vector<unsigned_int,std::allocator<unsigned_int>>::back
                        ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x78));
    uVar2 = *puVar11;
    FUN_051c6ebc(param_1 + 0x80);
    std::vector<bool,std::allocator<bool>>::pop_back(pvVar1);
    local_38[0] = std::vector<bool,std::allocator<bool>>::back();
    bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    if (bVar6) {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
    }
    else {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      pTVar13 = (TGABagData *)
                std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x38));
      TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
    }
    RtSerialRtonWriter::BeginArray(pRVar15,(_Bit_reference *)local_38,uVar2,0xfd);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    std::vector<bool,std::allocator<bool>>::push_back(pvVar1,false);
    std::vector<bool,std::allocator<bool>>::push_back(this,true);
    uVar14 = (**(code **)(*param_2 + 0x28))(param_2,0);
    ExecuteListNode(Sexy::RtSerial::JsonParser*,FEAST::IPrsNode__(param_1,uVar14);
    std::vector<bool,std::allocator<bool>>::pop_back(this);
    std::vector<bool,std::allocator<bool>>::pop_back(pvVar1);
LAB_051cf5c0:
    RtSerialRtonWriter::EndArray(*(RtSerialRtonWriter **)(param_1 + 8));
    break;
  case 9:
    plVar10 = (long *)(**(code **)(*param_2 + 0x28))(param_2,0);
    lVar8 = (**(code **)(*plVar10 + 0x10))();
    FUN_051c69e8((string *)local_48,lVar8 + 8,lVar8 + 0x10);
    lVar8 = FUN_05474184((string *)local_48);
    FUN_05475ffc((string *)local_38,(string *)local_48,1,lVar8 + -2);
    FUN_05474278((string *)local_48,(string *)local_38);
    std::string::~string((string *)local_38);
    Set8BytesTo0((string *)local_38);
    ProcessJsonString(std::string&,std::string_const__((string *)local_38,(string *)local_48);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x38),
               (string *)local_38);
    uVar14 = (**(code **)(*param_2 + 0x28))(param_2,1);
    IPrsNode__(param_1,uVar14);
    FUN_051c6ed8(param_1 + 0x40);
    std::string::~string((string *)local_38);
    std::string::~string((string *)local_48);
    break;
  case 10:
    local_38[0] = std::vector<bool,std::allocator<bool>>::back();
    bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    if (bVar6) {
      piVar9 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::back
                                ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                                 (param_1 + 0x78));
      *piVar9 = *piVar9 + 1;
      break;
    }
    lVar8 = *param_2;
    uVar14 = 0;
LAB_051cf780:
    uVar14 = (**(code **)(lVar8 + 0x28))(param_2,uVar14);
    IPrsNode__(param_1,uVar14);
    break;
  case 0xb:
    local_38[0] = std::vector<bool,std::allocator<bool>>::back();
    bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    if (bVar6) {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
    }
    else {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      pTVar13 = (TGABagData *)
                std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x38));
      TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
    }
    RtSerialRtonWriter::WriteBool(pRVar15,(RtSerialRtonKey *)local_38,true);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    break;
  case 0xc:
    local_38[0] = std::vector<bool,std::allocator<bool>>::back();
    bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    if (bVar6) {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
      RtSerialRtonWriter::WriteBool(pRVar15,(RtSerialRtonKey *)local_38,false);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    }
    else {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      pTVar13 = (TGABagData *)
                std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x38));
      TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
      RtSerialRtonWriter::WriteBool(pRVar15,(RtSerialRtonKey *)local_38,false);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
    }
    break;
  case 0xd:
    local_38[0] = std::vector<bool,std::allocator<bool>>::back();
    bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    if (bVar6) {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_38,(char *)0x0);
      std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)local_48,extraout_x1_00);
    }
    else {
      pRVar15 = *(RtSerialRtonWriter **)(param_1 + 8);
      pTVar13 = (TGABagData *)
                std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x38));
      TGABagData::TGABagData((TGABagData *)local_38,pTVar13);
      std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)local_48,extraout_x1_01);
    }
    RtSerialRtonWriter::WriteRtId(pRVar15,(RtSerialRtonKey *)local_38,(RtId *)local_48);
    RtId::~RtId((RtId *)local_48);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
  }
switchD_051cf30c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

