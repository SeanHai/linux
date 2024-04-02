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
	{ 0xf1f77788, "devm_rtc_device_register" },
	{ 0xe6478472, "_dev_info" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xb0c77147, "gpiod_get_raw_value" },
	{ 0x7bcafccf, "gpiod_direction_input" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x89318f48, "gpiod_set_raw_value" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xec460791, "gpiod_direction_output_raw" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2755227D762ED301472ED01");
MODULE_INFO(rhelversion, "8.0");
