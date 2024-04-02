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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe6478472, "_dev_info" },
	{ 0x72964271, "register_c_can_dev" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xdffc0f98, "alloc_c_can_dev" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0xbaf7198b, "free_c_can_dev" },
	{ 0xda7904f9, "unregister_c_can_dev" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0xcacdfd31, "c_can_power_down" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0xd49ffc7a, "c_can_power_up" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=c_can";

MODULE_ALIAS("of:N*T*Cbosch,c_can");
MODULE_ALIAS("of:N*T*Cbosch,c_canC*");
MODULE_ALIAS("of:N*T*Cbosch,d_can");
MODULE_ALIAS("of:N*T*Cbosch,d_canC*");
MODULE_ALIAS("of:N*T*Cti,dra7-d_can");
MODULE_ALIAS("of:N*T*Cti,dra7-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am3352-d_can");
MODULE_ALIAS("of:N*T*Cti,am3352-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am4372-d_can");
MODULE_ALIAS("of:N*T*Cti,am4372-d_canC*");
MODULE_ALIAS("platform:c_can_platform");
MODULE_ALIAS("platform:c_can");
MODULE_ALIAS("platform:d_can");

MODULE_INFO(srcversion, "BB451102CF535F5DD3FA9CD");
MODULE_INFO(rhelversion, "8.0");
