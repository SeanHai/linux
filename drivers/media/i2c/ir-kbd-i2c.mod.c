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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0xe6478472, "_dev_info" },
	{ 0x5ccde853, "i2c_new_dummy" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x28318305, "snprintf" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "FEC2553F79D7CE4D37177D0");
MODULE_INFO(rhelversion, "8.0");
