// Class: TcpClient


/* TcpClient::TcpClient() */

void __thiscall TcpClient::TcpClient(TcpClient *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* TcpClient::~TcpClient() */

void __thiscall TcpClient::~TcpClient(TcpClient *this)

{
  if (*(addrinfo **)(this + 8) != (addrinfo *)0x0) {
    freeaddrinfo(*(addrinfo **)(this + 8));
    return;
  }
  return;
}


/* TcpClient::CloseSocket() */

void __thiscall TcpClient::CloseSocket(TcpClient *this)

{
  if (-1 < *(int *)this) {
    shutdown(*(int *)this,2);
    close(*(int *)this);
  }
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TcpClient::ConnetServer() */

void __thiscall TcpClient::ConnetServer(TcpClient *this)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_c;
  long local_8;
  
  lVar2 = *(long *)(this + 8);
  local_8 = ___stack_chk_guard;
  iVar1 = socket(*(int *)(lVar2 + 4),*(int *)(lVar2 + 8),*(int *)(lVar2 + 0xc));
  *(int *)this = iVar1;
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
    puts("Failed to create socket");
    CloseSocket(this);
  }
  else {
    local_c = 1;
    setsockopt(iVar1,1,0x4000,&local_c,4);
    iVar1 = connect(*(int *)this,*(sockaddr **)(*(long *)(this + 8) + 0x20),
                    *(socklen_t *)(*(long *)(this + 8) + 0x10));
    if (iVar1 == -1) {
      CloseSocket(this);
      puts("connect failed");
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* TcpClient::SentMsg(char const*, unsigned short) */

int __thiscall TcpClient::SentMsg(TcpClient *this,char *param_1,ushort param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = ConnetServer(this);
  if (iVar1 == 0) {
    while( true ) {
      uVar3 = (uint)param_2;
      uVar2 = send(*(int *)this,param_1 + iVar4,(ulong)param_2,0);
      iVar1 = (int)uVar2;
      iVar4 = iVar4 + iVar1;
      param_2 = (ushort)(uVar3 - iVar1);
      if (iVar1 < 1) break;
      if ((uVar3 - iVar1 & 0xffff) == 0) {
        CloseSocket(this);
        return iVar4;
      }
    }
    printf(" error   send len = [%d]\n",uVar2 & 0xffffffff);
    CloseSocket(this);
  }
  else {
    puts(" ======connect error ");
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TcpClient::InitSocket(char const*, unsigned short) */

void __thiscall TcpClient::InitSocket(TcpClient *this,char *param_1,ushort param_2)

{
  int __ecode;
  char *pcVar1;
  undefined8 uVar2;
  ushort local_42;
  string asStack_40 [8];
  addrinfo local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38.ai_addrlen = 0;
  local_38._20_4_ = 0;
  local_38.ai_addr = (sockaddr *)0x0;
  local_38.ai_canonname = (char *)0x0;
  local_38.ai_next = (addrinfo *)0x0;
  local_38.ai_flags = 2;
  local_38.ai_family = 0;
  local_38.ai_socktype = 1;
  local_38.ai_protocol = 0;
  local_42 = param_2;
  std::to_string<unsigned_short>(&local_42);
  pcVar1 = (char *)FUN_0547429c(asStack_40);
  __ecode = getaddrinfo(param_1,pcVar1,&local_38,(addrinfo **)(this + 8));
  std::string::~string(asStack_40);
  uVar2 = 1;
  if (__ecode != 0) {
    pcVar1 = gai_strerror(__ecode);
    printf("getaddrinfo error: %s\n",pcVar1);
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

