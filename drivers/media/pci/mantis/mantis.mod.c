#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
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
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfe0db597, "mantis_stream_control" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x2d19acd7, "mantis_i2c_exit" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xe6ce6faf, "mantis_gpio_set_bits" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xd11aca72, "mantis_dvb_init" },
	{ 0x66a1dcde, "mantis_i2c_init" },
	{ 0x54c4f538, "mantis_pci_exit" },
	{ 0xf4b9348c, "mantis_uart_exit" },
	{ 0x27e1a049, "printk" },
	{ 0x75a92fc6, "mantis_input_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe3e31bcb, "mantis_get_mac" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x8f7e9b76, "mantis_dma_init" },
	{ 0xc4c6eb7f, "mantis_dma_exit" },
	{ 0x173bdb01, "mantis_pci_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2bae8f74, "mantis_input_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x1a205ca9, "mantis_frontend_power" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc9261a3b, "mantis_frontend_soft_reset" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x121da905, "queue_work_on" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x99d03377, "mantis_uart_init" },
	{ 0x9aa2ba7b, "mantis_dvb_exit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mantis_core";

MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv0000153Bsd00001178bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv0000153Bsd00001179bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000014bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000031bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000043bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000024bc*sc*i*");

MODULE_INFO(srcversion, "796CFD0C5306355C1C51570");
MODULE_INFO(rhelversion, "8.0");
