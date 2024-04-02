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
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x85142f62, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9ba71a68, "__rtnl_link_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x4f4033b9, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x65baf559, "down_write" },
	{ 0x5e94afdd, "pernet_ops_rwsem" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0x509f625d, "consume_skb" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FF01F2D4C53E7F939842380");
MODULE_INFO(rhelversion, "8.0");
