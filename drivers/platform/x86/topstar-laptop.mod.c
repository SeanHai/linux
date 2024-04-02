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
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0xf789deff, "input_register_device" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x27e1a049, "printk" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sparse-keymap";

MODULE_ALIAS("acpi*:TPS0001:*");
MODULE_ALIAS("acpi*:TPSACPI01:*");

MODULE_INFO(srcversion, "16A5C2775E9AC0963E1D355");
MODULE_INFO(rhelversion, "8.0");
