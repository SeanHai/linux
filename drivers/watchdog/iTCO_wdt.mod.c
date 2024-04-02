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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xff02d358, "devm_watchdog_register_device" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x4e133fc, "iTCO_vendor_check_noreboot_on" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xa78bd894, "iTCO_vendor_pre_set_heartbeat" },
	{ 0x27e1a049, "printk" },
	{ 0x6d6ed41, "iTCO_vendor_pre_start" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a1dc991, "iTCO_vendor_pre_stop" },
	{ 0x8fb06343, "iTCO_vendor_pre_keepalive" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x58388972, "pv_lock_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iTCO_vendor_support";


MODULE_INFO(srcversion, "123955671817ECDF2133911");
MODULE_INFO(rhelversion, "8.0");
