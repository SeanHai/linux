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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0xf789deff, "input_register_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xfe7843b, "input_event" },
	{ 0xb0c77147, "gpiod_get_raw_value" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:gp2ap002a00f");

MODULE_INFO(srcversion, "A8F714754D50C3E7AC26D37");
MODULE_INFO(rhelversion, "8.0");
