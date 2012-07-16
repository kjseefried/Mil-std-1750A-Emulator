#include "InstructionRegistry.h"
#include "Instruction_nop.h"
#include "Instruction_bif.h"
#include "Instruction_efc.h"
#include "Instruction_efcr.h"
#include "Instruction_dc.h"
#include "Instruction_dcr.h"
#include "Instruction_fc.h"
#include "Instruction_fcr.h"
#include "Instruction_fcb.h"
#include "Instruction_fcbx.h"
#include "Instruction_cbl.h"
#include "Instruction_cr.h"
#include "Instruction_cb.h"
#include "Instruction_cbx.h"
#include "Instruction_cisp.h"
#include "Instruction_cisn.h"
#include "Instruction_c.h"
#include "Instruction_cim.h"
#include "Instruction_xwr.h"
#include "Instruction_xbr.h"
#include "Instruction_eflt.h"
#include "Instruction_efix.h"
#include "Instruction_flt.h"
#include "Instruction_fix.h"
#include "Instruction_nr.h"
#include "Instruction_n.h"
#include "Instruction_nim.h"
#include "Instruction_xorr.h"
#include "Instruction_xor.h"
#include "Instruction_xorm.h"
#include "Instruction_andr.h"
#include "Instruction_andb.h"
#include "Instruction_andx.h"
#include "Instruction_and.h"
#include "Instruction_andm.h"
#include "Instruction_orr.h"
#include "Instruction_orb.h"
#include "Instruction_orbx.h"
#include "Instruction_or.h"
#include "Instruction_orim.h"
#include "Instruction_efdr.h"
#include "Instruction_efd.h"
#include "Instruction_fdr.h"
#include "Instruction_fdb.h"
#include "Instruction_fdbx.h"
#include "Instruction_fd.h"
#include "Instruction_ddr.h"
#include "Instruction_dd.h"
#include "Instruction_dr.h"
#include "Instruction_db.h"
#include "Instruction_dbx.h"
#include "Instruction_d.h"
#include "Instruction_dim.h"
#include "Instruction_dvr.h"
#include "Instruction_disp.h"
#include "Instruction_disn.h"
#include "Instruction_dv.h"
#include "Instruction_dvim.h"
#include "Instruction_efmr.h"
#include "Instruction_efm.h"
#include "Instruction_fmr.h"
#include "Instruction_fmb.h"
#include "Instruction_fmbx.h"
#include "Instruction_fm.h"
#include "Instruction_dmr.h"
#include "Instruction_dm.h"
#include "Instruction_mr.h"
#include "Instruction_mb.h"
#include "Instruction_mbx.h"
#include "Instruction_m.h"
#include "Instruction_mim.h"
#include "Instruction_msr.h"
#include "Instruction_misp.h"
#include "Instruction_misn.h"
#include "Instruction_ms.h"
#include "Instruction_msim.h"
#include "Instruction_fneg.h"
#include "Instruction_efsr.h"
#include "Instruction_efs.h"
#include "Instruction_fsr.h"
#include "Instruction_fsb.h"
#include "Instruction_fsbx.h"
#include "Instruction_fs.h"
#include "Instruction_dsr.h"
#include "Instruction_ds.h"
#include "Instruction_dneg.h"
#include "Instruction_neg.h"
#include "Instruction_decm.h"
#include "Instruction_sr.h"
#include "Instruction_sbb.h"
#include "Instruction_sbbx.h"
#include "Instruction_sisp.h"
#include "Instruction_s.h"
#include "Instruction_sim.h"
#include "Instruction_fabs.h"
#include "Instruction_efar.h"
#include "Instruction_efa.h"
#include "Instruction_far.h"
#include "Instruction_fab.h"
#include "Instruction_fabx.h"
#include "Instruction_fa.h"
#include "Instruction_dar.h"
#include "Instruction_da.h"
#include "Instruction_dabs.h"
#include "Instruction_abs.h"
#include "Instruction_incm.h"
#include "Instruction_ar.h"
#include "Instruction_ab.h"
#include "Instruction_abx.h"
#include "Instruction_aisp.h"
#include "Instruction_a.h"
#include "Instruction_aim.h"
#include "Instruction_pshm.h"
#include "Instruction_stlb.h"
#include "Instruction_slbi.h"
#include "Instruction_stub.h"
#include "Instruction_subi.h"
#include "Instruction_efst.h"
#include "Instruction_stm.h"
#include "Instruction_srm.h"
#include "Instruction_dstb.h"
#include "Instruction_dstx.h"
#include "Instruction_dst.h"
#include "Instruction_dsti.h"
#include "Instruction_mov.h"
#include "Instruction_stc.h"
#include "Instruction_stci.h"
#include "Instruction_stb.h"
#include "Instruction_stbx.h"
#include "Instruction_st.h"
#include "Instruction_sti.h"
#include "Instruction_popm.h"
#include "Instruction_llb.h"
#include "Instruction_llbi.h"
#include "Instruction_lub.h"
#include "Instruction_lubi.h"
#include "Instruction_efl.h"
#include "Instruction_lm.h"
#include "Instruction_dlr.h"
#include "Instruction_dlb.h"
#include "Instruction_dlbx.h"
#include "Instruction_dl.h"
#include "Instruction_dli.h"
#include "Instruction_lr.h"
#include "Instruction_lb.h"
#include "Instruction_lbx.h"
#include "Instruction_lisp.h"
#include "Instruction_lisn.h"
#include "Instruction_l.h"
#include "Instruction_lim.h"
#include "Instruction_li.h"
#include "Instruction_urs.h"
#include "Instruction_sjs.h"
#include "Instruction_lst.h"
#include "Instruction_lsti.h"
#include "Instruction_bge.h"
#include "Instruction_bnz.h"
#include "Instruction_bgt.h"
#include "Instruction_ble.h"
#include "Instruction_bex.h"
#include "Instruction_blt.h"
#include "Instruction_bez.h"
#include "Instruction_br.h"
#include "Instruction_soj.h"
#include "Instruction_js.h"
#include "Instruction_jc.h"
#include "Instruction_jci.h"
#include "Instruction_dscr.h"
#include "Instruction_dsar.h"
#include "Instruction_dslr.h"
#include "Instruction_scr.h"
#include "Instruction_sar.h"
#include "Instruction_slr.h"
#include "Instruction_dslc.h"
#include "Instruction_dsra.h"
#include "Instruction_dsrl.h"
#include "Instruction_dsll.h"
#include "Instruction_slc.h"
#include "Instruction_sra.h"
#include "Instruction_srl.h"
#include "Instruction_sll.h"
#include "Instruction_tvbr.h"
#include "Instruction_rvbr.h"
#include "Instruction_svbr.h"
#include "Instruction_tsb.h"
#include "Instruction_tbr.h"
#include "Instruction_tb.h"
#include "Instruction_tbi.h"
#include "Instruction_rbr.h"
#include "Instruction_rb.h"
#include "Instruction_rbi.h"
#include "Instruction_sbr.h"
#include "Instruction_sb.h"
#include "Instruction_sbi.h"
#include "Instruction_vio.h"
#include "Instruction_xio.h"

