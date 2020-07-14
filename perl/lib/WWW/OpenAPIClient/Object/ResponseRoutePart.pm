=begin comment

TravelTime API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.2.1
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::Object::ResponseRoutePart;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;

use WWW::OpenAPIClient::Object::Coords;
use WWW::OpenAPIClient::Object::ResponseTransportationMode;

use base ("Class::Accessor", "Class::Data::Inheritable");

#
#
#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech). Do not edit the class manually.
# REF: https://openapi-generator.tech
#

=begin comment

TravelTime API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.2.1
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('openapi_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {}); 
__PACKAGE__->mk_classdata('class_documentation' => {});

# new plain object
sub new { 
    my ($class, %args) = @_; 

    my $self = bless {}, $class;

    $self->init(%args);
    
    return $self;
}

# initialize the object
sub init
{
    my ($self, %args) = @_;

    foreach my $attribute (keys %{$self->attribute_map}) {
        my $args_key = $self->attribute_map->{$attribute};
        $self->$attribute( $args{ $args_key } );
    }
}

# return perl hash
sub to_hash {
    my $self = shift;
    my $_hash = decode_json(JSON->new->convert_blessed->encode($self));

    return $_hash;
}

# used by JSON for serialization
sub TO_JSON { 
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }

    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use openapi_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->openapi_types} ) {
        my $_json_attribute = $self->attribute_map->{$_key}; 
        if ($_type =~ /^array\[(.+)\]$/i) { # array
            my $_subclass = $1;
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif ($_type =~ /^hash\[string,(.+)\]$/i) { # hash
            my $_subclass = $1;
            my %_hash = ();
            while (my($_key, $_element) = each %{$hash->{$_json_attribute}}) {
                $_hash{$_key} = $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \%_hash;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
            $log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }
  
    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);

    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::OpenAPIClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}



__PACKAGE__->class_documentation({description => '',
                                  class => 'ResponseRoutePart',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'id' => {
        datatype => 'string',
        base_name => 'id',
        description => '',
        format => '',
        read_only => '',
            },
    'type' => {
        datatype => 'string',
        base_name => 'type',
        description => '',
        format => '',
        read_only => '',
            },
    'mode' => {
        datatype => 'ResponseTransportationMode',
        base_name => 'mode',
        description => '',
        format => '',
        read_only => '',
            },
    'directions' => {
        datatype => 'string',
        base_name => 'directions',
        description => '',
        format => '',
        read_only => '',
            },
    'distance' => {
        datatype => 'int',
        base_name => 'distance',
        description => '',
        format => '',
        read_only => '',
            },
    'travel_time' => {
        datatype => 'int',
        base_name => 'travel_time',
        description => '',
        format => '',
        read_only => '',
            },
    'coords' => {
        datatype => 'ARRAY[Coords]',
        base_name => 'coords',
        description => '',
        format => '',
        read_only => '',
            },
    'direction' => {
        datatype => 'string',
        base_name => 'direction',
        description => '',
        format => '',
        read_only => '',
            },
    'road' => {
        datatype => 'string',
        base_name => 'road',
        description => '',
        format => '',
        read_only => '',
            },
    'turn' => {
        datatype => 'string',
        base_name => 'turn',
        description => '',
        format => '',
        read_only => '',
            },
    'line' => {
        datatype => 'string',
        base_name => 'line',
        description => '',
        format => '',
        read_only => '',
            },
    'departure_station' => {
        datatype => 'string',
        base_name => 'departure_station',
        description => '',
        format => '',
        read_only => '',
            },
    'arrival_station' => {
        datatype => 'string',
        base_name => 'arrival_station',
        description => '',
        format => '',
        read_only => '',
            },
    'departs_at' => {
        datatype => 'string',
        base_name => 'departs_at',
        description => '',
        format => '',
        read_only => '',
            },
    'arrives_at' => {
        datatype => 'string',
        base_name => 'arrives_at',
        description => '',
        format => '',
        read_only => '',
            },
    'num_stops' => {
        datatype => 'int',
        base_name => 'num_stops',
        description => '',
        format => '',
        read_only => '',
            },
});

__PACKAGE__->openapi_types( {
    'id' => 'string',
    'type' => 'string',
    'mode' => 'ResponseTransportationMode',
    'directions' => 'string',
    'distance' => 'int',
    'travel_time' => 'int',
    'coords' => 'ARRAY[Coords]',
    'direction' => 'string',
    'road' => 'string',
    'turn' => 'string',
    'line' => 'string',
    'departure_station' => 'string',
    'arrival_station' => 'string',
    'departs_at' => 'string',
    'arrives_at' => 'string',
    'num_stops' => 'int'
} );

__PACKAGE__->attribute_map( {
    'id' => 'id',
    'type' => 'type',
    'mode' => 'mode',
    'directions' => 'directions',
    'distance' => 'distance',
    'travel_time' => 'travel_time',
    'coords' => 'coords',
    'direction' => 'direction',
    'road' => 'road',
    'turn' => 'turn',
    'line' => 'line',
    'departure_station' => 'departure_station',
    'arrival_station' => 'arrival_station',
    'departs_at' => 'departs_at',
    'arrives_at' => 'arrives_at',
    'num_stops' => 'num_stops'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
