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
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x999e8297, "vfree" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x27e1a049, "printk" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xed946a48, "init_net" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xeae3f506, "ip6_route_output_flags" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd542439, "__ipv6_addr_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FA58D538ADDE095D57D8C63");
MODULE_INFO(rhelversion, "8.0");
