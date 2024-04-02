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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc7f4b92, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x95a7b42f, "framebuffer_release" },
	{ 0x985ca3e0, "single_release" },
	{ 0xa6240750, "fb_sys_read" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x23647549, "__hid_request" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xb00d8864, "sys_copyarea" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0x829809c0, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0xfe7843b, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7544d0ce, "hid_hw_close" },
	{ 0x82b1cf66, "register_framebuffer" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x7a3b5a07, "hid_hw_open" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x4583cb81, "lcd_device_unregister" },
	{ 0xd0239c4a, "hid_set_field" },
	{ 0x9a910d01, "simple_open" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x4e5b933b, "hid_alloc_report_buf" },
	{ 0xe6478472, "_dev_info" },
	{ 0x310a9bca, "sys_fillrect" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x3b864ff4, "sys_imageblit" },
	{ 0x29a740dc, "flush_delayed_work" },
	{ 0x4ae12f3a, "fb_sys_write" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x631760d1, "framebuffer_alloc" },
	{ 0x11ced2f, "fb_deferred_io_cleanup" },
	{ 0x4cf2fcbc, "fb_deferred_io_init" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x9047c74b, "lcd_device_register" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x90988a50, "__hid_register_driver" },
	{ 0x91620a5e, "ir_raw_event_store" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0xcc63e6cd, "hid_unregister_driver" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x534ad7af, "ir_raw_event_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd9af5724, "hid_output_report" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xb4cb9948, "unregister_framebuffer" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,fb_sys_fops,syscopyarea,lcd,sysfillrect,sysimgblt";

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "3AD5189A4BCD508896D30F5");
MODULE_INFO(rhelversion, "8.0");
