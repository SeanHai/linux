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
	{ 0xcb850e4, "saa7146_vfree_destroy_pgtable" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0xb816ec49, "saa7146_vmalloc_build_pgtable" },
	{ 0xbbe233eb, "saa7146_setgpio" },
	{ 0xea8c7f8c, "dma_direct_sync_sg_for_cpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x4e033fe1, "ttpci_eeprom_parse_mac" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x27e1a049, "printk" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x690a3dde, "saa7146_i2c_adapter_prepare" },
	{ 0x12b82bfb, "saa7146_wait_for_debi_done" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6a404590, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,dvb-core,ttpci-eeprom";


MODULE_INFO(srcversion, "EE5DA8225759BB72FA97669");
MODULE_INFO(rhelversion, "8.0");
