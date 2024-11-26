#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask1);
DeclareTask(CPU0Task3Subtask11);
DeclareTask(CPU1Task1Subtask3);
DeclareTask(CPU1Task1Subtask4);
DeclareTask(CPU2Task4Subtask0);
DeclareTask(CPU3Task2Subtask9);
DeclareTask(CPU3Task2Subtask14);
DeclareTask(CPU4Task5Subtask2);
DeclareTask(CPU4Task5Subtask6);
DeclareTask(CPU4Task5Subtask10);
DeclareTask(CPU4Task5Subtask12);
DeclareTask(CPU5Task0Subtask5);
DeclareTask(CPU5Task0Subtask7);
DeclareTask(CPU5Task0Subtask8);
DeclareTask(CPU5Task0Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 51); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 185); // 0
  ActivateTask(CPU0Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 83); // 0
  ActivateTask(CPU1Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 142); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 59); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 104); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 153); // 0
  ActivateTask(CPU3Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 98); // 0
  ActivateTask(CPU4Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 142); // 0
  ActivateTask(CPU4Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 198); // 0
  ActivateTask(CPU4Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 24); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 193); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 63); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 168); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 159); // 0
  ActivateTask(CPU5Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 81); // 0
  ActivateTask(CPU5Task0Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 73); // 0
  ActivateTask(CPU5Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 154); // 0
  TerminateTask();

}
