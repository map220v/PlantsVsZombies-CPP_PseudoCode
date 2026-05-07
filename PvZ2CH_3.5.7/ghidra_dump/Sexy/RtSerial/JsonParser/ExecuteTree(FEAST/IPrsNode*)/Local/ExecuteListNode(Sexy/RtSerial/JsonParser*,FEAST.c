// Class: Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ExecuteListNode(Sexy::RtSerial::JsonParser*,FEAST


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ExecuteListNode(Sexy::RtSerial::JsonParser*,
   FEAST::IPrsNode*) */

void Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ExecuteListNode(Sexy::
     RtSerial::JsonParser*,FEAST::IPrsNode__(undefined8 param_1,IPrsNode *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar6;
  long lVar7;
  IPrsNode *local_30;
  IPrsNode *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  undefined8 uVar5;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  do {
    local_30 = param_2;
    if (param_2 == (IPrsNode *)0x0) {
LAB_051d0080:
      uVar5 = local_20;
      iVar2 = FUN_051c69a4(local_20,local_18);
      uVar1 = iVar2 - 1;
      if (-1 < (int)uVar1) {
        lVar6 = (long)(int)uVar1 + -1;
        lVar3 = (long)(int)uVar1;
        lVar7 = lVar6;
        while( true ) {
          puVar4 = (undefined8 *)FUN_051c69b0(uVar5,lVar3);
          ExecuteNode(Sexy::RtSerial::JsonParser*,FEAST::IPrsNode__(param_1,*puVar4);
          if (lVar7 == lVar6 - (ulong)uVar1) break;
          uVar5 = local_20;
          lVar3 = lVar7;
          lVar7 = lVar7 + -1;
        }
      }
      std::vector<FEAST::IPrsNode*,std::allocator<FEAST::IPrsNode*>>::~vector
                ((vector<FEAST::IPrsNode*,std::allocator<FEAST::IPrsNode*>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = (**(code **)(*(long *)param_2 + 8))();
    if (lVar3 != 5) {
      std::vector<FEAST::IPrsNode*,std::allocator<FEAST::IPrsNode*>>::push_back
                ((vector<FEAST::IPrsNode*,std::allocator<FEAST::IPrsNode*>> *)&local_20,&local_30);
      local_30 = (IPrsNode *)0x0;
      goto LAB_051d0080;
    }
    local_28 = (IPrsNode *)(**(code **)(*(long *)local_30 + 0x28))(local_30,1);
    std::vector<FEAST::IPrsNode*,std::allocator<FEAST::IPrsNode*>>::push_back
              ((vector<FEAST::IPrsNode*,std::allocator<FEAST::IPrsNode*>> *)&local_20,&local_28);
    param_2 = (IPrsNode *)(**(code **)(*(long *)local_30 + 0x28))(local_30,0);
  } while( true );
}

