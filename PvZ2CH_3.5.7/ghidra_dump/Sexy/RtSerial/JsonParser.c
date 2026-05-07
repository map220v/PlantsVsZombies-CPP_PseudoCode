// Class: Sexy::RtSerial::JsonParser


/* Sexy::RtSerial::JsonParser::InitGrammar(FEAST::IPrsParser*) */

void __thiscall Sexy::RtSerial::JsonParser::InitGrammar(JsonParser *this,IPrsParser *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"start","object",0);
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 8))(param_1);
  (**(code **)(*plVar1 + 8))(plVar1,1);
  (**(code **)(*plVar1 + 0x18))(plVar1,0);
  (**(code **)(*plVar1 + 0x10))(plVar1,0,".");
  (**(code **)(*plVar1 + 0x18))(plVar1,1);
  pcVar3 = *(code **)(*plVar1 + 0x10);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,1);
  (*pcVar3)(plVar1,0,uVar2);
  pcVar3 = *(code **)(*plVar1 + 0x10);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,2);
  (*pcVar3)(plVar1,0,uVar2);
  (**(code **)(*plVar1 + 0x10))(plVar1,9,&DAT_056e50f0);
  (**(code **)(*plVar1 + 0x20))
            (plVar1,9,InitGrammar(FEAST::IPrsParser*)::Local::BlockCommentIntercept(FEAST::
                      ILexLexer*,FEAST::SLexToken__char__int_);
  pcVar3 = *(code **)(*plVar1 + 0x10);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,10);
  (*pcVar3)(plVar1,2,uVar2);
  (**(code **)(*plVar1 + 0x10))
            (plVar1,4,
             "(\\-)?(([0-9]+[Ee][\\+\\-]?[0-9]+)|([0-9]*\\.[0-9]+([Ee][\\+\\-]?[0-9]+)?)|([0-9]+\\.[0-9]*([Ee][\\+\\-]?[0-9]+)?))"
            );
  (**(code **)(*plVar1 + 0x10))(plVar1,5,"(\\-)?[0-9]+");
  (**(code **)(*plVar1 + 0x10))(plVar1,6,"0[xX][0-9a-fA-F]+");
  (**(code **)(*(long *)param_1 + 0x10))(param_1,"STRING",2,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,"FLOAT",4,2);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,"DECINTEGER",5,3);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,"HEXINTEGER",6,4);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"integer","DECINTEGER",0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"integer","HEXINTEGER",0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"object","\'{\':0 \'}\'",6);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"object","\'{\' kvp_list:1 \'}\'",7);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"array","\'[\':0 \']\'",8);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"array","\'[\' element_list:1 \']\'",9);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"kvp_list",&DAT_056e5228,0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"kvp_list","kvp_list:1 \',\' kvp:2",5);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,&DAT_056e5228,"STRING:1 \':\' value:2",10);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"element_list","element",0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"element_list","element_list:1 \',\' element:2",5);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"element","value:1",0xb);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"value","STRING",0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"value","integer",0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"value","FLOAT",0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"value","object",0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"value","array",0);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"value","\"true\":0",0xc);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"value","\"false\":0",0xd);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,"value","\"null\":0",0xe);
  return;
}


/* Sexy::RtSerial::JsonParser::JsonParser() */

void __thiscall Sexy::RtSerial::JsonParser::JsonParser(JsonParser *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)(this + 0x10))
  ;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)(this + 0x50))
  ;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  return;
}


/* Sexy::RtSerial::JsonParser::~JsonParser() */

void __thiscall Sexy::RtSerial::JsonParser::~JsonParser(JsonParser *this)

{
  if (*(undefined8 **)this != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)this)();
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x10));
  return;
}


/* Sexy::RtSerial::JsonParser::Clear() */

void __thiscall Sexy::RtSerial::JsonParser::Clear(JsonParser *this)

{
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x10));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x50));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x78));
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*) */

void Sexy::RtSerial::JsonParser::ExecuteTree(IPrsNode *param_1)

{
  ExecuteTree(FEAST::IPrsNode*)::Local::ExecuteNode(Sexy::RtSerial::JsonParser*,FEAST::IPrsNode__();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerial::JsonParser::ConvertToRton(char const*, Sexy::RtSerialRtonWriter&, std::string&)
    */

void __thiscall
Sexy::RtSerial::JsonParser::ConvertToRton
          (JsonParser *this,char *param_1,RtSerialRtonWriter *param_2,string *param_3)

{
  undefined8 *puVar1;
  char *__s;
  undefined8 uVar2;
  IPrsParser *pIVar3;
  ulong extraout_x1;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)this == 0) {
    FEAST::LIB_SetClient
              ((ILibClient *)
               &ConvertToRton(char_const*,Sexy::RtSerialRtonWriter&,std::string&)::sClient);
    pIVar3 = (IPrsParser *)FEAST::IPrsParser::PrsCreate((IPrsParser *)0x0,extraout_x1);
    *(IPrsParser **)this = pIVar3;
    InitGrammar(this,pIVar3);
    (**(code **)(**(long **)this + 0x20))(*(long **)this);
  }
  FUN_05474ff8(param_3);
  puVar1 = (undefined8 *)(**(code **)(**(long **)this + 0x30))(*(long **)this,param_1,4);
  if (puVar1 == (undefined8 *)0x0) {
    __s = (char *)(**(code **)(**(long **)this + 0x38))(*(long **)this,&local_28,&local_20);
    std::string::string(asStack_18,__s);
    nop();
    uVar2 = FUN_0547429c(asStack_18);
    StrFormat("(%d) : syntax error(%d) : %s",asStack_10,local_28,local_20,uVar2);
    FUN_05474278(param_3,asStack_10);
    std::string::~string(asStack_10);
    Clear(this);
    std::string::~string(asStack_18);
  }
  else {
    *(RtSerialRtonWriter **)(this + 8) = param_2;
    ExecuteTree((IPrsNode *)this);
    (**(code **)*puVar1)(puVar1);
    Clear(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar1 != (undefined8 *)0x0);
}

