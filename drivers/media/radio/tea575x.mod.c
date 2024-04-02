#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe8b1e044, "video_device_release_empty" },
	{ 0x1f751a17, "v4l2_ctrl_log_status" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0x5792f848, "strlcpy" },
	{ 0x93184044, "v4l2_fh_release" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdca4e2a, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0xa08ed5ea, "v4l2_ctrl_poll" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "BA23D78DB7932274F1C16C5");
MODULE_INFO(rhelversion, "8.0");
