#include <freeipmi/api/ipmi-api.h>
#include <iostream>
#include <stdio.h>

void getData(){

  ipmi_ctx_t ipmiContext = ipmi_ctx_create();
  const char *hostname = "192.168.10.171";

  uint32_t *myPtr = (uint32_t*) ipmiContext;
  printf("0x%08X\n", myPtr[0]);

  int connection = ipmi_ctx_open_outofband(ipmiContext,
					   hostname,
					   "",
					   "",
					   0,0,0,0,0,0);
  std::cout << "connection: " << connection << std::endl;
  //  uint8_t lun = 0;
  //  uint8_t net_fn = 0x04;
  //const void *buf_rq;
  //  void *buf_rs;
  //  int raw_result = ipmi_cmd_raw_ipmb ( ipmiContext,
  //                                       lun,
  //                                   net_fn,
  //                                   buf_rq, 0,
  //				       buf_rs, 0);
  //
  //  std::cout << "raw result: " << raw_result << std::endl;

}

int main(int argc, char** argv){
  getData();
}
