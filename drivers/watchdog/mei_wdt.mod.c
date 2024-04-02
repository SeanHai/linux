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
	{ 0x9a910d01, "simple_open" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0xf9e13d03, "mei_cldev_driver_unregister" },
	{ 0x864e4696, "__mei_cldev_driver_register" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xfa2a078c, "mei_cldev_register_notif_cb" },
	{ 0x2c302b76, "mei_cldev_register_rx_cb" },
	{ 0xb6acac3e, "mei_cldev_enable" },
	{ 0xfc0c83f5, "mei_cldev_set_drvdata" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe33d3b91, "mei_cldev_ver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa096b889, "wait_for_completion_killable" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xd1de1d04, "mei_cldev_recv" },
	{ 0x14eb17f7, "mei_cldev_send" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x7b325197, "watchdog_register_device" },
	{ 0x29361773, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x410e800d, "mei_cldev_disable" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x51bd55b5, "completion_done" },
	{ 0x4eabadac, "mei_cldev_get_drvdata" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5739af90, "watchdog_unregister_device" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mei";

MODULE_ALIAS("mei:*:05b79a6f-4628-4d7f-899d-a91514cb32ab:*:*");

MODULE_INFO(srcversion, "9AAE7D3A1091010CF2F0934");
MODULE_INFO(rhelversion, "8.0");
