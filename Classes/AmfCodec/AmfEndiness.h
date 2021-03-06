//
//  Created by lianghanzhen on 12/29/13.
//


#ifndef __AmfEndiness_H_
#define __AmfEndiness_H_


#define REVERSE_IF_LITTLE_ENDIAN(b, len) do {   \
    int           test;                         \
    char          *s, *e, tmp;                  \
    size_t        nlen;                         \
    unsigned char *testp;                       \
    test = 1;                                   \
    testp = (unsigned char *)&test;             \
    if (testp[0] == 1) {                        \
        s = (char *)b;                          \
        e = s + len - 1;                        \
        nlen = len / 2;                         \
        while(nlen--) {                         \
            tmp = *s;                           \
            *s = *e;                            \
            *e = tmp;                           \
            s++;                                \
            e--;                                \
        }                                       \
    }                                           \
} while(0)


#endif //__AmfEndiness_H_
