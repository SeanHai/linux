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
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x71e1d813, "mlxsw_core_port_clear" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xbfb7df3c, "mlxsw_core_driver_priv" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x3b55e014, "mlxsw_core_trap_register" },
	{ 0xc2c0aff6, "mlxsw_core_driver_unregister" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0x917dfe34, "mlxsw_core_port_init" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xf0b25c2e, "mlxsw_pci_driver_register" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x359e7410, "mlxsw_pci_driver_unregister" },
	{ 0xca34ccf, "mlxsw_core_max_ports" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5def83f9, "skb_push" },
	{ 0x7b306c3e, "mlxsw_core_port_eth_set" },
	{ 0x3ef99f63, "mlxsw_core_port_get_phys_port_name" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xd252e62d, "mlxsw_core_skb_transmit_busy" },
	{ 0x7bb73390, "mlxsw_core_driver_register" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x4a6ed376, "mlxsw_core_port_fini" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x277a46b0, "mlxsw_core_trap_unregister" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xa7765e88, "mlxsw_reg_query" },
	{ 0xbfd01f33, "mlxsw_core_port_ib_set" },
	{ 0x28318305, "snprintf" },
	{ 0xe44fa2a8, "mlxsw_core_skb_transmit" },
	{ 0x8854d198, "mlxsw_reg_write" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xf4909bea, "mlxsw_core_port_type_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlxsw_core,mlxsw_pci";

MODULE_ALIAS("pci:v000015B3d0000C738sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "21A49971DFF2A5C2D2FE20F");
MODULE_INFO(rhelversion, "8.0");
