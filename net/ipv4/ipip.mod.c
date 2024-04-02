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
	{ 0xf717f50f, "ip_tunnel_get_link_net" },
	{ 0xb412aa2a, "ip_tunnel_dellink" },
	{ 0x7a129f94, "ip_tunnel_get_iflink" },
	{ 0x272c1d26, "ip_tunnel_get_stats64" },
	{ 0xe4e56519, "ip_tunnel_change_mtu" },
	{ 0x5eff8fe6, "ip_tunnel_uninit" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0xace33b95, "xfrm4_tunnel_deregister" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0x3d0508b4, "xfrm4_tunnel_register" },
	{ 0x9e6a466, "register_pernet_device" },
	{ 0x27e1a049, "printk" },
	{ 0x30233919, "__xfrm_policy_check" },
	{ 0x9c35da47, "ip_tunnel_rcv" },
	{ 0x3398015f, "metadata_dst_alloc" },
	{ 0xa6010d16, "__iptunnel_pull_header" },
	{ 0x14c02506, "ip_tunnel_xmit" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x7dd0d365, "ip_md_tunnel_xmit" },
	{ 0xb74efd8e, "iptunnel_handle_offloads" },
	{ 0x5dca77a5, "ip_tunnel_init_net" },
	{ 0xa433bec8, "ip_tunnel_delete_nets" },
	{ 0x87cf308b, "ipv4_update_pmtu" },
	{ 0xafd24650, "ipv4_redirect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4c3d62cd, "ip_tunnel_lookup" },
	{ 0xf598158e, "ip_tunnel_init" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x46dcd9db, "ip_tunnel_ioctl" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x92789153, "ip_tunnel_setup" },
	{ 0xfcbb14c4, "ip_tunnel_newlink" },
	{ 0x5f41d05b, "ip_tunnel_changelink" },
	{ 0xe22befbf, "ip_tunnel_encap_setup" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "B259D467CB2147360D1D757");
MODULE_INFO(rhelversion, "8.0");
