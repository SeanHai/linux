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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x27e1a049, "printk" },
	{ 0x8d710940, "pci_match_id" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xff02d358, "devm_watchdog_register_device" },
	{ 0xe6478472, "_dev_info" },
	{ 0x92e39ee2, "devm_ioremap" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x9c790386, "watchdog_init_timeout" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001002d00004385sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000790Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0867513144C3DFF8C280DF6");
MODULE_INFO(rhelversion, "8.0");
