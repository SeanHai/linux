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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5eba9410, "__request_region" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d000027B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DE5177AD7FBA87292A1E0CD");
MODULE_INFO(rhelversion, "8.0");
