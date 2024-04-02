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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfe7843b, "input_event" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x33d51101, "i2c_smbus_read_word_data" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf789deff, "input_register_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xebca8b54, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:synaptics_i2c");

MODULE_INFO(srcversion, "9EF3B6693B357785403CCE5");
MODULE_INFO(rhelversion, "8.0");
