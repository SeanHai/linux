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
	{ 0xc39a43d9, "nf_ct_tmpl_alloc" },
	{ 0x10d630de, "nf_ct_tmpl_free" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x41715c18, "seq_puts" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xd1f0de11, "inet_proto_csum_replace4" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2b42dd03, "proc_create_net_data" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x7304539e, "nf_ct_extend_unregister" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0xe624ac61, "nf_ct_extend_register" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x81963de2, "nf_ct_ext_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "236418ED7CC568BC245F6CE");
MODULE_INFO(rhelversion, "8.0");
