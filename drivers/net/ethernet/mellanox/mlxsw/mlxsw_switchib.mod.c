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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x71e1d813, "mlxsw_core_port_clear" },
	{ 0xbfb7df3c, "mlxsw_core_driver_priv" },
	{ 0x3b55e014, "mlxsw_core_trap_register" },
	{ 0xc2c0aff6, "mlxsw_core_driver_unregister" },
	{ 0x917dfe34, "mlxsw_core_port_init" },
	{ 0xf0b25c2e, "mlxsw_pci_driver_register" },
	{ 0x359e7410, "mlxsw_pci_driver_unregister" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x5def83f9, "skb_push" },
	{ 0x7bb73390, "mlxsw_core_driver_register" },
	{ 0x4a6ed376, "mlxsw_core_port_fini" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x277a46b0, "mlxsw_core_trap_unregister" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xa7765e88, "mlxsw_reg_query" },
	{ 0xbfd01f33, "mlxsw_core_port_ib_set" },
	{ 0x8854d198, "mlxsw_reg_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlxsw_core,mlxsw_pci";

MODULE_ALIAS("pci:v000015B3d0000CF08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000CB20sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6D213A2657BC9AA376850EF");
MODULE_INFO(rhelversion, "8.0");
