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
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0xf789deff, "input_register_device" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xa848e02c, "gpiod_to_irq" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0x7503bff0, "device_property_match_string" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0x5296e7b0, "devm_input_allocate_device" },
	{ 0x5643b9c1, "devm_gpiod_get_array" },
	{ 0xe6478472, "_dev_info" },
	{ 0x59cc5a76, "device_property_present" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x61146fec, "gpiod_get_value_cansleep" },
	{ 0xfe7843b, "input_event" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D43A8096AA42A71F694B685");
MODULE_INFO(rhelversion, "8.0");
