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
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x5fc7f26b, "ovs_netdev_tunnel_destroy" },
	{ 0xbe4586c3, "ovs_vport_ops_unregister" },
	{ 0x86ca63c4, "__ovs_vport_ops_register" },
	{ 0x967d8ed8, "ovs_vport_free" },
	{ 0xa2949ac6, "rtnl_delete_link" },
	{ 0xbb67b401, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x30e01da4, "dev_change_flags" },
	{ 0x23ce430, "gretap_fb_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa8e810de, "ovs_vport_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,ip_gre";


MODULE_INFO(srcversion, "DD4990A7C49E09E8A26EA93");
MODULE_INFO(rhelversion, "8.0");
