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
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x9334c63c, "passthru_features_check" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xe7486c43, "__put_net" },
	{ 0x8ed052a4, "rtnl_configure_link" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0x14c090e5, "rtnl_create_link" },
	{ 0xf445652d, "rtnl_link_get_net" },
	{ 0x28318305, "snprintf" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xcdf5a3e2, "dev_forward_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "50A3AC510C2CE6609E5A66F");
MODULE_INFO(rhelversion, "8.0");
