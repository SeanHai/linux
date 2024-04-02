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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15cfc1b0, "ath_printk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xecc30367, "ath_hw_get_listen_time" },
	{ 0xf83f59a1, "ath_regd_get_band_ctl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6504574d, "ath_hw_cycle_counters_update" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb127e703, "ath_hw_setbssidmask" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x89318f48, "gpiod_set_raw_value" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x28318305, "snprintf" },
	{ 0xb0c77147, "gpiod_get_raw_value" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x9e7d6bd0, "__udelay" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath";


MODULE_INFO(srcversion, "353EE872D3B10DE62C4E184");
MODULE_INFO(rhelversion, "8.0");
