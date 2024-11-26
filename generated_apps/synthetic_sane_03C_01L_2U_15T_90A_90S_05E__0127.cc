#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task0Subtask3);
DeclareTask(CPU1Task3Subtask1);
DeclareTask(CPU1Task3Subtask9);
DeclareTask(CPU1Task3Subtask13);
DeclareTask(CPU1Task5Subtask4);
DeclareTask(CPU1Task5Subtask6);
DeclareTask(CPU2Task1Subtask0);
DeclareTask(CPU2Task1Subtask12);
DeclareTask(CPU2Task2Subtask2);
DeclareTask(CPU2Task2Subtask7);
DeclareTask(CPU2Task2Subtask14);
DeclareTask(CPU2Task4Subtask5);
DeclareTask(CPU2Task4Subtask8);
DeclareTask(CPU2Task4Subtask10);
DeclareTask(CPU2Task4Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 83); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 171); // 0
  ActivateTask(CPU1Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 56); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 114); // 0
  SetEvent(CPU1Task5Subtask4,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 74); // 0
  SetEvent(CPU2Task4Subtask10,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 36); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 9); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 155); // 0
  ActivateTask(CPU2Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 173); // 0
  ActivateTask(CPU1Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 29); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 122); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 136); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 16); // 0
  ActivateTask(CPU1Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 39); // 0
  SetEvent(CPU2Task1Subtask0,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 66); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 82); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 28); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 14); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 36); // 0
  ActivateTask(CPU2Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 179); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 131); // 0
  SetEvent(CPU2Task4Subtask8,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  ActivateTask(CPU2Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 123); // 0
  ActivateTask(CPU2Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 31); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 154); // 0
  ActivateTask(CPU2Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 132); // 0
  ActivateTask(CPU2Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 94); // 0
  SetEvent(CPU1Task3Subtask1,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 104); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 138); // 0
  TerminateTask();

}
