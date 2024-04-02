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
	{ 0xb8a280d, "net_ns_type_operations" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x1718c38d, "macvlan_link_register" },
	{ 0x29a0032d, "tap_destroy_cdev" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x466c9ad3, "__class_register" },
	{ 0xb76e2082, "tap_create_cdev" },
	{ 0x4fe6fa6e, "macvlan_common_newlink" },
	{ 0x14ab823, "netdev_rx_handler_register" },
	{ 0x1018d791, "tap_handle_frame" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0x2df52479, "device_create" },
	{ 0x714073ba, "tap_free_minor" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0x661852ac, "tap_queue_resize" },
	{ 0xde3caf3e, "tap_get_minor" },
	{ 0x28318305, "snprintf" },
	{ 0x34b2df09, "macvlan_common_setup" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0x6daa302a, "macvlan_dellink" },
	{ 0xac6fe671, "tap_del_queues" },
	{ 0xd1cdac20, "netdev_rx_handler_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=macvlan,tap";


MODULE_INFO(srcversion, "40D16A8E16440DDA7D34E6B");
MODULE_INFO(rhelversion, "8.0");
