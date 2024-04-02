#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x11444a71, "rt2800_disable_wpdma" },
	{ 0x76facfdb, "rt2x00lib_beacondone" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x231d84dd, "rt2800_config" },
	{ 0x38ba366f, "rt2800_get_txwi_rxwi_size" },
	{ 0x8a695921, "rt2x00lib_pretbtt" },
	{ 0x643c4a52, "rt2800_wait_wpdma_ready" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf34edb7, "rt2800_process_rxwi" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x94dc37b6, "rt2x00queue_for_each_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdb1ff350, "rt2x00queue_get_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3acff9be, "rt2x00mmio_rxdone" },
	{ 0x3b5b2378, "rt2800_txdone_entry" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x5df23e85, "rt2800_enable_radio" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2800lib,rt2x00lib,rt2x00mmio";


MODULE_INFO(srcversion, "BB8B8955B8B201DFEB6191F");
MODULE_INFO(rhelversion, "8.0");