#include <vector>
#include <iostream>

InstructionRegistry::InstructionRegistry()
{
  for (unsigned int i = 0; i < 255 ; i++) {
    for (unsigned int j = 0; j < 256 ; j++) {
      m_instructions[i][j] = 0;
      m_instructionsExtended[i] = 0;
    }
  }

  m_instructionsVec.reserve(256);

  m_instructionsVec.push_back(new Instruction_nop());   // No Operation
  m_instructionsVec.push_back(new Instruction_bif());   // Built-in Function
  m_instructionsVec.push_back(new Instruction_efcr());  // Extended Precision Floating Point Compare
  m_instructionsVec.push_back(new Instruction_efc());   // Extended Precision Floating point Compare
  m_instructionsVec.push_back(new Instruction_dcr());   // Douple Precision Compare
  m_instructionsVec.push_back(new Instruction_dc());    // Douple Precision Compare
  m_instructionsVec.push_back(new Instruction_fcr());   // Floating Point Precision Compare
  m_instructionsVec.push_back(new Instruction_fc());    // Floating Point Precision Compare
  m_instructionsVec.push_back(new Instruction_fcb());   // Floating Point Precision Compare
  m_instructionsVec.push_back(new Instruction_fcbx());  // Floating Point Precision Compare
  m_instructionsVec.push_back(new Instruction_cbl());   // Compare between limits
  m_instructionsVec.push_back(new Instruction_cr());    // Single precision compare
  m_instructionsVec.push_back(new Instruction_cb());    // Single precision compare
  m_instructionsVec.push_back(new Instruction_cbx());   // Single precision compare
  m_instructionsVec.push_back(new Instruction_cisp());  // Single precision compare
  m_instructionsVec.push_back(new Instruction_cisn());  // Single precision compare
  m_instructionsVec.push_back(new Instruction_c());     // Single precision compare
  m_instructionsVec.push_back(new Instruction_cim());   // Single precision compare
  m_instructionsVec.push_back(new Instruction_xwr());   // Exchange Words in Registers
  m_instructionsVec.push_back(new Instruction_xbr());   // Exchange Bytes in Register
  m_instructionsVec.push_back(new Instruction_eflt());  // Convert 32 bit Integer in Extended Floating Point
  m_instructionsVec.push_back(new Instruction_efix());  // Convert Extended Floating Point in 32 bit Integer
  m_instructionsVec.push_back(new Instruction_flt());   // Convert 16 bit Integer in Floating Point
  m_instructionsVec.push_back(new Instruction_fix());   // Convert Floating Point in 16 bit Integer
  m_instructionsVec.push_back(new Instruction_nr());    // Logical NAND
  m_instructionsVec.push_back(new Instruction_n());     // Logical NAND
  m_instructionsVec.push_back(new Instruction_nim());   // Logical NAND
  m_instructionsVec.push_back(new Instruction_xorr());  // Exlusive Logical OR 
  m_instructionsVec.push_back(new Instruction_xor());   // Exlusive Logical OR 
  m_instructionsVec.push_back(new Instruction_xorm());  // Exlusive Logical OR 
  m_instructionsVec.push_back(new Instruction_andr());  // Logical AND
  m_instructionsVec.push_back(new Instruction_andb());  // Logical AND
  m_instructionsVec.push_back(new Instruction_andx());  // Logical AND
  m_instructionsVec.push_back(new Instruction_and());   // Logical AND
  m_instructionsVec.push_back(new Instruction_andm());  // Logical AND
  m_instructionsVec.push_back(new Instruction_orr());   // Logical OR
  m_instructionsVec.push_back(new Instruction_orb());   // Logical OR
  m_instructionsVec.push_back(new Instruction_orbx());  // Logical OR
  m_instructionsVec.push_back(new Instruction_or());    // Logical OR
  m_instructionsVec.push_back(new Instruction_orim());  // Logical OR
  m_instructionsVec.push_back(new Instruction_efdr());  // Extended Precision Floating Point Divide
  m_instructionsVec.push_back(new Instruction_efd());   // Extended Precision Floating Point Divide
  m_instructionsVec.push_back(new Instruction_fdr());   // Floating Point Divide
  m_instructionsVec.push_back(new Instruction_fdb());   // Floating Point Divide
  m_instructionsVec.push_back(new Instruction_fdbx());  // Floating Point Divide
  m_instructionsVec.push_back(new Instruction_fd());    // Floating Point Divide
  m_instructionsVec.push_back(new Instruction_ddr());   // Double Precision Integer Divide
  m_instructionsVec.push_back(new Instruction_dd());    // Double Precision Integer Divide
  m_instructionsVec.push_back(new Instruction_dr());    // Single Precision Integer Divide, 32 bit dividend
  m_instructionsVec.push_back(new Instruction_db());    // Single Precision Integer Divide, 32 bit dividend
  m_instructionsVec.push_back(new Instruction_dbx());   // Single Precision Integer Divide, 32 bit dividend
  m_instructionsVec.push_back(new Instruction_d());     // Single Precision Integer Divide, 32 bit dividend
  m_instructionsVec.push_back(new Instruction_dim());   // Single Precision Integer Divide, 32 bit dividend
  m_instructionsVec.push_back(new Instruction_dvr());   // Single Precision Integer Divide, 16 bit dividend
  m_instructionsVec.push_back(new Instruction_disp());  // Single Precision Integer Divide, 16 bit dividend
  m_instructionsVec.push_back(new Instruction_disn());  // Single Precision Integer Divide, 16 bit dividend
  m_instructionsVec.push_back(new Instruction_dv());    // Single Precision Integer Divide, 16 bit dividend
  m_instructionsVec.push_back(new Instruction_dvim());  // Single Precision Integer Divide, 16 bit dividend
  m_instructionsVec.push_back(new Instruction_efmr());  // Extended Precision Floating Point Multiply
  m_instructionsVec.push_back(new Instruction_efm());   // Extended Precision Floating Point Multiply
  m_instructionsVec.push_back(new Instruction_fmr());   // Floating Point Multiply
  m_instructionsVec.push_back(new Instruction_fmb());   // Floating Point Multiply
  m_instructionsVec.push_back(new Instruction_fmbx());  // Floating Point Multiply
  m_instructionsVec.push_back(new Instruction_fm());    // Floating Point Multiply
  m_instructionsVec.push_back(new Instruction_dmr());   // Double Precision Integer Multiply
  m_instructionsVec.push_back(new Instruction_dm());    // Double Precision Integer Multiply
  m_instructionsVec.push_back(new Instruction_mr());    // Single Precision Integer Multiply, 32 bit product
  m_instructionsVec.push_back(new Instruction_mb());    // Single Precision Integer Multiply, 32 bit product
  m_instructionsVec.push_back(new Instruction_mbx());   // Single Precision Integer Multiply, 32 bit product
  m_instructionsVec.push_back(new Instruction_m());     // Single Precision Integer Multiply, 32 bit product
  m_instructionsVec.push_back(new Instruction_mim());   // Single Precision Integer Multiply, 32 bit product
  m_instructionsVec.push_back(new Instruction_msr());   // Single Precision Integer Multiply, 16 bit product
  m_instructionsVec.push_back(new Instruction_misp());  // Single Precision Integer Multiply, 16 bit product
  m_instructionsVec.push_back(new Instruction_misn());  // Single Precision Integer Multiply, 16 bit product
  m_instructionsVec.push_back(new Instruction_ms());    // Single Precision Integer Multiply, 16 bit product
  m_instructionsVec.push_back(new Instruction_msim());  // Single Precision Integer Multiply, 16 bit product
  m_instructionsVec.push_back(new Instruction_fneg());  // Floating Point Negate Register
  m_instructionsVec.push_back(new Instruction_efsr());  // Extended Precision Floating Point Subtract
  m_instructionsVec.push_back(new Instruction_efs());   // Extended Precision Floating Point Subtract
  m_instructionsVec.push_back(new Instruction_fsr());   // Floating Point Subtract
  m_instructionsVec.push_back(new Instruction_fsb());   // Floating Point Subtract
  m_instructionsVec.push_back(new Instruction_fsbx());  // Floating Point Subtract
  m_instructionsVec.push_back(new Instruction_fs());    // Floating Point Subtract
  m_instructionsVec.push_back(new Instruction_dsr());   // Double Precision Integer Subtract
  m_instructionsVec.push_back(new Instruction_ds());    // Double Precision Integer Subtract
  m_instructionsVec.push_back(new Instruction_dneg());  // Double Precision Negate Register
  m_instructionsVec.push_back(new Instruction_neg());   // Single Precision Negate Register
  m_instructionsVec.push_back(new Instruction_decm());  // Decrement Memory By Positive Integer
  m_instructionsVec.push_back(new Instruction_sr());    // Single Precision Integer Subtract
  m_instructionsVec.push_back(new Instruction_sbb());   // Single Precision Integer Subtract
  m_instructionsVec.push_back(new Instruction_sbbx());  // Single Precision Integer Subtract
  m_instructionsVec.push_back(new Instruction_sisp());  // Single Precision Integer Subtract
  m_instructionsVec.push_back(new Instruction_s());     // Single Precision Integer Subtract
  m_instructionsVec.push_back(new Instruction_sim());   // Single Precision Integer Subtract
  m_instructionsVec.push_back(new Instruction_fabs());  // Floating Point Absolute Value
  m_instructionsVec.push_back(new Instruction_efar());  // Extended Precision Floating Point Add
  m_instructionsVec.push_back(new Instruction_efa());   // Extended Precision Floating Point Add
  m_instructionsVec.push_back(new Instruction_far());   // Floating Point Add
  m_instructionsVec.push_back(new Instruction_fab());   // Floating Point Add
  m_instructionsVec.push_back(new Instruction_fabx());  // Floating Point Add
  m_instructionsVec.push_back(new Instruction_fa());    // Floating Point Add
  m_instructionsVec.push_back(new Instruction_dar());   // Double Precision Integer Add
  m_instructionsVec.push_back(new Instruction_da());    // Double Precision Integer Add
  m_instructionsVec.push_back(new Instruction_dabs());  // Double Precision Absolute Value
  m_instructionsVec.push_back(new Instruction_abs());   // Single Precision Absolute Value
  m_instructionsVec.push_back(new Instruction_incm());  // Increment Memory By Positive Integer
  m_instructionsVec.push_back(new Instruction_ar());    // Single Precision Integer Add
  m_instructionsVec.push_back(new Instruction_ab());    // Single Precision Integer Add
  m_instructionsVec.push_back(new Instruction_abx());   // Single Precision Integer Add
  m_instructionsVec.push_back(new Instruction_aisp());  // Single Precision Integer Add
  m_instructionsVec.push_back(new Instruction_a());     // Single Precision Integer Add
  m_instructionsVec.push_back(new Instruction_aim());   // Single Precision Integer Add
  m_instructionsVec.push_back(new Instruction_pshm());  // Push Multiple Registers on Stack
  m_instructionsVec.push_back(new Instruction_stlb());  // Store Lower Byte
  m_instructionsVec.push_back(new Instruction_slbi());  // Store Lower Byte
  m_instructionsVec.push_back(new Instruction_stub());  // Store Upper Byte
  m_instructionsVec.push_back(new Instruction_subi());  // Store Upper Byte
  m_instructionsVec.push_back(new Instruction_efst());  // Extended Precision Floating Point Store
  m_instructionsVec.push_back(new Instruction_stm());   // Store Multiple Registers
  m_instructionsVec.push_back(new Instruction_srm());   // Store Register Through Mask
  m_instructionsVec.push_back(new Instruction_dstb());  // Double Precision Integer Store
  m_instructionsVec.push_back(new Instruction_dstx());  // Double Precision Integer Store
  m_instructionsVec.push_back(new Instruction_dst());   // Double Precision Integer Store
  m_instructionsVec.push_back(new Instruction_dsti());  // Double Precision Integer Store
  m_instructionsVec.push_back(new Instruction_mov());   // Move Multiple Words, Memory to Memory
  m_instructionsVec.push_back(new Instruction_stc());   // Store a Non Negative Constant
  m_instructionsVec.push_back(new Instruction_stci());  // Store a Non Negative Constant
  m_instructionsVec.push_back(new Instruction_stb());   // Single Precision Integer Store
  m_instructionsVec.push_back(new Instruction_stbx());  // Single Precision Integer Store
  m_instructionsVec.push_back(new Instruction_st());    // Single Precision Integer Store
  m_instructionsVec.push_back(new Instruction_sti());   // Single Precision Integer Store
  m_instructionsVec.push_back(new Instruction_popm());  // Pop Multiple Registers Off the Stack
  m_instructionsVec.push_back(new Instruction_llb());   // Load From Lower Byte
  m_instructionsVec.push_back(new Instruction_llbi());  // Load From Lower Byte
  m_instructionsVec.push_back(new Instruction_lub());   // Load From Upper Byte
  m_instructionsVec.push_back(new Instruction_lubi());  // Load From Upper Byte
  m_instructionsVec.push_back(new Instruction_efl());   // Extended Precision Floating Point Load
  m_instructionsVec.push_back(new Instruction_lm());    // Load Multiple Registers
  m_instructionsVec.push_back(new Instruction_dlr());   // Double Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_dlb());   // Double Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_dlbx());  // Double Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_dl());    // Double Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_dli());   // Double Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_lr());    // Single Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_lb());    // Single Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_lbx());   // Single Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_lisp());  // Single Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_lisn());  // Single Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_l());     // Single Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_lim());   // Single Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_li());    // Single Precision Integer Load 
  m_instructionsVec.push_back(new Instruction_urs());   // Unstack IC and Return From Subroutine
  m_instructionsVec.push_back(new Instruction_sjs());   // Stack IC and Return From Subroutine
  m_instructionsVec.push_back(new Instruction_lst());   // Load Status
  m_instructionsVec.push_back(new Instruction_lsti());  // Load Status
  m_instructionsVec.push_back(new Instruction_bge());   // Branch if greater than or equal to zero
  m_instructionsVec.push_back(new Instruction_bnz());   // Branch if not equal to zero
  m_instructionsVec.push_back(new Instruction_bgt());   // Branch if greater than zero
  m_instructionsVec.push_back(new Instruction_ble());   // Branch if less than or equal to zero
  m_instructionsVec.push_back(new Instruction_bex());   // Branch to executive
  m_instructionsVec.push_back(new Instruction_blt());   // Branch if less than zero
  m_instructionsVec.push_back(new Instruction_bez());   // Branch if equal to zero
  m_instructionsVec.push_back(new Instruction_br());    // Branch unconditionally
  m_instructionsVec.push_back(new Instruction_soj());   // Subtract one and jump
  m_instructionsVec.push_back(new Instruction_js());    // Jump To Subroutine
  m_instructionsVec.push_back(new Instruction_jc());    // Jump On Condition
  m_instructionsVec.push_back(new Instruction_jci());   // Jump On Condition
  m_instructionsVec.push_back(new Instruction_dscr());  // Double Shift Cyclic, Count In Register
  m_instructionsVec.push_back(new Instruction_dsar());  // Double Shift Arithmetic, Count In Register
  m_instructionsVec.push_back(new Instruction_dslr());  // Double Shift Logical, Count In Register
  m_instructionsVec.push_back(new Instruction_scr());   // Shift Cyclic, Count In Register
  m_instructionsVec.push_back(new Instruction_sar());   // Shift Arithmetic, Count In Register
  m_instructionsVec.push_back(new Instruction_slr());   // Shift Logical, Count In Register
  m_instructionsVec.push_back(new Instruction_dslc());  // Double Shift Left Cyclic
  m_instructionsVec.push_back(new Instruction_dsra());  // Double Shift Right Arithmetic
  m_instructionsVec.push_back(new Instruction_dsrl());  // Double Shift Right Logical
  m_instructionsVec.push_back(new Instruction_dsll());  // Double Shift Left Logical
  m_instructionsVec.push_back(new Instruction_slc());   // Shift Left Cyclic
  m_instructionsVec.push_back(new Instruction_sra());   // Shift Right Arithmetic
  m_instructionsVec.push_back(new Instruction_srl());   // Shift Right Logical
  m_instructionsVec.push_back(new Instruction_sll());   // Shift Left Logical
  m_instructionsVec.push_back(new Instruction_tvbr());  // Test Variable Bit In Register
  m_instructionsVec.push_back(new Instruction_rvbr());  // Reset Variable Bit In Register
  m_instructionsVec.push_back(new Instruction_svbr());  // set Variable Bit In Register
  m_instructionsVec.push_back(new Instruction_tsb());   // Test And Set Bit
  m_instructionsVec.push_back(new Instruction_tbr());   // Test Bit
  m_instructionsVec.push_back(new Instruction_tb());    // Test Bit
  m_instructionsVec.push_back(new Instruction_tbi());   // Test Bit
  m_instructionsVec.push_back(new Instruction_rbr());   // Retest Bit
  m_instructionsVec.push_back(new Instruction_rb());    // Retest Bit
  m_instructionsVec.push_back(new Instruction_rbi());   // Retest Bit
  m_instructionsVec.push_back(new Instruction_sbr());   // Set Bit
  m_instructionsVec.push_back(new Instruction_sb());    // Set Bit
  m_instructionsVec.push_back(new Instruction_sbi());   // Set Bit
  m_instructionsVec.push_back(new Instruction_vio());   // Vectored Input/Output
  m_instructionsVec.push_back(new Instruction_xio());   // Execute Input/Output


  for (std::vector<AbstractInstruction *>::iterator it = m_instructionsVec.begin(); it != m_instructionsVec.end(); it++)
  {
    for (unsigned int oc = (*it)->opcodeRange().low; oc <=  (*it)->opcodeRange().high; oc++)
    {
      unsigned short int opex = (*it)->ocex();
      // If this is an extended instruction - i.e. one for which the extended opcode is also relevant then store this
      // as an example. It will only be important later that we have stored an example one for each opcode.
      if (opex != 0) {
        m_instructionsExtended[oc] = *it;
      }
      // If there is a clash make this known
      if (m_instructions[oc][opex])
      {
        std::cerr << "Clash between instructions: " << m_instructions[oc][opex]->opcode_str() << " and " << (*it)->opcode_str() << std::endl;
      }
      m_instructions[oc][opex] = *it;
    }
  }

}

InstructionRegistry::~InstructionRegistry()
{
  for (std::vector<AbstractInstruction *>::iterator it = m_instructionsVec.begin(); it != m_instructionsVec.end(); it++)
  {
    delete *it;
  }
}
InstructionRegistry & InstructionRegistry::instance()
{
  static InstructionRegistry  s;
  return s;
}

const AbstractInstruction * InstructionRegistry::findInstruction (const Value_i16 & instr)
{
  unsigned short int oc = (0xff & instr.value() >> 8);
  if (!m_instructionsExtended[oc]) {
    if (m_instructions[oc][0]) m_instructions[oc][0]->clear();
    return m_instructions[oc][0];
  }
  unsigned short ocex = m_instructionsExtended[oc]->ocex(instr.value());
  if (m_instructions[oc][ocex]) m_instructions[oc][ocex]->clear();
  return m_instructions[oc][ocex];
}
